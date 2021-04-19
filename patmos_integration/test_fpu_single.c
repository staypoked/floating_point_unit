/*
	Test Floating-Point Unit Addressed Mapped

	Author: Daniel [Harringer, Scheuchenstuhl], Stefan Ulmer

*/

#include <stdio.h>
#include <stdlib.h>
#include <machine/patmos.h>
#include <machine/rtc.h>
#include <math.h>

#define FPU_BASE       0xf00c0000
#define ENABLE_REG     *((volatile _IODEV unsigned int *) (FPU_BASE + 0x0))
#define OPERATION_REG  *((volatile _IODEV unsigned int *) (FPU_BASE + 0x4))
#define OPERAND_A_REG  *((volatile _IODEV unsigned int *) (FPU_BASE + 0x8))
#define OPERAND_B_REG  *((volatile _IODEV unsigned int *) (FPU_BASE + 0xC))
#define RESULT_REG     *((volatile _IODEV unsigned int *) (FPU_BASE + 0x10))
#define STATUS_REG     *((volatile _IODEV unsigned int *) (FPU_BASE + 0x14))

#define ADD 0x1
#define SUB 0x2
#define MUL 0x4
#define DIV 0x8

#define ZERO 0xc
#define OV   0x20
#define UV   0x40
#define EXP  0x80

// This must be declared outisde of the main function to actually control the FPU
#if defined(ENABLE_HWFPU)
unsigned __USE_HWFPU__ = ENABLE_HWFPU;
#endif

int main(){
  #if defined(ENABLE_HWFPU)
  unsigned __USE_HWFPU__ = ENABLE_HWFPU;
  #endif
  
  // Store time for comparison
  volatile unsigned long long startTime;
  volatile unsigned long long endTime;    
     
  // Floating point numbers for comparison
  float a = 21.896;
  float b = 9.8;
  float soft_result = 0.0, hard_result = 0.0;
  
  puts("Hello, testing floating point unit starts now!");
 
  /**
   * Software floating point computation
   */
	// get system time
 	startTime = get_cpu_usecs();
  
  soft_result = a * b;
  
  // get system time
  endTime = get_cpu_usecs();
  
  // print result
  printf("Soft-Float Result = %f (computed in %llu μs)\n", soft_result, endTime - startTime);
  
  /**
   * Hardware floating point computation
   */
  OPERATION_REG = MUL; 
  OPERAND_A_REG = 0x41AF2B02; // 21.896
  OPERAND_B_REG = 0x411CCCCD; // 9.8
  
  // get system time
 	startTime = get_cpu_usecs();
  ENABLE_REG = 1;
  while(ENABLE_REG != 0){continue;}
  
  // get system time
  endTime = get_cpu_usecs();
  
  hard_result = (unsigned long long) RESULT_REG;
  // print result
  printf("Hard-Float Result = %f (computed in %llu μs)\n", hard_result, endTime - startTime);

}

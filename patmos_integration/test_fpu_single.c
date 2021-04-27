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

#define COUNTER        *((volatile _IODEV unsigned int *) 0xf00b0000)

#define ADD 0x1
#define SUB 0x2
#define MUL 0x4
#define DIV 0x8

#define ZERO 0xc
#define OV   0x20
#define UV   0x40
#define EXP  0x80


int main(){
 
  // Store time for comparison
  volatile unsigned long long startTime;
  volatile unsigned long long endTime;    
     
  // Floating point numbers for comparison
  float a = 21.896;
  float b = 9.8;
  
  //union { unsigned long long b; double f; } a;
	//union { unsigned long long b; double f; } b;
  
  //union { unsigned long long b; double f; } hard_res;
  //union { unsigned long long b; double f; } soft_res;
  
  float soft_result = 0.0, hard_result = 0.0;
  unsigned int result;
  
  puts("Hello, testing floating point unit starts now!");
 
 /**
   * Hardware floating point computation
   */
  puts("Hardware implementation!");
  OPERATION_REG = ADD; 
  OPERAND_A_REG = 0x41AF2B02; // 21.896
  OPERAND_B_REG = 0x411CCCCD; // 9.8
  ENABLE_REG = 1;
  
  // get system time
  startTime = COUNTER;
  
  //while(ENABLE_REG != 0){continue;}
  
  // get system time
  endTime = COUNTER;
  result = RESULT_REG;
  
  // print result
  printf("Hard-Float Result = 0x%x (computed in %llu clock cycles)\n", RESULT_REG, endTime - startTime);

  puts("---------------------------------------------------------");
 
  /**
   * Software floating point computation
   */
   puts("Soft-Float implementation!");
  // get system time
  for(int i = 1; i <= 5; i++){
	  startTime = COUNTER;
	  a = a +1;
	  
	  soft_result = a + b;
	  
	  // get system time
	  endTime = COUNTER;
	  
	  // print result
	  printf("Soft-Float Result = %f (computed in %llu clock cycles)\n", soft_result, endTime - startTime);
  }
  
  
}

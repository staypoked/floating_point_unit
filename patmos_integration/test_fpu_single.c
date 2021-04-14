/*
	Test Floating-Point Unit Addressed Mapped

	Author: Daniel [Harringer, Scheuchenstuhl], Stefan Ulmer

*/

#include <stdio.h>
#include <stdlib.h>
#include <machine/patmos.h>
#include <machine/rtc.h>

#define FPU_BASE          0xf00c0000
#define OPERATION_REG  *((volatile _IODEV unsigned int *) (FPU_BASE + 0x0))
#define OPERAND_A_REG  *((volatile _IODEV unsigned int *) (FPU_BASE + 0x4))
#define OPERAND_B_REG  *((volatile _IODEV unsigned int *) (FPU_BASE + 0x8))
#define RESULT_REG     *((volatile _IODEV unsigned int *) (FPU_BASE + 0xC))
#define STATUS_REG     *((volatile _IODEV unsigned int *) (FPU_BASE + 0x10))
//#define ENABLE_HWFPU

// This must be declared outisde of the main function to actually control the FPU
#if defined(ENABLE_HWFPU)
unsigned __USE_HWFPU__ = ENABLE_HWFPU;
#endif

int main(){
  #if defined(ENABLE_HWFPU)
  unsigned __USE_HWFPU__ = ENABLE_HWFPU;
  #endif
  
  union { unsigned long long b; double f; } x;
  union { unsigned long long b; double f; } y;
  
  puts("Hello, testing floating point unit starts now!");
  /*printf("Please enter operand A = ");
  scanf("%lf", &x.f);
  printf("Please enter operand B = ");
  scanf("%lf", &y.f);
  */
  OPERATION_REG = 1;
  OPERAND_A_REG = 0x41A00000;
  OPERAND_B_REG = 0x41200000;
 
 while(STATUS_REG != 16){printf("Status: %d\n", STATUS_REG);}
 
  printf("Result: 0x%x\nStatus: %d\n", RESULT_REG, STATUS_REG);  
  
}

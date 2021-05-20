/*
	Test Floating-Point Unit Addressed Mapped

	Author: Daniel [Harringer, Scheuchenstuhl], Stefan Ulmer

*/

#include <stdio.h>
#include <stdlib.h>
#include <machine/patmos.h>
#include <machine/rtc.h>
#include <math.h>
#include <time.h>

#define FPU_BASE       0xf00c0000
#define ENABLE_REG     *((volatile _IODEV unsigned int *) (FPU_BASE + 0x0))
#define OPERATION_REG  *((volatile _IODEV unsigned int *) (FPU_BASE + 0x4))
#define OPERAND_A_REG  *((volatile _IODEV unsigned int *) (FPU_BASE + 0x8))
#define OPERAND_B_REG  *((volatile _IODEV unsigned int *) (FPU_BASE + 0xC))
#define RESULT_REG     *((volatile _IODEV unsigned int *) (FPU_BASE + 0x10))
#define STATUS_REG     *((volatile _IODEV unsigned int *) (FPU_BASE + 0x14))
#define FINISH_REG     *((volatile _IODEV unsigned int *) (FPU_BASE + 0x18))

#define COUNTER        *((volatile _IODEV unsigned int *) 0xf00b0000)

#define ADD 0x1
#define SUB 0x2
#define MUL 0x4
#define DIV 0x8

#define ZERO 0x10
#define OV   0x20
#define UV   0x40
#define EXP  0x80


int main(){
 
  // Store time for comparison
  volatile unsigned long long startTime;
  volatile unsigned long long endTime;    
     
  // Floating point numbers for comparison
  union { unsigned long b; float f; } inf;
  union { unsigned long b; float f; } zero;
  union { unsigned long b; float f; } a;
  union { unsigned long b; float f; } b;
  inf.b = 2139095040;
  zero.f = 0.0;
  a.f = 95632.0;
  b.f = 180.43773;
  
  union { unsigned long b; float f; } hard_res;
  union { unsigned long b; float f; } soft_res;
 
  // generat a seed
  srand(time(NULL));
  
  // print structure
 
  a.f = (float) rand() / RAND_MAX * 10000.0 - 5000.0;
  b.f = (float) rand() / RAND_MAX * 10000.0 - 5000.0;

  printf("a: %.2f, b: %.2f", a.f, b.f);
}

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
 
  
  puts("Hello, testing floating point unit starts now!");
  puts("----------------------- Test ADD -----------------------");
	 /**
		 * Hardware floating point computation
		 */
		puts("Hardware implementation!");
		OPERATION_REG = ADD; 
		OPERAND_A_REG = a.b; // 21.896
		OPERAND_B_REG = b.b; // 9.8
		ENABLE_REG = 1;
		
		// get system time
		startTime = COUNTER;
		
		while(FINISH_REG != 0){continue;}
		
		// get system time
		endTime = COUNTER;
		hard_res.b = RESULT_REG;
		
		// print result
		printf("Hard-Float Result = %f (computed in %llu clock cycles)\n", hard_res.f, endTime - startTime);
		unsigned char zero_flag = (unsigned char) ((STATUS_REG & ZERO) >> 4);
		unsigned char underflow_flag = (unsigned char) ((STATUS_REG & UV) >> 5);
		unsigned char overflow_flag = (unsigned char) ((STATUS_REG & OV) >> 6);
		unsigned char exception_flag = (unsigned char) ((STATUS_REG & EXP) >> 7);

		puts("FPU Flags: |EXC|UND|OVR|ZERO|");
		printf("           |  %u|  %u|  %u|   %u|\n", exception_flag, underflow_flag, overflow_flag, zero_flag);

		ENABLE_REG = 0;
		puts("--------------------------------------------------------");
	 
		/**
		 * Software floating point computation
		 */
		 puts("Soft-Float implementation!");
		// get system time
			startTime = COUNTER;
			soft_res.f = a.f + b.f;
			
			// get system time
			endTime = COUNTER;
			
			// print result
			printf("Soft-Float Result = %f (computed in %llu clock cycles)\n", soft_res.f, endTime - startTime);
	
	puts("\n\n----------------------- Test SUB -----------------------");
	 /**
		 * Hardware floating point computation
		 */
		puts("Hardware implementation!");
		OPERATION_REG = SUB; 
		OPERAND_A_REG = a.b; // 21.896
		OPERAND_B_REG = b.b; // 9.8
		ENABLE_REG = 1;
		
		// get system time
		startTime = COUNTER;
		
		while(FINISH_REG != 0){continue;}
		
		// get system time
		endTime = COUNTER;
		hard_res.b = RESULT_REG;
		
		// print result
		printf("Hard-Float Result = %f (computed in %llu clock cycles)\n", hard_res.f, endTime - startTime);
		zero_flag = (unsigned char) ((STATUS_REG & ZERO) >> 4);
		underflow_flag = (unsigned char) ((STATUS_REG & UV) >> 5);
		overflow_flag = (unsigned char) ((STATUS_REG & OV) >> 6);
		exception_flag = (unsigned char) ((STATUS_REG & EXP) >> 7);

		puts("FPU Flags: |EXC|UND|OVR|ZERO|");
		printf("           |  %u|  %u|  %u|   %u|\n", exception_flag, underflow_flag, overflow_flag, zero_flag);
		ENABLE_REG = 0;
	
		puts("--------------------------------------------------------");
	 
		/**
		 * Software floating point computation
		 */
		 puts("Soft-Float implementation!");
		// get system time
			startTime = COUNTER;
			soft_res.f = a.f - b.f;
			
			// get system time
			endTime = COUNTER;
			
			// print result
			printf("Soft-Float Result = %f (computed in %llu clock cycles)\n", soft_res.f, endTime - startTime);
  
  puts("\n\n----------------------- Test MUL -----------------------");
	 /**
		 * Hardware floating point computation
		 */
		puts("Hardware implementation!");
		OPERATION_REG = MUL; 
		OPERAND_A_REG = a.b; // 21.896
		OPERAND_B_REG = b.b; // 9.8
		ENABLE_REG = 1;
		
		// get system time
		startTime = COUNTER;
		
		while(FINISH_REG != 0){continue;}
		
		// get system time
		endTime = COUNTER;
		hard_res.b = RESULT_REG;
		
		// print result
		printf("Hard-Float Result = %f (computed in %llu clock cycles)\n", hard_res.f, endTime - startTime);
		zero_flag = (unsigned char) ((STATUS_REG & ZERO) >> 4);
		underflow_flag = (unsigned char) ((STATUS_REG & UV) >> 5);
		overflow_flag = (unsigned char) ((STATUS_REG & OV) >> 6);
		exception_flag = (unsigned char) ((STATUS_REG & EXP) >> 7);

		puts("FPU Flags: |EXC|UND|OVR|ZERO|");
		printf("           |  %u|  %u|  %u|   %u|\n", exception_flag, underflow_flag, overflow_flag, zero_flag);

		ENABLE_REG = 0;
		puts("--------------------------------------------------------");
	 
		/**
		 * Software floating point computation
		 */
		 puts("Soft-Float implementation!");
		// get system time
			startTime = COUNTER;
			soft_res.f = a.f * b.f;
			
			// get system time
			endTime = COUNTER;
			
			// print result
			printf("Soft-Float Result = %f (computed in %llu clock cycles)\n", soft_res.f, endTime - startTime);
			
			puts("\n\n----------------------- Test DIV -----------------------");
	 /**
		 * Hardware floating point computation
		 */
		puts("Hardware implementation!");
		OPERATION_REG = DIV; 
		OPERAND_A_REG = a.b; // 21.896
		OPERAND_B_REG = b.b; // 9.8
		ENABLE_REG = 1;
		
		// get system time
		startTime = COUNTER;
		
		while(FINISH_REG != 0){continue;}
		
		// get system time
		endTime = COUNTER;
		hard_res.b = RESULT_REG;
		
		// print result
		printf("Hard-Float Result = %f (computed in %llu clock cycles)\n", hard_res.f, endTime - startTime);
		zero_flag = (unsigned char) ((STATUS_REG & ZERO) >> 4);
		underflow_flag = (unsigned char) ((STATUS_REG & UV) >> 5);
		overflow_flag = (unsigned char) ((STATUS_REG & OV) >> 6);
		exception_flag = (unsigned char) ((STATUS_REG & EXP) >> 7);

		puts("FPU Flags: |EXC|UND|OVR|ZERO|");
		printf("           |  %u|  %u|  %u|   %u|\n", exception_flag, underflow_flag, overflow_flag, zero_flag);

		ENABLE_REG = 0;
		puts("--------------------------------------------------------");
	 
		/**
		 * Software floating point computation
		 */
		 puts("Soft-Float implementation!");
		// get system time
			startTime = COUNTER;
			soft_res.f = a.f / b.f;
			
			// get system time
			endTime = COUNTER;
			
			// print result
			printf("Soft-Float Result = %f (computed in %llu clock cycles)\n", soft_res.f, endTime - startTime);
  
  
}

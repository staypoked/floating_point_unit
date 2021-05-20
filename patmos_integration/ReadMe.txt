cd t-crest/patmos
make emulator
make comp APP=test_fpu_single
	use this to deactivate reordering
	patmos-clang  -target patmos-unknown-unknown-elf -O0 -I/home/patmos/t-crest/patmos/c -I /home/patmos/t-crest/patmos/c/libelf/ -mpatmos-disable-vliw  -mpatmos-method-cache-size=0x1000 -mpatmos-stack-base=0x200000 -mpatmos-shadow-stack-base=0x1f8000 -Xgold --defsym -Xgold __heap_end=0x1f0000 -Xgold -T -Xgold /home/patmos/t-crest/patmos/tmp/../hardware/spm_ram.t -o /home/patmos/t-crest/patmos/tmp/test_fpu_single.elf c/test_fpu_single.c c/cmp/nocinit.c -L/home/patmos/t-crest/patmos/tmp -lmp -lnoc -lcorethread -leth -lelf -lsd -lm -laudio

	// for benchmarks
	patmos-clang  -target patmos-unknown-unknown-elf -O0 -I/home/patmos/t-crest/patmos/c -I /home/patmos/t-crest/patmos/c/libelf/ -mpatmos-disable-vliw  -mpatmos-method-cache-size=0x1000 -mpatmos-stack-base=0x200000 -mpatmos-shadow-stack-base=0x1f8000 -Xgold --defsym -Xgold __heap_end=0x1f0000 -Xgold -T -Xgold /home/patmos/t-crest/patmos/tmp/../hardware/spm_ram.t -o /home/patmos/t-crest/patmos/tmp/fpu_benchmark.elf c/fpu_benchmark.c c/cmp/nocinit.c -L/home/patmos/t-crest/patmos/tmp -lmp -lnoc -lcorethread -leth -lelf -lsd -lm -laudio

patemu tmp/test_fpu_single.elf

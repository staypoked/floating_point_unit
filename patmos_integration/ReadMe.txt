cd t-crest/patmos
make emulator
make comp APP=test_fpu_single
patemu tmp/test_fpu_single.elf

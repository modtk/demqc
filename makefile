targets = main.c utility/*.c iofile/*.c
source_dir = src/
build_dir = build/
name = demqc

compile:
	mkdir -p $(build_dir)
	gcc -o $(build_dir)$(name) $(addprefix $(source_dir), $(targets)) -lcurl
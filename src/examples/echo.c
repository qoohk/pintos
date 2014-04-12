#include <stdio.h>
#include <syscall.h>

int
main (int argc, char **argv)
{
	int fd = open("aaaa.txt");
	if(fd == -1) create("aaaa.txt",4096);
	while(1)
	{
		printf("fd:%d\n",fd);
		fd = open("aaaa.txt");
	}
}

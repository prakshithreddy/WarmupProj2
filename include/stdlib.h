#ifndef _STDLIB_H
#define _STDLIB_H

#include <sys/defs.h>

int main(uint64_t val);
//int main(int argc, char *argv[], char *envp[]);

void exit(int status);
void *malloc(size_t size);
void free(void *ptr);
int setenv(char *name,char *value, int overwrite);


#endif

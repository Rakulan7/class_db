#include <stdio.h>
#include <stdlib.h>
#include "repl.c"
#include <stdbool.h>
#include <string.h>

#define MAX_COMMAND_LEN 256

int main(int argc, char* argv[], char* envp[]){

	printf("Welcome to ESGI database.\nUsage : insert <id> <name> <email> / select.\nFor exit : .exit\n");
	repl();
	return 0;

}

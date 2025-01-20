#include <stdio.h>
#include "repl.h"

int main(){

	printf("Welcome to ESGI database.\nUsage : insert <id> <name> <email> / select.\nFor exit : .exit\n");
	repl();
	return 0;

}

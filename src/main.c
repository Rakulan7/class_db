#include <stdio.h>
#include <stdlib.h>
#include "repl.c"
#include <stdbool.h>
#include <string.h>

#define MAX_COMMAND_LEN 256

int main(int argc, char* argv[], char* envp[]){
  
	char command[MAX_COMMAND_LEN];

	printf("Bienvenue dans votre SGBD Rakus !\nPour sortir taper exit.\n");
	while(1) {
	
		printf("> ");
		if (fgets(command, MAX_COMMAND_LEN, stdin) == NULL) break;
		command[strcspn(command, "\n")] = 0;

		if (strcmp(command, "exit") == 0) {
			printf("Au revoir !\n");
			break;
		}

		printf("%s\n", command);
	
	}

	//repl();
	return 0;
  
}

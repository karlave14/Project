#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void instructions(){
	printf("Welcome to hangman\n");
	printf("You have 5 lives\n");
	printf("You have penalties if:\n");
	printf("   You waste a life reating a previously chosen letter\n");
	printf("   You lose a life if you choose a letter that is not in the word.\n");
	printf("  --------------------------------------------------------------------------\n");
	/*
	printf("words:\n");
	printf("    Future\n");
	printf("    Rainbow\n");
	printf("    Wedding\n");
	printf("    Strawberry\n");
	printf("    Nostalgia\n");
	printf("Enter the word: \n");
	*/

}
void words(){
	char future;
	char rainbow;
	char wedding;
	char strawberry;
	char nostalgia;
}

char palabras[100][100];
void main(int argc, char** argv){
	int arg = argc-1;
	if(arg == 0){
	instructions();
	}
	for (int i=1; i<argc; i++){
		*strcpy(words);

	}
}

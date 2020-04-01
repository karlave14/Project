#include <string.h>
#include <stdlib.h>
#include <stdio.h>


int main() {
        printf("Welcome to hangman\n");
        printf("You have 5 lives\n");
        printf("You have penalties if:\n");
        printf("   You waste a life reating a previously chosen letter\n");
        printf("   You lose a life if you choose a letter that is not in the word.\n");
        printf("  --------------------------------------------------------------------------\n");


  char answer[150];
  printf("Enter word to guess: ");
  scanf(" %s", answer);

  int L = strlen(answer);
  int mask[L];
  for (int i= 0; i < L; ++i) {
    mask[i] = 0;
  }

  int gameover = 0;
  while (! gameover) {

    printf("The word is : ");
    for(int j=0; j < L; ++j) {
      if (mask[j]) {
        printf("%c", answer[j]);
      }
      else {
        printf("*");
      }
    }
    printf("\n");

    // Get player's next guess
    char guess;
    printf("Letter? ");
    scanf(" %c", &guess);

    // Mark true all mask positions corresponding to guess
    for(int k=0; k < L; ++k) {
      if (answer[k] == guess) {
	mask[k] = 1;
      }
    }


    gameover = 0;
    for(int m = 0; m < L; ++m) {
      if (!mask[m]) {
        gameover = 0;
        break;
      }
    }
  }
  printf("Congratulations! The word is \"%s\".\n", answer);
  return 0;
}


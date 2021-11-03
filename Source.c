#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {

	int secretnumber = 5; //number that will be guessed//
	int guess = 100; //placeholder value until user assigns a real value//
	int guesscount = 0; //amount of guesses the user has currently used//
	int guesslimit = 3; //amount of guesses the user man not exceed before while loop is terminated and game is ended//
	int outofguesses = 0; //boolean variable//

	while (guess != secretnumber && outofguesses == 0) {
		if (guesscount < guesslimit) {
			printf("Enter a number: ");
			scanf("%d", &guess);
			guesscount++;
			if (guess != secretnumber) {
				printf("%d guesses left.\n", (guesslimit - guesscount));
			}
		}
		else {
			outofguesses = 1;
		}
	}
	if (outofguesses == 1) {
		printf("Failure, out of guesses.");
	}
	else {
		printf("You Win!");
	}
	return 0;
}
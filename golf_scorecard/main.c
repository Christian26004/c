#include <stdio.h>

int main() {
	// Tracks total score, will be printed at the end.
	int totalScore = 0;
	
	for (int i = 1; i <= 9; i++) {
		int input; // Stores the inpute from the user.
		
		// Use input.
		printf("What was your score for hole %d? ", i);
		scanf("%d", &input);

		// Call the game early if input is any negative number.
		if (!(input > 0)) {
			printf("You ended the game early.\n");
			break;
		}

		// If user gets over 10 strokes on a hole.
		if (!(input < 10)) {
			printf("Ouch, a blow-up hole!\n");
		}

		// If user gets a hole in 1.
		if (!(input > 1)) {
			printf("You got a hole in 1!\n");
		}	

		// Adds input to totalScore.
		totalScore += input;
	}

	// Tell the user their final score.
	printf("You finished the day with a score of %d.\n", totalScore);

	return 0;
}

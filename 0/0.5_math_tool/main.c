#include <stdio.h>

// Takes int input
// Multiplies input by i - 1 for size of i > 0.
// Returns input.
int factorial(int input) {
	// Account for 0! = 1
	if (input == 0) return 1;
	for (int i = input - 1; i > 0; i--) {
		input *= i;
	}
	return input;
}

// Takes int input.
// Multiplies input by input.
// returns result.
int square(int input) {
	return input * input;
}

int main() {
	printf("Enter a positive integer ");
	
	// User input, check if integer is an integer and positive.
	int input = 0;
	if (scanf("%d", &input) == 0) {
		printf("Please input an integer\n");
		return 1;
	}
	if (!(input >= 0)) {
		printf("Integer must be greater than or equal to zero\n");
		return 1;
	}

	// Call functions to preform math operations.
	int squareSum = square(input);
	int factorialSum = factorial(input);

	// Print results.
	printf("%d squared is equal too %d.\n", input, squareSum);
	printf("%d factorial is equal too %d.\n", input, factorialSum);
	return 0;
}

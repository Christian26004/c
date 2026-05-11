#include <stdio.h>

// Function which squares the value.
int square (int x) {
	return x * x;
}

// Function which cubes the value.
int cube (int x) {	
	return x * x * x;
}

int power (int input, int exponent) {
	int output = 1;

	for (int i = 0; i < exponent; i++) {
		output *= input;
	}

	return output;
}

// Passing an array though to a funciton
int oldestValue (int ages[], int size) {
	
	int largest = ages[0];

	for (int i = 0; i < size; i++) {

		if (ages[i] > largest) {
			largest = ages[i];
		}

	}

	return largest;

}

int main () {
	int x = 5;

	int xSquared = square(x); // Square value.

	printf("%d\n", xSquared); // Print squared value.

	int xCube = cube(x); // Cube value.

	printf("%d\n", xCube); // Print cubed value.

	int exponent = 2;
       	int sum = power(x, exponent); // Uses exponent to put value to the power
				      // of a number	
	printf("%d\n", sum);	

	int size = 7;
	int ages[] = {1, 4, 53, 23, 23, 9, 52};

	printf("%d\n", oldestValue(ages, size)); // Passing array to function	

	return 0;
}

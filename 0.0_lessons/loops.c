#include <stdio.h>

int main() {
	// Loops need 3 things to be successful
	// - initialization
	// - comparison
	// - update 
	
	int size = 8;	
	int ages[] = {12, 43, 54, 3, 43, 78, 83, 98};

	// Note: some older versions of C require the i initilized outside the loop	
	for (int i = 0; i < size; i++) {
		printf("age[%d] = %d\n", i, ages[i]);	
	}

	// While this is not about arrays you can calculate the array length
	// if you dont to manually count the size if you change the array
	// length like this
	int calculatedSize = sizeof(ages) / sizeof(ages[0]); 
	// This calculates the total bytes of the array then divides it 
	// by the size of an element in the array also in bytes (usually the first element) 
	// which equals the number of total indices.
	printf("The size of the array is %d\n", calculatedSize);	
	// This wont work if you are passing an array to a function as an arugment,
	// it must be done before passing it to a function, this is because arrays
	// turn into pointers when passed as an argument so sizeof gives you the
	// size of the pointer not the array.
	

	// This is a nested for loop, produces a kind cool staircase. It works with the
	// logic for i equals 0 - 9, j = i in a decending order. So lets say we were in
	// a position where i equals 4 it goes into j's loop which goes j = i = 4, print j,
	// j-- = 3, print ect... once j = 0 it increments i and runs the inner loop again
	// until i = 9.
	for (int i = 0; i < 10; i++) {
		for (int j = i; j >= 0; j--) {
			printf("%d ", j);
		}
		printf("\n");
	}
	// these are used all the time from arrays all the way to even how Minecraft
	// generates the inventory system on screen (although that is java) 
	
	// While loop
	// You cannot initialization insider while loop, for a while loop the () is only
	// used for comparison
	int i = 0; // initilization
	while (i < calculatedSize) { // comparison
		printf("age[%d] = %d\n", i, ages[i]);

		i++; // update
	}

	// Do-While loop
	// Will always be executed at least one time (good for menus)
	// this also requires initialization outside the loop.
	do {
		printf("Display Menu\n 0 : Display Menu\n 1 : Exit\n");
		scanf("%d", &i);
	} while (i == 0); 
	return 0;
}

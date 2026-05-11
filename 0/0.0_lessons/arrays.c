#include <stdio.h>

int main() {
	// arrays cannot be changed after being compiled
	// these are called statically typed arrays
	int ages[10]; // this is an array with 10 empty elements
	// first element - index 0
	// 0 - 9 is 10 elements
	ages[4] = 57; // assigns 57 to element 4 in the array
	// Note: if you dont initilize the array during the declaration you
	// must initilize each element one-by-one.
	// below is an example on how to do it all at the same time!
	
	// you can also do this when declaring an array like
	// int ages[] = {...}; or even age[10] = {...};
	// declaring the number of elements can limit you in how freely you 
	// can add elements to the initilized array but can be useful when
	// trying to prevent bugs if you know how large your array will be.`
	int agesRevised[] = {1, 5, 59, 32, 59, 39, 69, 10, 14, 17};	

	// having a size variable can also be very usefull
	int size = 10;
	// so if we had a function that printed an array it would take 2 arguments
	// we would require a size before entering into the function because of 
	// pointer decay, you cant find the size of an array after entering a 
	// function because the array becomes a pointer
	// printArray(agesRevised, size);
	// so this would be the logic for the printArray function	
	for (int i = 0; i < size; i++) {
		printf("%d ", agesRevised[i]);
	}
	printf("\n");

	agesRevised[4] = 5; // this changes the value of element 4 to 5
	for (int i = 0; i < size; i++) {
		printf("%d ", agesRevised[i]);
	}
	printf("\n");
	// If this was a function we could do it like this
	// printArray(agesRevised, size);
	// agesRevised[5] = 4;
	// printArray(agesRevised, size);
	// functions will be talked about more in the future but this is why
	// they are important

	// multi-dimension arrays
	// arrays with more than 1 dimension
	int studentGrades[4][5] = {
	{1, 2, 3, 4, 5},
	{3, 2, 4, 5, 2},
	{4, 5, 8, 0, 1},
	{4, 1, 5, 9, 8}
	};

	// to print this you need a nested for loop one for the rows and 
	// one for the columns
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			// prints the current row column-by-column
			printf("%d ", studentGrades[i][j]);
		}
		printf("\n"); // goes to the next row
	}
	return 0;
}

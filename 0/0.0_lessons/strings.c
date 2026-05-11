#include <stdio.h>
#include <string.h> // gives some extra functionaility to strings

int main() {
	char name[20]; // Ends with '\0'.
	
	printf("Please type your name and press enter: ");

	scanf("%19s", name); // Requires the 19 to specify at most 19 char's.
	// An array doesn't need & (address-of operator) because it already is one
	
	// This gets the number of characters in the string.
	int letter = 0;
	while(name[letter] != '\0') {
		letter++;	
	}
	
	printf("Size of name is %d letters.\n", letter);

	// Some compilers might want %d to be $lu	
	printf("Size of name is %d letters.\n", strlen(name));
	
	// Compare 2 strings with each other.
	if (strcmp(name, "Caleb") == 0) {
		printf("You get access!\n");
	}

	char copy[20];
	strcpy(copy, name); // destination, origin
	printf("Copy of name is %s\n", copy);
	char lastName[] = "Curry";
	strcat(copy, lastName); // the first name is where it will be copied too.
	printf("Full name is %s\n", copy);
	return 0;
}

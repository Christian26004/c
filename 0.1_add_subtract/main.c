#include <stdio.h>

int main() {
	int a;
	int b;
	char choice;

	printf("Please input a number: ");
	if (!(scanf("%d", &a) == 1)) { 
		printf("You didn't type a number\n");	
		return 1;
	}
	printf("a = %d\n", a);
	printf("Please input a number: ");
	if (!(scanf("%d", &b) == 1)) { 
		printf("You didn't type a number\n");	
		return 1;
	}
	printf("b = %d\n", b);
	printf("Please type 's' for subtract or 'a' for add number: ");
	if (!(scanf(" %c", &choice) == 1)) { 
		printf("You didn't type a character.\n");
		return 1;
	}
	if (choice != 's' && choice != 'a') {
		printf("You must type a or s.\n");
		return 1;
	}

	int output;
	switch (choice) {
		case 'a':
			output = a + b;
			printf("%d + %d = %d\n", a, b, output);
			break;	
		case 's':
			output = a - b;
			printf("%d - %d = %d\n", a, b, output);
			break;
		defualt : 
			printf("An error has occured!\n");
			return 1;
	}
	return 0;	
}

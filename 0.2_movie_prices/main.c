#include <stdio.h>

int main() {
	int price = 12;
	int age;
	int time;

	printf("What is your age? ");
	if (!(scanf("%d", &age) == 1)) {
		printf("Age must be a number\n");
		return 1;
	}
	if (age < 0 || age > 110) {
		printf("Age must be between 0 and 110 years old\n");
		return 1;
	}
	if (age >= 65) {
		printf("You get a senior discount!\n");
		price = 8;
	} else if (age < 12) {
		printf("You get a child discount!\n");
		price = 7;
	} else {
		printf("You get base price :(\n");
	}
	
	printf("What time is it? ");
	if (!(scanf("%d", &time) == 1)) {
		printf("Time must be a number\n");
		return 1;
	}
	if (time < 0 || time >= 24) {
		printf("Time must be greater than or equal to 0 and less than 24\n");
		return 1;
	}
	if (time < 17) {
		printf("You get the matinee discount\n");
		price -= 2;
	}		
	
	printf("Your total comes out to $%d\n", price);

	return 0;
}


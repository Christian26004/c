#include <stdio.h>
#include <stdbool.h>

int main () {
	
	// An if statement evaluates everything inside () as either true (any non-zero number) or false (zero)
	// If the statement is true the if block runs and if the statement is false it skips the block and runs
	// the logic that comes after it.
	//
	// if stdbool.h is not included you can type any non-zero number for true or 0 for false 'if (true)' = 'if (1)'
	if (true) {
		printf("This is true\n");
	}
	
	// An if-else statement works the same as an if statement with the else block directly after the
	// if statement and runs if the if statement is false/0
	if (false) {
		printf("This doesn't run\n");
	} else {
		printf("This does run\n");
	}

	if (true) {
		printf("This does run\n");
	} else {
		printf("This doesn't run\n");
	}
	
	int age = 17;
	if (age > 17) {
		printf("Adult\n");
	} else {
		printf("Child\n");
	}
	
	// Flipping if-statements can be done by making the logic in the if statement true if its not equal to the logic
	// such as this.
	if (!(age > 17)) {
		printf("Child\n");
	} else {
		printf("Adult\n");
	}

	// Examples of logical operators
	double money = 30000;

	// false and true = false
	// true and false = false
	// false and false = false
	// tru and true = true
	if (age < 17 && money > 25000) {
		printf("age is less than 17 and money is greater than 25000\n");
	}
	
	// false or true = true
	// false or flase = false
	// true or false = true
	// true or true = true
	if (age > 17 || money > 25000) {
		printf("age is greater than 17 or money is greater than 25000\n");
	}

	// if-else-if statement 
	// Allows for an else statement to also have logic after running an if statement
	if (age < 12) {
		printf("age is less than 12\n");
	} else if (age >= 12 && age < 20) {
		printf("age is greater than or equal to 12 and less than 20\n");
	}
	
	// if statements can also be one line commands the only catch is they cannot be more than one statement.
	if (age < 150) printf("You might be alive\n"); printf("This always prints\n");
	
	// switch-case statement esentially takes either a char or int data type and changes logic based on which case matches the value of the variable 
	// assigned to the switch. The break at the end tell the program to skip all future cases, not inlcuding the break will execute
	// all cases after one evaluates to true
	int menuChoice = 2;

	switch (menuChoice) {
		case 0:
			printf("menu choice 1\n");
			break;
		case 2: 
			printf("menu choice 2\n");
			break;
		case 3: 
			printf("menu choice 3\n");
			break;
		case 4:
		case 5:
		case 6:
			printf("menu choice 4, 5, or 6\n");
			break;
		default: // if none of the cases return true default runs
			printf("default choice\n");
			break;
	}		
	
	// turnary operator
	// works like a condenced if-else statement 
	// if money is greater than zero print "You have money" else print "No money"
	money > 0 ? printf("You have money\n") : printf("No money\n");
	
	bool hasMoney;
	hasMoney = money > 0 ? 1 : 0;
	// hasMoney equals true if money is greater than 1 else hasMoney equals false
	hasMoney ? printf("you has money\n") : printf("you has no money\n");	

	return 0;
}

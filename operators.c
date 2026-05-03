#include <stdio.h>

int main() {
	// int x = 5 (operand) + (operator) 5 (operand)
	// 
	// Unary opeators
	// -, +
	//
	// Arithmetic operators 
	// +, -, /, *, %
	//
	// Increment and decrement operators
	// ++, --
	//
	// Assignment operators
	// +=, -=, /=, *=, %=
	//
	// Comparison operators
	// ==, !=, <, >, <=, >=
	//
	// Logical operators
	// &&, ||, !
	//
	// Conditional operators
	// ?, :

	printf("\nforce precedence with ()\n");
	int x = 2 * (3 + 3);
	// You don't always need () but it can help the readability of your code.
	int y = (2 * 3) + 3;

	printf("x = %d\n", x);
	printf("y = %d\n", y);

	// Outputs the remainder of a division equation.
	printf("modulus operaton\n");
	int z = 10 % 3; // Output: 1.
	
	printf("z = %d\n", z);
	
	printf("Unary minus\n");
	int a = 5;
	int b = -a;

	printf("b = %d\n", b); // 'a' is now negative.
	printf("a = %d\n", a); // Doesn't change.

	// These operations do the same thing but one is much less work.
	printf("Incremenation\n");
	a = a + 1;
	printf("a + 1 = %d\n", a);
	a++;
	printf("a++ = %d\n", a);

	printf("Post Increment\n");
	a = 5;
	b = 5;
	b = a++;
	printf("b = %d\n", b); // b gets assigned to first.
	printf("a = %d\n", a); // a is increamented second.

	printf("Pre Increment\n");
	a = 5;
	b = 5;
	b = ++a;
	printf("b = %d\n", b); // b gets assigned to second.
	printf("a = %d\n", a); // a is increamented first.

	printf("Assignment Operators\n");
	a = 5;
	b = 5;

	a += 1; 		// this is the same as 'a = a + 1;' or 'a++;'
	printf("a = %d\n", a);	// but now you can also increment it by as much as you want
	a += 100; 		// equivalent to 'a = a + 100;'
	printf("a = %d\n", a);	// this how it works for all assignment operators (/=, -=, *=, %=, +=)
}

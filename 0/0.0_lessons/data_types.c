#include <stdio.h>

int main() {
	int a = 10;

	double b = 10.5; // 64 bit number
	printf("%lu\n", sizeof(b));
	float c = 10.5; // 32 bit number
	printf("%lu\n", sizeof(c));

	char d = 'a'; // stores 1 letter
	char e[] = "char array"; // a character array (string)
	bool f = false;

	int zero = .999999;
	printf("zero is %d\n", zero);

	int slices = 17;
	int people = 2;
	double slicesPerPerson = (double) slices / people; // 8.5000
	printf("Slices Per Person : %lf", slicesPerPerson);

	double test1 = (25 / 2) * 2; // 24.0
	double test2 = (25 / 2) * 2.0; // 24.0
	
	double test3 = 25.0 / 2 * 2; // 25.0
	double test = (double) 25 / 2 * 2.0; // 25.0
	
	printf("test1 : %f\n", test1);
	printf("test2 : %f\n", test2);
	printf("test3 : %f\n", test3);
	printf("test : %f\n", test);
	return 0;
}

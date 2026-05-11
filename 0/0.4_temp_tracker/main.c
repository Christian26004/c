#include <stdio.h>

int main() {
	int total = 0;
	int input = 0;
	int hottest = 0;
	int tempArray[7];

	for (int i = 1; i < 8; i++) { // goes through the array
		// asks user for temp
		printf("Today is %d, what is the tempurate? ", i);
		scanf("%d", &input); // inputs temp
		i--; // decrease i so it can be the proper array element
		tempArray[i] = input; // inputs input into array
		total += input; // increases total
		if (input > 86) { // state if its hot outside
			printf("HOT!\n");
		}
		if (hottest < input) {
			hottest = input;
		}
		i++; // reincreases i so its proper day number
	}
	total /= 7; // makes total the average for the week
	printf("Average for the week is: %d\n", total);
	printf("The hottest day was %d degrees outside\n", hottest);

}

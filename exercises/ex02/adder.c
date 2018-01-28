/* Adding Fuction by Lucy Wilcox
	Only adds 10 integer at a time, with up to 9 digits per integer.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int pos = 0;

/* Adds all integers in array and returns total

	nums[10]: array of ints to be added

*/
int calcSum(int nums[10]){
	int total_sum = 0;
	for (int i = 0; i < pos; i++) {
		total_sum += nums[i];
	}
	return total_sum;
}

/* Reads user input for numbers to add, converts them to ints and updates array
which is defined in main

	nums[]: array of ints to be added 

*/
void getNumsToSum(int nums[]){
	puts("Enter integers to add:");
	char num[11];
	while (scanf("%10s", num) != EOF){
		if (strlen(num) > 9) {
			puts("Number too big (over 9 digits), will not be added.");
		} else if (pos > 9) {
			puts("You can only add 10 numbers at a time.");
			break;
		} else if (atoi(num) == 0){
			puts("Not a valid integer to add to sum.");
		} else {
			nums[pos] = atoi(num);
			pos ++;
		}	
	}
}

/* Program calculates and prints sum of up to 10 numbers

*/
int main(){
	int nums[11]; 
	getNumsToSum(nums);
	int total_sum = calcSum(nums);
	printf("Sum: %d\n", total_sum);
	
	return 0;
}
/* Adding Fuction by Lucy Wilcox
	Only adds 10 integer at a time, with up to 9 digits per integer.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calcSum(int nums[10], int pos){
	int total_sum = 0;
	for (int i = 0; i < pos; i++) {
		total_sum += nums[i];
	}
	return total_sum;
}

int main(){
	puts("Enter integers to add:");
	int nums[11];
	char num[11];
	int pos = 0;
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
	int total_sum = calcSum(nums, pos);
	printf("Sum: %d\n", total_sum);
	
	return 0;
}
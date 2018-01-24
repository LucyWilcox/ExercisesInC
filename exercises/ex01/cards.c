#include <stdio.h>
#include <stdlib.h>

/* Card counting file modified from Head First C by Lucy Wilcox 
*/

/* Reads card from user input
	card_name : char list of card info
*/
void read_card(char card_name[3]) {
	puts("Enter the card name: ");
	scanf("%2s", card_name);
}

/* Updates the count based on the new card value
	
	count: int of the current count
	val: int of the new card value

*/
int update_count(int count, int val) {
	if ((val > 2) && (val < 7)) {
		count ++;
	} else if (val == 10) {
		count --;
	}
	return count;
}

/* Returns the point value associated with a card

	card_name : char array of card info
*/
int get_val(char * card_name) {
	int val = 0;
	switch(card_name[0]) {
		case 'K':
		case 'Q':
		case 'J':
			val = 10;
			break;
		case 'A':
			val = 11;
			break;
		case 'X':
			break;
		default:
			val = atoi(card_name);
			if ((val < 1) || (val > 10)) {
				puts("I don't understand that value!");
			}
	}
	return val;
}

/* Main function, runs until 'X' is pressed by the user.
Keeps count updated with newly revealed cards.

*/

int main() {
	char card_name[3];
	int count = 0;
	do {
		read_card(card_name);
		int val;
		val = get_val(card_name);
		count = update_count(count, val);
		printf("Current count: %i\n", count);
	} while (card_name[0] != 'X'); {
		return 0;
	}
}
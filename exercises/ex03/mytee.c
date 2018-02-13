/*

Implementation of tee by Lucy Wilcox
A lot of this is from headfirst C chap 3

3. Referencing HFC chap 3 was very helpful, it covered
most of the elements needed to create this answer.
Because of this, I'm not sure there's too much I'd do
differently. I did get stuck at one point because I was
using ctrl C not ctrl D to close out of the program 
and it was causing it to not close the files properly.
Generally though I would follow the HFC 3 framework again.

4. Well first off, the pro solution handles all the flags
it also appears to do more error checking. It also appears 
to use a buffer to read the input until the end of the input
instead of just picking a random limit like I did.


*/

#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]){
	char ch;
	int append = 0;
	int count = 0;
	char in[120];

	// only dealing with a cmd option for now
	while ((ch = getopt(argc, argv, "a")) != EOF){
		append = 1;
	}
		
	argc -= optind;
	argv += optind;

	FILE *files[argc];

	for (count = 0; count < argc; count ++){
		if (append) {
			files[count] = fopen(argv[count], "a");
		} else {
			files[count] = fopen(argv[count], "w");
		}
	}

	while (scanf ("%79[^\n]\n", in) == 1) {
    	printf("%s\n", in); // also print to stdout

	    for (count = 0; count < argc; count++) {
	      fprintf(files[count], "%s\n", in);
  		}
  	}
  	// close files
	for (count = 0; count < argc; count ++){
		fclose(files[count]);

	}

	return 0;
}


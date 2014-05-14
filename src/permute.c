/* Include libraries */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "check.h"

/* Predefine functions */
int compare_chars(const void *l1, const void *l2);
char* swap(char* str, int pos1, int pos2);
char* reverse(char* str, int start, int finish);

/* Main function */
int main(int argc, char** argv) {
	int letter_pos = 1;

	if(argc < letter_pos) {
		printf("No letters.\n");
		return 1;
	}

	char* letters = argv[letter_pos];
	int c = strlen(letters);

	qsort(letters, c, 1, compare_chars);
	if(check2(letters, c) && check3(letters, c)) {
		printf("%s\n", letters);
	}

	while(1) {
		int i = 0;
		int k = -1;
		int l = -1;

		for(i = 0; i < c - 1; i++) {
			if(letters[i] < letters[i + 1]) {
				k = i;
			}
		}

		if(k == -1) {
			break;
		}

		for(i = k + 1; i < c; i++) {
			if(letters[k] < letters[i]) {
				l = i;
			}
		}

		swap(letters, k, l);
		reverse(letters, k + 1, (int)NULL);

		if(check2(letters, c) && check3(letters, c)) {
			printf("%s\n", letters);
		}
	}

	return 0;
}

int compare_chars(const void *l1, const void *l2) {
	const char *la = (const char *) l1;
	const char *lb = (const char *) l2;
	return ((*la > *lb) - (*la < *lb));
}

char* swap(char* str, int pos1, int pos2) {
	char temp = str[pos1];
	str[pos1] = str[pos2];
	str[pos2] = temp;

	return str;
}

char* reverse(char* str, int start, int finish) {
	int i = 0;

	if(finish == (int)NULL) {
		finish = strlen(str);
	}

	int halfway = (finish - start) / 2;
	for(i = 0; i < halfway; i++) {
		str = swap(str, start + i, finish - 1 - i);
	}

	return str;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isLetter(const char c) {
	if(c >= 'a' && c <= 'z') {
		return 1;
	} else {
		return 0;
	}
}

int main(int argc, char** argv) {
	int i, j;

	for(i = 1; i < argc; i++) {
		int slen = strlen(argv[i]);
		for(j = 0; j < slen - 2; j++) {
			if(isLetter(argv[i][j]) && isLetter(argv[i][j + 1]) && isLetter(argv[i][j + 2])) {
				printf("%c%c%c\n", argv[i][j], argv[i][j + 1], argv[i][j + 2]);
			}
		}
	}

	return 0;
}

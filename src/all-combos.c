#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	char i, j, k;

	for(i = 'a'; i <= 'z'; i++) {
		for(j = 'a'; j <= 'z'; j++) {
			for(k = 'a'; k <= 'z'; k++) {
				printf("%c%c%c\n", i, j, k);
			}
		}
	}

	return 0;
}

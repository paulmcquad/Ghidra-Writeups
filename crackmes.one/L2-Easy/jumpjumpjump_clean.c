// Author: cbm-hackers
// JumpJumpJump
// https://crackmes.one/crackme/5c1a939633c5d41e58e005d1

#include <stdio.h>
#include <string.h>

char flag[10];
char inputString[64];

char *strcat_str() {
  int counter;
  
  flag[0] = '!';
  for (counter = 1; counter < 10; counter++) {
		flag[counter] = flag[counter-1] + counter + 1;
  }
  return flag;
}

int main() {
	int asciiSum = 0;
	puts("enter the magic string");
	fgets(inputString, 64, stdin);
	if (strlen(inputString) >= 11) {
		puts("too long...sorry no flag for you!!!");
	} else {
		int counter = 0;
		while (counter < strlen(inputString)) {
			asciiSum += inputString[counter];
			counter++;
		}
		if (asciiSum == 1000) {
			strcat_str();
			printf("flag is flag{");
      		for (counter = 0; counter < 10; counter++) {
        		putchar((int)*(char *)(flag + counter));
			}
			puts("}");
		} else {
			puts("wrong string\nNo flag for you.");
		}
	}
	return 0;
}
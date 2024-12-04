// Author: cbm-hackers
// https://crackmes.one/crackme/5b8a37a433c5d45fc286ad83

// Solution by richardcanuck:
// The password must be 10 characters long and
// have a '@' as the fifth character!

// Example:
//./easy_reverse abcd@67899

// Program was decompiled using Ghidra

// Python Keygen by elprofesor:
// easy_reverse_keygen.py

#include <stdio.h>
#include <string.h>

void usage(char* pass);

int main(int argc,char **argv)
{
  size_t arg_length;
  
  /* requires that one argument is passed */
  if (argc == 2) {
    arg_length = strlen(argv[1]);
    
    /* requires that the single argument provided be 10 characters in length */
    if (arg_length == 10) {
      
      /* If the password has a '@' as the fifth character */
      if (argv[1][4] == '@') {
        puts("Nice Job!!");
        printf("flag{%s}\n",argv[1]);
      }
      else {
        usage(*argv);
      }
    }
    else {
      usage(*argv);
    }
  }
  else {
    usage(*argv);
  }
  return 0;
}
 /* try again flag is displayed */
void usage(char* pass)
{
  printf("USAGE: %s <password>\n",pass);
  puts("try again!");
}
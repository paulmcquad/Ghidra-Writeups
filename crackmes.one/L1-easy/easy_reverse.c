// Author: cbm-hackers
// https://crackmes.one/crackme/5b8a37a433c5d45fc286ad83

// Solution by richardcanuck:
// The password must be 10 characters long and
// have a '@' as the fifth character!

// Example:
//./easy_reverse abcd@67899

#include <stdio.h>
#include <string.h>

void usage(char* pass);

int main(int argc,char **argv)
{
  size_t arg_length;
  
  /* If an argument has been passed */
  
  if (argc == 2) {
    arg_length = strlen(argv[1]);
    
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

void usage(char* pass)
{
  printf("USAGE: %s <password>\n",pass);
  puts("try again!");
}
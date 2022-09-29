#include <stdio.h>
#include <stdbool.h>
#include <getopt.h> 
#include <string.h>

#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KBLU  "\x1B[34m"

int main (int argc, char **argv) {
  int c;
  char *c_arg = 0;
  static struct option long_options[] = {
    {"help",  no_argument, NULL, 'h'},
    {"author",  no_argument, NULL, 'a'},
    {"color",  required_argument, NULL, 'c'},
  };

  int option_index = 0;
  
  while ((c = getopt_long(argc, argv, "ha",
          long_options, &option_index)) != -1) {
    switch (c) {
    case 0:
        printf ("option %s", long_options[option_index].name);
        if (optarg) {
            printf (" with arg %s", optarg);
        }
        printf ("\n");
        break;
    case 'h':
        printf("This is my help\n");
        break;
    case 'a':
        printf("Author:Mario Pilz\nMail: mario.pilz0601@gmail.com\n");
        break;
    case 'c':
        c_arg = optarg;
        if(strcmp(c_arg, "red") == 0)
            printf("%sMy message", KRED);
        else if(strcmp(c_arg, "green") == 0)
            printf("%sMy message", KGRN);
        else if(strcmp(c_arg, "blue") == 0)
            printf("%sMy message", KBLU);
        break;
    default:
        printf ("?? getopt returned character code 0%o ??\n", c);
    }
  }
  if (optind < argc) {
    printf ("non-option ARGV-elements: ");
    while (optind < argc) {
      printf ("%s ", argv[optind++]);
    }
    printf ("\n");
  }
  return 0;
}
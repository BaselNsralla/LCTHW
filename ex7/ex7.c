#include <stdio.h>

int main(int argc, char *argv[]){
  int distance = 100;
  float power = 2.345f;
  double super_powers = 56789.4543;
  char initial = 'A';
  char first_name[] = "Zed";
  char last_name[]  = "theman";
  printf("You are %d miles away \n", distance);
  printf("You have %f of power \n", power);
  printf("You have %f awesome super powers \n", super_powers);
  printf("I have an initial %c. \n", initial);
  printf("I have first name %s \n", first_name);
  printf("I have last name %s \n", last_name);
  printf("MY full name is %s %c %s \n", first_name, initial, last_name);

  int bugs = 100;
  double bug_ratio = 1.2;
  printf("You have %d bugs at the imaginary rate of %f. \n", bugs, bug_ratio);
  long univers_of_defects = 1L * 1024L * 1204L * 1024L;
  printf("The entire univers has %ld bugs. \n", univers_of_defects);

  double expected_bugs =  bugs * bug_ratio;
  printf("You are expected to have %f bugs. \n", expected_bugs);

  double parts_of_univers = expected_bugs / univers_of_defects;
  printf("That is only a %e \n", parts_of_univers);

  char nul_byte = '\0';
  int care_precentage = bugs * nul_byte;
  printf("WHich means you sshould care %d%", care_precentage);
  return 0;
 }
/* A char can be used in arthmetic since its memory value is just an int with a value in range 0 - 255
--- >  1 byte  
*/
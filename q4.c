#include <stdio.h>
#include <stdlib.h>

/*
 * Worksheet 12 Question 1
 * In this program where the allocated memory is not
 * freed, the main mistake that can be found is 
 * that the memory is definitly lost in the 
 * running of this program
 */
int main(void){
  
  char * string = (char*)malloc(sizeof(char)*20);
  string[9]='i';
  
  
  return 0;
}

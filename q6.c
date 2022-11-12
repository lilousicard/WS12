#include <stdio.h>
#include <stdlib.h>
/*
 * Worksheet 12 Question 3
 * In this exercise, an array of 10 Integers
 * is allocated in memory and the index of each
 * element is stored in the array (arr={0,1,2,3,4,5,6,7,8,9})
 * Then the array is free and we try to access the 3 element of the
 * array and to print it. Without Valgrind, the printed value is
 * 1348552427. When using Valgrind, their is no value printed
 * and Valgrind display an error message about an invalid 
 * memory reading. There is not memory leak.
 */

int main(void){
  int* arr = (int*) malloc (sizeof(int)*10);
  for (int i = 0; i<10; i++){
	  arr[i]=i;
  }
  free(arr);
  printf("%d\n",arr[2]);
  return 0;
}

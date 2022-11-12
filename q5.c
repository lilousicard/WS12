#include <stdio.h>
#include <stdlib.h>
/* Worksheet 12 question 2
 * In this question, allocating an array of size 100
 * and then allocating 0 to the 101th element (zero based)
 * will cause the computer to write the number 0 farther from
 * the allocated memory space. This means that valgrind will
 * detect an invalid writting of size 4 (size of int = 4).
 * The program still run since C does not have an 
 * out of bound exception like Java does.
 */

int main(void){
	int * arr = (int *) malloc(sizeof(int)*100);
	arr[100]=0;
	free(arr);
	return 0;
}

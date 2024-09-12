/*
 ============================================================================
 Name        : Hw5.c
 Author      : Youssef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//EX1
/*#include <stdio.h>
 #include <stdlib.h>
 int main() {
 int *ab, m;
 m = 29;
 printf(" Address of m : %p\n", &m);
 printf(" Value of m : %d\n\n", m);

 ab = &m;
 printf(" Now ab is assigned with the address of m.\n");
 printf(" Address of pointer ab : %p\n", ab);
 printf(" Content of pointer ab : %d\n\n", *ab);

 m = 34;
 printf(" The value of m assigned to 34 now.\n");
 printf(" Address of pointer ab : %p\n", ab);
 printf(" Content of pointer ab : %d\n", *ab);

 *ab = 7;
 printf(" The pointer variable ab is assigned the value 7 now.\n");
 printf(" Address of m : %p\n", &m);
 printf(" Value of m : %d\n", m);

 return 0;
 }*/
//######################################################
//EX2
/*#include <stdio.h>
 #include <stdlib.h>
 int main() {
 char alpha[26];
 char *pointer;
 int i;
 pointer = alpha;
 for (i = 0; i < 26; i++) {
 *pointer = i + 'A';
 pointer++;
 }
 pointer = alpha;
 printf("The alphabets are :\n");
 for (i = 0; i < 26; i++) {
 printf("%c ", *pointer);
 pointer++;
 }
 return 0;
 }
 //######################################################
 //EX3
 #include <stdio.h>
 #include <stdlib.h>
 int main() {
 char a[100];
 char *ptr;
 int i;
 printf("Enter a string: \n");
 scanf("%s", a);
 ptr = a + strlen(a) - 1;
 for (i = 0; i < strlen(a); i++) {
 printf("%c", *ptr);
 ptr--;
 }
 printf("\n");
 return 0;
 }*/
//######################################################
//EX4
/*#include <stdio.h>
 #include <string.h>
 int main() {
 int n, i;

 printf("Enter the number of elements in the array: ");
 scanf("%d", &n);

 int arr[n];
 int *ptr = arr;

 printf("Enter the elements of the array:\n");
 for (i = 0; i < n; i++) {
 scanf("%d", ptr + i);
 }

 printf("Array elements in reverse order:\n");
 for (i = n - 1; i >= 0; i--) {
 printf("%d ", *(ptr + i));
 }
 printf("\n");

 return 0;
 }*/
//######################################################
//EX5
/*#include <stdio.h>
#include <stdlib.h>
struct Employee {
	char name[50];
	int id;
};
int main() {
	struct Employee emp1 = { "Alex", 1002 };
	struct Employee emp2 = { "Bob", 1003 };

	struct Employee *employees[2];

	employees[0] = &emp1;
	employees[1] = &emp2;

	struct Employee **ptr = employees;

	printf("Employee Name : %s\n", ptr[0]->name);
	printf("Employee ID   : %d\n", ptr[0]->id);

	return 0;
}*/


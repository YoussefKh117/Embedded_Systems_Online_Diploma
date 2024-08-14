/*
 ============================================================================
 Name        : Hw.c
 Author      : Youssef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//EX1
/*#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void primes(int x,int y){
	int i;
	char flag;
	for(x;x<y;x++){
		flag='y';
		for(i=2;i<=x/2;i++){
			if(x%i==0){
				flag='n';
				break;
			}
		}
		if(flag=='y'){
			printf("%d ",x);
		}
	}
	return;
}
int main(){
	int x,y;
	printf("Enter two number as intervals : \n");
	fflush(stdout);
	scanf("%d%d",&x,&y);
	printf("Prime number between %d and %d are : ",x,y);
	primes(x,y);
	return 0;
}*/
//EX2
//############################################
/*
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int factorial(int n){
    if(n==0 || n==1) return 1;
    return n*factorial(n-1);
}
int main(){
    int x;
    printf("Enter a positive number \n");
    fflush(stdout);
    scanf("%d",&x);
    printf("Factorial of %d is : %d",x,factorial(x));
}*/
//EX3
//############################################
/*
#include <stdio.h>
#include <stdlib.h>
void reverse() {
    char c;
    scanf("%c", &c);

    if (c != '\n') {
        reverse();
        printf("%c", c);
    }
}
int main() {
    printf("Enter a sentence: ");
    fflush(stdout);
    reverse();
    return 0;
}*/
//EX4
//############################################
/*#include <stdio.h>
#include <stdlib.h>
#define ll long long int
ll Power(int x,int n){
    if(n==0) return 1;
    else if(n<0) return 0;
    return x*Power(x,n-1);
}
int main() {
    int x,n;
    printf("Enter a positive number and it`s power \n");
    fflush(stdout);
    scanf("%d%d",&x,&n);
    printf("The number %d raised to power %d = %lld",x,n,Power(x,n));
    return 0;
}*/

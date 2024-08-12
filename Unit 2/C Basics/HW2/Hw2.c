/*
 ============================================================================
 Name        : Hw2.c
 Author      : Youssef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//###################################
//Question 1
/*#include <stdio.h>
int main(){
	int x;
	printf("Enter a number \n");
	fflush(stdout);
	scanf("%d",&x);
	if(x&1) printf("%d is odd",x);
	else printf("%d is even",x);
	return 0;
}*/
//###################################
//Question 2
/*#include<stdio.h>
int main(){
	char c;
	printf("Enter an alphabet : \n");
	fflush(stdout);
	scanf("%c",&c);
	if(c=='a' || c=='A' || c=='E' || c=='e' || c=='I' || c=='i' || c=='O' || c=='o' || c=='U' || c=='u')
		printf("%c is vowel \n",c);
	else printf("%c is consonant \n",c);
	return 0;
}*/
//###################################
//Question 3
/*#include<stdio.h>
int main(){
	double a,b,c;
	printf("Enter three numbers : \n");
	fflush(stdout);
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a>b){
		if(a>c) printf("Largest number = %lf",a);
		else printf("Largest number = %lf",c);
	}
	else {
		if(b>c) printf("Largest number = %lf",b);
		else printf("Largest number = %lf",c);
	}
	return 0;
}*/
//###################################
//Question 4
/*#include<stdio.h>
int main(){
	int x;
	printf("Enter a number \n");
	fflush(stdout);
	scanf("%d",&x);
	if(x>0) printf("%d is postive",x);
	else if(x<0) printf("%d is negative",x);
	else printf("You entered zero");
	return 0;
}*/
//###################################
//Question 5
/*#include<stdio.h>
int main(){
	char c;
	printf("Enter a character : \n");
	fflush(stdout);
	scanf("%c",&c);
	if((c>=65 && c<=90) || (c>=96 && c<=122)){
		printf("%c is alphabet",c);
	}
	else {
		printf("%c is not an alphabet",c);
	}
	return 0;
}*/
//###################################
//Question 6 time complexity O(1)
/*#include<stdio.h>
int main(){
	int x;
	printf("Enter an integer \n");
	fflush(stdout);
	scanf("%d",&x);
	x=(x*(x+1))/2;
	printf("Sum = %d",x);
	return 0;
}*/
//Question 6 time complexity O(n)
/*#include<stdio.h>
int main(){
	int x,sum=0,i;
	printf("Enter an integer \n");
	fflush(stdout);
	scanf("%d",&x);
	for(i=1;i<=x;i++){
		sum+=i;
	}
	printf("sum = %d",sum);
	return 0;
}*/
//###################################
//Question 7
/*
#include<stdio.h>
int main(){
	int x,i;
	unsigned long long int fact=1;
	printf("Enter an integer : \n");
	fflush(stdout);
	scanf("%d",&x);
	if(x<0){
		printf("Erorr! There is no factorial for negative numbers \n");
		return 0;
	}
	else{
		for(i=1;i<=x;i++){
			fact*=i;
		}
	}
	printf("Factorial = %lu",fact);
	return 0;
}*/
//###################################
//Question 8
/*
#include<stdio.h>
int main(){
    int a,b;
    float result;
    char c;
    printf("Enter operator (+,-,*,/) : \n");
    fflush(stdout);
    scanf("%c",&c);
    printf("Enter two operands :\n");
    fflush(stdout);
    scanf("%d%d",&a,&b);
    switch(c)
    {
        case '+' : result = a+b; break;
        case '-' : result = a-b; break;
        case '*' : result = a*b; break;
        case '/' : if(b==0) {
            printf("Math Error \n");
            return 0;
        }
        result = ((float)a/b); break;
        default : printf("Wrong operation \n"); return 0;
    }
    printf("%d %c %d = %.2f",a,c,b,result);
}*/

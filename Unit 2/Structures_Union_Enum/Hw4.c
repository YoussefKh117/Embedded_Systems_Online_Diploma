/*
 ============================================================================
 Name        : Hw4.c
 Author      : Youssef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//EX1
/*#include <stdio.h>
 #include <stdlib.h>
 struct Student{
 char name[100];
 int roll;
 float marks;
 };
 struct Student read(){
 struct Student res;
 printf("Enter your name :\n");
 scanf("%99s",&res.name);
 printf("Enter roll number :\n");
 scanf("%d",&res.roll);
 printf("Enter your marks :\n");
 scanf("%f",&res.marks);
 return res;
 }
 void printData(struct Student s){
 printf("Displaying information : \n");
 printf("name : %s\n",s.name);
 printf("roll : %d\n",s.roll);
 printf("marks : %0.2f\n",s.marks);
 return;
 }
 int main() {
 struct Student s=read();
 printData(s);
 return 0;
 }*/
//################################################
//EX2
/*#include <stdio.h>
 #include <stdlib.h>
 #include <math.h>
 struct SDistance {
 int feet;
 float inch;
 };
 struct SDistance read(int i) {
 struct SDistance res;
 printf("Enter information for the distance number %d\n", i);
 printf("Enter feet : \n");
 scanf("%d", &res.feet);
 printf("Enter inch : \n");
 scanf("%f", &res.inch);
 return res;
 }
 void Add(struct SDistance s1, struct SDistance s2) {
 int feet_result = s1.feet + s2.feet;
 float inch_result = s1.inch + s2.inch;
 if (inch_result >= 12.0) {
 feet_result += (int) (inch_result / 12);
 inch_result = fmod(inch_result, 12.0);
 }
 printf("Total Distance = %d feet %.2f inches\n", feet_result, inch_result);
 }
 int main() {
 struct SDistance s1, s2;
 s1 = read(1);
 s2 = read(2);
 Add(s1, s2);
 return 0;
 }*/
//################################################
//EX3
/*#include <stdio.h>
 #include <stdlib.h>
 struct SComplex {
 float real, imag;
 };
 struct SComplex read() {
 struct SComplex res;
 printf("Enter real and imaginary part respectively : \n");
 scanf("%f%f", &res.real, &res.imag);
 return res;
 }
 struct SComplex add(struct SComplex s1, struct SComplex s2) {
 struct SComplex res;
 res.real = s1.real + s2.real;
 res.imag = s1.imag + s2.imag;
 return res;
 }
 void print(struct SComplex s1){
 printf("The result = %0.2f + %0.2f i\n",s1.real,s1.imag);
 }
 int main(){
 struct SComplex s1,s2,res;
 s1=read();
 s2=read();
 res=add(s1,s2);
 print(res);
 return 0;
 }*/
//################################################
//EX4
/*#include <stdio.h>
#include <stdlib.h>
struct Student {
	char name[100];
	int roll;
	float marks;
};
struct Student read() {
	struct Student res;
	printf("Enter your name :\n");
	scanf("%99s", &res.name);
	printf("Enter roll number :\n");
	scanf("%d", &res.roll);
	printf("Enter your marks :\n");
	scanf("%f", &res.marks);
	return res;
}
void printData(struct Student s) {
	printf("for roll number : %d\n",s.roll);
	printf("name : %s\n", s.name);
	printf("marks : %0.2f\n", s.marks);
	return;
}
int main(){
	struct Student a[3];
	int i;
	for(i=0;i<3;i++){
		a[i]=read();
	}
	printf("Displaying information : \n");
	for(i=0;i<3;i++){
		printData(a[i]);
		printf("##############################\n");
	}
	return 0;
}*/
//################################################
//EX5
/*#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265359f
struct Scircle {
	int radius;
};
void calcArea(struct Scircle circle) {
	float area = PI * circle.radius * circle.radius;
	printf("Area = %.2f\n", area);
}
int main() {
	struct Scircle myCircle;
	myCircle.radius = 5;
	calcArea(myCircle);
	return 0;
}*/
//################################################
//EX6
/*#include <stdio.h>
union job {
	char name[32];
	float salary;
	int worker_no;
} u;
struct job1 {
	char name[32];
	float salary;
	int worker_no;
} s;
int main() {
	printf("size of union = %d\n", sizeof(u)); //32
	printf("size of structure = %d\n", sizeof(s)); //40
	return 0;
}*/

/*
 ============================================================================
 Name        : Hw3.c
 Author      : Youssef
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//EX1
/*#include <stdio.h>
int main() {
	int i,j;
	float a[2][2],b[2][2],sum[2][2];
	fflush(stdin);fflush(stdout);
	printf("Enter the element of the 1st matrix \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter a%d%d\n",i+1,j+1);
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter the element of the 2nd matrix \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter b%d%d\n",i+1,j+1);
			scanf("%f",&b[i][j]);
		}
	}
	printf("Sum of the matric : \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sum[i][j]=a[i][j]+b[i][j];
			printf("%0.1f\t",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/
//Ex2
//##############################################
/*#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n;
    float sum=0;
    int*a;
    printf("Enter the number of data : ");
    scanf("%d",&n);
    a = (int*)malloc(n * sizeof(int));
    for(i=0;i<n;i++){
        printf("Enter number : \n");
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("Average = %0.2f \n",sum/n);
    return 0;
}*/
//Ex3
//#############################################
/*#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[3][3];
    int i,j;
    printf("Enter elements of matrix \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter element of a%d%d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The transpose of matrix :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}*/
//Ex4
//#############################################
/*#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, n;
    int *a, *b;

    printf("Enter number of elements: \n");
    scanf("%d", &n);

    a = (int*)malloc(n * sizeof(int));
    b = (int*)malloc((n + 1) * sizeof(int));

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int loc, num;
    printf("Enter the element to be inserted: \n");
    scanf("%d", &num);
    printf("Enter the location: \n");
    scanf("%d", &loc);

    for(i = 0; i < n + 1; i++) {
        if(i < loc - 1) {
            b[i] = a[i];
        } else if(i == loc - 1) {
            b[i] = num;
        } else {
            b[i] = a[i - 1];
        }
    }

    for(i = 0; i < n + 1; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    free(a);
    free(b);

    return 0;
}*/
//Ex5
//#############################################
/*#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main() {
    int i,n;
    int*a;
    printf("Enter number of element : \n");
    scanf("%d",&n);
    a=(int*)malloc(n * sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int num;
    printf("Enter the element to be searched \n");
    scanf("%d",&num);
    bool flag=false;
    for(i=0;i<n;i++){
        if(a[i]==num){
            printf("number found at location = %d\n",i+1);
            flag=true;
            break;
        }
    }
    if(!flag) {
        printf("Not found \n");
    }
    free(a);
    return 0;
}*/

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
#include <stdlib.h>
#include <string.h>
int main() {
    int i,a[26]={0};
    char s[100];
    printf("Enter a string : \n");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    for(i = 0; i < strlen(s); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            a[s[i] - 'A']++;
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            a[s[i] - 'a']++;
        }
    }
    printf("Enter a char to find freq : \n");
    char c;
    scanf("%c",&c);
    if (c >= 'a' && c <= 'z') {
        c = c - 'a' + 'A';
    }
    printf("Frequency of %c is : %d\n",c,a[c-'A']);

    return 0;
}*/
//E2
//####################################
/*#include <stdio.h>
int main() {
    char str[100];
    int length = 0;
    printf("Enter a string: \n");
    scanf("%s",&str);
    while (str[length] != '\0') {
        length++;
    }
    printf("Length of the string is: %d\n", length);

    return 0;
}*/
//E3
//####################################
/*#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j;
    char temp;
    printf("Enter a string: \n");
    scanf("%s", str);
    int length = strlen(str);
    for(i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("Reversed string is: %s\n", str);

    return 0;
}*/


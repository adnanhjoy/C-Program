#include<stdio.h>
#include<string.h>
int main()
{
    char a[10], b[10];
    gets(a);
    strcpy(b,a);
    strrev(b);

    if(strcmp(a,b) == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

}

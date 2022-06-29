// check the character is alphabetic or not
//alphabetic character return non zero value otherwise 0

#include<stdio.h>
#include<ctype.h>//header file for this function
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    printf(isalpha(ch)? "Alphabetic Character" : "Not Alphabetic Character");

    getch();

}

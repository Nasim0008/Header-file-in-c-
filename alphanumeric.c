// check the character is an alphanumeric (a-z,A-Z,0-9 and some special character) character or not
//alphanumeric return non zero value and otherwise 0.

#include<stdio.h>
#include<ctype.h>//header file for this isalnum function.
int main()
{
    char ch;
    scanf("%c",&ch);
    printf(isalnum(ch)? "Alphanumeric character" : "Not alphanumeric character");
    getch();
    return 0;
}

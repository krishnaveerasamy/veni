#include<stdio.h>
#include<string.h>    
int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    char aj1[100], aj2[100];
    int compare;
printf("\n\nstrcmp(a,b) returns : 0 if both the strings are exactly same and -1 otherwise.\n\n\n");
    printf("\n\nstrcmp(a,b) is Case Sensitive.\n\n\n");
    printf("\n\nEnter 1st string: ");
    gets(aj1);
printf("\n\nEnter 2nd string: ");
    gets(aj2);
compare = strcmp(aj1, aj2);
    if(compare == 0)
        printf("\n\nBoth the strings are exactly same.\n\n");
    else
        printf("\n\nBoth the strings are different.\n");
        printf("\n\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}

#include<stdio.h>
#include<conio.h>
int count_550s(char const *str)
{
    char const *p = str;
    clrscr();
    int count;
    for (count = 0; ; ++count) {
        p = strstr(p, "550");
        if (!p)
            break;
        p++;
    }
    return count;
}

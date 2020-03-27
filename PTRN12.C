#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int n, i, j;
    clrscr();
    printf("Enter the value of 'n'=");
    scanf("%d", &n);
    n -= 1;
    for (i = n; i >= -n; i--)
    {
        for (j = n; j >= abs(i); j--)
            printf("*");
        printf("\n");
    }
    getch();
}
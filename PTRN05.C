#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, j;
    clrscr();
    printf("Enter the value of 'n'=");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = n - 1; j >= 0; j--)
        {
            if (i >= j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}

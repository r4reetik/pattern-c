#include <stdio.h>
#include <conio.h>
void main()
{
    int min_star = 1, h, s, i, j, k;
    clrscr();
    printf("Enter the value of 'n'=");
    scanf("%d", &h);
    s = h - 1;
    for (i = 0; i < h; i++)
    {
        for (j = s; j > i; j--)
            printf(" ");
        for (k = 0; k < min_star; k++)
            printf("*");
        min_star += 2;
        printf("\n");
    }
    getch();
}

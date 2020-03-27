#include <stdio.h>
#include <conio.h>
void main()
{
    int max_star, h, s, i, j, k;
    clrscr();
    printf("Enter the value of 'n'=");
    scanf("%d", &h);
    max_star = h * 2 - 1;
    s = h - 1;
    for (i = h; i > 0; i--)
    {
        for (j = s; j >= i; j--)
            printf(" ");
        for (k = 0; k < max_star; k++)
            printf("*");
        max_star -= 2;
        printf("\n");
    }
    getch();
}

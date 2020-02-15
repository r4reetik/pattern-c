#include<stdio.h>
#include<conio.h>
void main() {
	int n,i,j;
	clrscr();
	printf("Enter the value of 'n'=");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		for(j=n;j>i;j--)
			printf("*");
		printf("\n");
	}
	getch();
}
#include<stdio.h>
#include<conio.h>
void main() {
	int n,i,j,k;
	clrscr();
	printf("Enter the value of 'n'=");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		for(j=n-1;j>i;j--)
			printf(" ");
		for(k=0;k<=i;k++)
			printf("*");
		printf("\n");
	}
	getch();
}
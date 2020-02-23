#include<stdio.h>
#include<conio.h>
#include<math.h>
void main() {
	int n,i,j,k;
	clrscr();
	printf("Enter the value of 'n'=");
	scanf("%d",&n);
	n-=1;
	for(i=n;i>=-n;i--) {
		for(j=1;j<=abs(i);j++)
			printf(" ");
		for(k=n;k>=abs(i);k--)
			printf("*");
		printf("\n");
	}
	getch();
}
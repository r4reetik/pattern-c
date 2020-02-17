#include<stdio.h>
#include<conio.h>
void main() {
	int n,i,j;
	clrscr();
	printf("Enter the value of 'n'=");
	scanf("%d",&n);
	for(i=n;i>0;i--) {
		for(j=n;j>0;j--) {
			if(i>=j)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	getch();
}

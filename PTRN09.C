#include<stdio.h>
#include<conio.h>
void main() {
	int h,x,y,i,j;
	clrscr();
	printf("Enter the value of 'n'=");
	scanf("%d",&h);
	x=y=h;
	for(i=1;i<=h;i++,x--,y++) {
		for(j=1;j<h*2;j++) {
			if(j>=x&&j<=y)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	getch();
}
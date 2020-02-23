#include<stdio.h>
#include<conio.h>
void main() {
	int h,x=1,y,i,j;
	clrscr();
	printf("Enter the value of 'n'=");
	scanf("%d",&h);
	y=h*2-1;
	for(i=1;i<=h;i++,x++,y--) {
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
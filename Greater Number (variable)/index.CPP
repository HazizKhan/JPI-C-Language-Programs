#include<stdio.h>
#include<conio.h>
main(){
	clrscr();
	int a,b;
	printf("Enter value of A: ");
	scanf("%d",&a);
	printf("Enter value of B: ");
	scanf("%d",&b);
	if(a > b){
		printf("A > B");
	}
	else if(a == b){
		printf("A == B");
	}
	else{
		printf("B > A");
	}
	getch();
}
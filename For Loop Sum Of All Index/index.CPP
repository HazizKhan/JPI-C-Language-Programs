#include<stdio.h>
#include<conio.h>
main(){
	clrscr();
	int i,l;
	int sum = 0;
	printf("Enter Length: ");
	scanf("%d",&l);
	for(i = 1; i <= l; i++){
		sum += i;
	}
	printf("Sum = %d",sum);
	getch();
}
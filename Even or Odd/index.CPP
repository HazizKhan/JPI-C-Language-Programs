#include<stdio.h>
#include<conio.h>
main(){
	clrscr();
	int number;
	printf("Enter a int: ");
	scanf("%d",&number);
	if(number%2 == 0){
		printf("%d is even number",number);
	}
	else{
		printf("%d is odd number",number);
	}
	getch();
}
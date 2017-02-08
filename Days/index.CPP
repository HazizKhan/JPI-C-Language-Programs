#include<stdio.h>
#include<conio.h>
main(){
	clrscr();
	int day;
	printf("Enter a day: ");
	scanf("%d",& day);
	if(day == 1){
		printf("It's Sunday");
	}
	else if(day == 2){
		printf("It's Monday");
	}
	else if(day == 3){
		printf("It's Tuesday");
	}
	else if(day == 4){
		printf("It's Wednesday");
	}
	else if(day == 5){
		printf("It's Thursday");
	}
	else if(day == 6){
		printf("It's Friday");
	}
	else if(day == 7){
		printf("It's Saturday");
	}
	else{
		printf("Invalid Input");
	}
	getch();
}
#include<stdio.h>
#include<conio.h>
main(){
	clrscr();
	int p;
	printf("Enter Your Percentage: ");
	scanf("%d",&p);
	if(p >= 90 && p <= 100){
		printf("A+ Grade");
	}
	else if(p >= 70 && p <= 90){
		printf("A Grade");
	}
	else if (p >= 60 && p <70){
		printf("B Grade");
	}
	else if(p >= 50 && p < 60){
		printf("C Grade");
	}
	else if(p>=40 && p < 50){
		printf("D Grade");
	}
	else if (p < 40){
		printf ("Sorry You Are Failed");
	}
	else{
		printf("Invalid Input");
	}
	getch();
}
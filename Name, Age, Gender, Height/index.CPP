#include<stdio.h>
#include<conio.h>
main(){
	clrscr();
	char name[20];
	char g[6];
	int age;
	float height;
	printf("Enter Your Name: ");
	scanf("%s",&name);
	printf("Enter Your Gender: ");
	scanf("%s",&g);
	printf("Enter Your Age: ");
	scanf("%d",&age);
	printf("Enter Your Height: ");
	scanf("%f",&height);
	printf("\nYour Name is: %s",name);
	printf("\n Your Gender is: %s",g);
	printf("\n Your age is: %d",age);
	printf("\n Your height: %f",height);
	getch();
}
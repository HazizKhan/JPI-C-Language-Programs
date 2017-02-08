#include<stdio.h>
#include<conio.h>
main(){
	clrscr();
	int i,t,l;
	printf("Enter A Number For Table: ");
	scanf("%d",&t);
	printf("Table Length: ");
	scanf("%d",&l);
	for(i = 1; i <= l; i++){
		printf("%d x %d = %d \n",t,i,i*t);
	}
	getch();
}
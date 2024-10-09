#include<stdio.h>
void sum(int x,int y){
	printf("sum of %d and %d is %d \n",x,y,x+y);
}
void sub(int x,int y){
	printf("sub of %d and %d is %d \n",x,y,x-y);
}
void mil(int x,int y){
	printf("mil of %d and %d is %d \n",x,y,x*y);
}
void div(int x,int y){
	printf("div of %d and %d is %d \n",x,y,x/y);
}
void mod(int x,int y){
	printf("mod of %d and %d is %d \n",x,y,x%y);
}
int main(){
char c='%';
int choice;
	do{
		printf("Press 1 for +\n");
	printf("Press 2 for -\n");
	printf("Press 3 for *\n");
	printf("Press 4 for /\n");
	printf("Press 5 for %c\n",c);
	printf("Press 0 for exit\n");
	
	printf("Enter your choice : ");
	scanf("%d",&choice);
	
	int num1,num2;
	printf("Enter the 1st number : ");
	scanf("%d",&num1);
	printf("Enter the 2nd number : ");
	scanf("%d",&num2);
	
	switch(choice){
		case 1:sum(num1,num2);
		break;
		case 2:sub(num1,num2);
		break;
		case 3:mil(num1,num2);
		break;
		case 4:div(num1,num2);
		break;
		case 5:mod(num1,num2);
		break;
		case 0:printf("you are exited : ");
		break;
		default:printf("invelid choice : ");
	}
}
while(choice!=0);
	
}

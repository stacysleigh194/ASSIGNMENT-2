#// simple c program 
/*
Name:Stacy Waithira
Reg:CT100/G/26189/25
Description:User Details
*/
#include <stdio.h>
int main(){
	int height;
	int phonenumber;
	int weight;
	
	printf("Enter your height:\n");
	scanf("%d", &height);
	
	printf("Enter phone number:\n");
	scanf("%d", &phonenumber);
	
	printf("Enter your weight:\n");
	scanf("%d", &weight);
	
	printf("\nYour height is %d\n",height);
	printf("\nYour phonenumber is %d\n",phonenumber);
	printf("\nYour weight is %d\n",weight);

	return 0;
}
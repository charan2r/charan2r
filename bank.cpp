#include<stdio.h>
int main()
{
	int w;
	int d;
	int input1;
	int input2;
	printf("enter withdrawal or deposit :");
	input1=getchar();
	printf("\n enter bank amount :");
	input2=getchar();
	if(input1=='w')
	    printf("you have selected to withdraw money");
	else if(input1=='d')
	    printf("you have selected to deposit money"); 
	else
	    printf("invalid");	  
	    
	return 0;	    
}

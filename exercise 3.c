#include<stdio.h>
int main()
{
	int n;
	printf("Enter a five digit number :");
	scanf("%d",&n);
	printf("Output = ");
	
	printf("%d	",(n/10000));
	n=n-((n/10000)*10000);
	printf("%d	",(n/1000));
	n=n-((n/1000)*1000);
	printf("%d	", (n/100));
    n=n-((n/100)*100);   
    printf("%d	", (n/10));
    n=n-((n/10)*10);    
    printf("%d	", (n%10));
	return 0;
}

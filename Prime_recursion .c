#include <stdio.h>
int prime(int);

int main()
{
	int num,flag;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num==1)
		{
			printf("It is neither prime nor composite");
			return 0;
		}
	flag = prime(num);
	if(flag==1)
		printf("%d is a prime number",num);
	else
		printf("%d is not a prime number",num);
		return 0;
}

int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
				return 0;
		}	
				return 1;
		
}


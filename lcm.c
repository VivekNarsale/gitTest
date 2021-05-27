#include<stdio.h>
int main()
{
	int a,b,i,g,count;
	printf("enter a 1st number\n");
	scanf("%d",&a);
	printf("enter a 2nd number\n");
	scanf("%d",&b);
	
    count=0; 
	for(i=2;i<=a&&i<=b;i++)
	{
	
		if(a%i==0&&b%i==0)
		{
	    count++;
	    
	    }
		if(count==1)
		printf("lcm is\n %d",g);
	 
	}
	
		return 0;
}


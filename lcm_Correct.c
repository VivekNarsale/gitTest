#include<stdio.h>
int main()
{
	int a,b,max;
	printf("\n enter a 1st number");
	scanf("%d",&a);
	printf("\n enter a 2nd number");
	scanf("%d",&b);
	
	 max=a>b?a:b;
	 while(1)
	 {
	 	if(max%a==0&&max%b==0)
	 	{
	 	printf("\n lcm of this two numbers is %d",max);
	 	 break;
	    }
	 max++;
    }
    return 0;
}

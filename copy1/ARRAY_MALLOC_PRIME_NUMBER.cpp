#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,k;
	int i,j,count=0;
	printf("\n eneter size of array \n ");
	scanf("%d",&n);
	
	int *arr=(int*)malloc(n*sizeof(int));
	printf("\n enter the elements of array");
    
    for(k=0;k<n;k++)
    scanf("%d",&arr[k]);
    printf("\n array elements are :\n ");
    for(k=0;k<n;k++)
    printf("\n %d",arr[k]);
   //  printf("\n element of array are :");
    // printf("%d",arr[k]);
    // printf("\n element of array are :");
    printf(" \n prime numbers are");
    for(i=0;i<n;i++)
    {
    	count=0;
    	for(j=2;j<arr[i];j++)//start loop with 2 ok 
    	{
		
    	if(arr[i]%j==0)
    	{
    		count=1;
    		break;//if number get divide by any number so its not prime...break execution of for loop
    	
		}else //
		{count=0;
		}
	}
		if(count==0)//if arr[i]%j!=0 means its prime..so count will remain 0 always..clear? yes mam clear thank u
		printf(" %d \n",arr[i]);
    }
	free (arr);
}


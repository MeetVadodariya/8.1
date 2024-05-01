//Q.2 Write a Program to find the average of a 1D array.

#include<stdio.h>

main()
{
	int n,i,sum=0,ave;
	
	printf("How many Elements Enter in Array = ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter Array Element = \n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum = sum + a[i];
	}
	
	printf("Sum of All Array Elements = %d\n",sum);
	
	ave = sum/n;
	printf("Average of all Array Element = %d\n",ave);
}
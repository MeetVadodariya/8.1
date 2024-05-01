//Q.1 Write a Program to find the length of a 1D array.

#include<stdio.h>

main()
{
	int a[] = {3,7,1,8,6};
	int i,length;
	length= sizeof(a)/sizeof(0);

	for(i=0;i<length;i++)
	{
		printf("A=%d\n",a[i]);
	}
	
	printf("Size of Array =%d\n",length);
}
//  Q.3 Write a Program to perform the addition operation of two 1D arrays & store it in another array. 
//      Keep in mind that both array sizes must be the same.

#include<stdio.h>

main() 
{
    int n,i;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n], b[n], c[n];

    printf("\nEnter array A's elements:\n");
    for(i=0; i<n; i++) 
	{
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nEnter array B's elements:\n");
    for(i=0; i<n; i++) 
	{
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }

    printf("\nOutput:\n");
    printf("Array C is: ");
    for (i=0; i<n; i++) 
	{
        c[i] = a[i] + b[i];
        printf("%d, ", c[i]);
    }
    printf("\n");

}

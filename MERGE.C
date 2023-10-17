#include<stdio.h>
#include<conio.h>
int main()
{
	int arr1[50],arr2[50],s1,s2,i,k,merge[100];
	printf("Enter Array 1 size :");
	scanf("%d",&s1);
	printf("Enter Array 1 Elements ");
	for(i=0;i<s1;i++)
	{
		scanf("%d",&arr1[i]);
		merge[i]=arr1[i];
	}
	k=i;
	printf("enter array 2 size ");
	scanf("%d",&s2);
	printf("\n Enter the array 2 elements ");
	for(i=0;i<s2;i++)
	{
		scanf("%d",&arr2[i]);
		merge[k]=arr2[i];
		k++;
	}
	printf("The new merged array is :\n");
	for(i=0;i<k;i++)
	printf("%d\n",merge[i]);
	getch();
	return 0;
}

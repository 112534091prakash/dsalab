#include<stdio.h>
int main()
{
	int n,i,search,found=0;
	//input number of element in the array
	printf("enter number of element is array:");
	scanf("%d",&n);
	int arr[n];
	//input array elements
	printf("enter element of the array:\n");
	scanf("%d",&search);
	//limear search
	for(i=0;i<n;i++)
	{
		if(arr[i]==search)
		{
			found=1;
			printf("element %d found at index %d.\n"",search,i");
			break;
		}
	}
	return 0;
}

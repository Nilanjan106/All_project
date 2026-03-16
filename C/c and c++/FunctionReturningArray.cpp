//function Returing an array
#include<stdio.h>
int arr[10];
int * SumOfArray(int *,int *,int size);
int main()
{
	int Numbers1[]={10,20,30,40};
	int Numbers2[]={5,10,15,20};
	int *ptr=SumOfArray(Numbers1,Numbers2,4);
	for(int i=0;i<4;i++)
	{
	   printf("%4d",*(ptr+i));
	}
		return 0;
}
int * SumOfArray(int *arr1,int *arr2,int size)
{
	for(int i=0;i<size;i++)
	{
		arr[i]=arr1[i]+arr2[i];
	}
	return &arr[0];
}
  

#include<iostream>
using namespace std;
template<class t>
t Add(t arr[],int size)
{
	t Sum=0;
	for(int i=0;i<size;i++)
	{
		Sum=Sum+arr[i];
	}
	return Sum;
}
int main()
{
	int arr[10];
    int  size;
	cout<<"Enter Array size:";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter elements:";
		cin>>arr[i];
	}
	int res=Add(arr,size);
	cout<<"Sum="<<res<<endl;
	return 0;
}

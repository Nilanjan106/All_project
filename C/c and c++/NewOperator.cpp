#include<iostream>
using namespace std;
int main()
{
	int *ptr=new int(100);
	cout<<*ptr<<endl;
	delete ptr;
	cout<<*ptr;
	return 0;
}

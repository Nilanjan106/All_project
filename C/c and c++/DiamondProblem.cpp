#include<iostream>
using namespace std;
class A
{
	public:
		void Show()
		{
			cout<<"Hello from C++";
		}
};
class B:public A
{
};
class C:public A
{
	
};
class D:public B,C
{
};
int main()
{
	D d1;
	d1.Show();
	return 0;
}

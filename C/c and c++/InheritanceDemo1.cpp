#include<iostream>
using namespace std;
class A
{
	public:
		void ShowA()
		{
			cout<<"I am A class";
		}
};
class B:public A
{
	public:
		void ShowB()
		{
			cout<<"I am B Class";
		}
};
class C:public B
{
	public:
		void ShowC()
		{
			cout<<"I am C Class";
		}
};
class D:public A
{
	public:
		void ShowB()
		{
			cout<<"I am B Class";
		}
};
class E:public B,D
{
	public:
		void ShowB()
		{
			cout<<"I am B Class";
		}
};
int main()
{
	B b1;
	b1.ShowB();
	b1.ShowA();
	C c1;
	c1.ShowC();
	return 0;
}

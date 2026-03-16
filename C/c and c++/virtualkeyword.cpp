#include<iostream>
using namespace std;
class A
{
	public:
		virtual void Fun()
		{
			cout<<"A class Method";
		}
};
class B:public A
{
	public:
		void Fun()
		{
			cout<<"B class Method";
		}
};
int main()
{
	A *a1;
	B b1;
	a1=&b1;
	return 0;
}

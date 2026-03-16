#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"I am A class"<<endl;
		}
};
class B :public A
{
	public:
		B()
		{
			cout<<"I am B class";
		}
};
int main()
{
	A *a1;
	B b1;
	a1=&b1;
	///Base class reference(pointer) variable can points to child class object
	
	return 0;
}

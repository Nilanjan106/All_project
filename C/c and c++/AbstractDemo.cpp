#include<iostream>
using namespace std;
class A
{
	public:
		void Show()
		{
		}
		virtual void Add(int a,int b)=0;
		
};
class B:public A
{
	public:
		/*void Add(int a,int b)
		{
			cout<<a+b;
		}*/
};
class C:public B
{
	public:
		void Add(int a,int b)
		{
			cout<<a+b;
		}
};
int main()
{
	B *b1;
	C c1;
	b1=&c1;
	b1->Add(10,20);
}

#include<iostream>
using namespace std;
class A
{
	public:
		void Add(int a,int b)
		{
			cout<<"int,int";
		}
		void Add(int a,float b)
		{
			cout<<"int,float";
		}
		void Add(float a,int b)
		{
			cout<<"float,int";
		}
		void Add(float a,float b)
		{
			cout<<"float,float";
		}
		void Add(float a,float b,float c)
		{
			cout<<"float,float,float";
		}
		void Add(int *p1,int * p2)
		{
			cout<<"*p";
		}
};
int main()
{
	A a1;
	int c=100;
	a1.Add(&c,&c);
	return 0;
}

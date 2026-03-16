#include<iostream>
using namespace std;
class A
{
	public:
		int area(int a)
		{
			cout<<"Area of Squre=int";
			return a*a;
		}
		int area(int a,int b)
		{
			cout<<"Area of Rectangle=int,int";
			return a*b;
		}
		int area(float redius)
		{
			cout<<"Area of Circle=float";
			float PI=3.414;
			return PI*redius*redius;
		}
		int area(int a)
		{
			cout<<"Area of cube=int";
			return 6*a*a;
		}
		int area(int a)
		{
			cout<<"Area of cube=int";
			return 6*a*a;
		}
};
int main()
{
	A a1;
	a1.area(100)
	return 0;
}

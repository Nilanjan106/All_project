#include<iostream>
using namespace std;
class A
{
	public:
		void area(int a)
		{
			int squ;
			squ=a*a;
			cout<<"area of squre="<<squ<<endl;
		}
		void area(int a,int b)
		{
			int rec;
			rec=a*a;
			cout<<"area of rectangle="<<rec<<endl;
		}
		void area(double r)
		{
			double cir;
			double PI=3.14;
			cir=PI*r*r;
			cout<<"area of circle="<<cir<<endl;
		}
		void area(int a,int b,int c)
		{
			int tri;
			tri=a*b*c;
			cout<<"area of tringle="<<tri<<endl;
		}
	  /*	void area(int d)
		{
		 	int cube;
			int c=6;
			cube=c*d*d;
			cout<<"area of cube="<<cube<<endl;
		} */
			
};
int main()
{
	A a1;
	a1.area(10);
	a1.area(10,10,20);
	a1.area(6.5);
	a1.area(10,20);
	return 0;
}

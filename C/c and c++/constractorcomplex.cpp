#include<iostream>
using namespace std;
class Complex
{
	int i,j;
	public:
		Complex(int i1,int j1)
		{
			i=i1;
			j=j1;
		}
		Complex(Complex c1,Complex c2)
		{
			i=c1.i+c2.i;
			j=c1.j+c2.j;
		}
		void Show()
		{
			cout<<"i="<<i<<" j="<<j<<endl;
		}
};
int main()
{
	Complex c1(100,200);
	Complex c2(300,200);
	Complex c3(c1,c2);
	c1.Show();
	c2.Show();
	c3.Show();
}

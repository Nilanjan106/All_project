#include<iostream>
using namespace std;
class A
{
	private:
		int i;
	protected:
		int j;
	public:
		void SetIJ(int i1,int j1)
		{
			i=i1;
			j=j1;
		}
			
};
class B:public A
{
	public:
		void Show()
		{
			//cout<<"i="<<i;
			cout<<"j="<<j;
		}
};
class C:public B
{
};
int main()
{
	B b1;
	b1.SetIJ(10,20);
	b1.Show();
	C c1;
	c1.SetIJ(100,200);
	c1.Show();
	return 0;
}

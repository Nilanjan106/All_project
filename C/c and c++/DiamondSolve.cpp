#include<iostream>
using namespace std;
class A
{
	public:
		void Show()
		{
			cout<<"A class";
		}
};
class B:public  virtual A
{
	
};
class C:public virtual A
{
};
class D:public B,C
{
};
int main()
{
	D d1;
	d1.Show();
}

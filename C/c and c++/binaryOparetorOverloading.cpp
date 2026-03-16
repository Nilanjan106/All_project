#include<iostream>
using namespace std;
class X
{
	int i;
	public:
		void SetI(int i)
		{
			this->i=i;
		}
		void operator>(X x)
		{
			if(i>x.i)
			{
				cout<<"max="<<i;
			}
			
		}
};
int main()
{
	X x1;
	x1.SetI(100);
	
	X x2;
	x2.SetI(90);
	
	x1.operator>(x2);
	//x1>x2;//
}

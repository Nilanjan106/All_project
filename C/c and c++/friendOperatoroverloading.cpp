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
		friend void operator>(X x1,X x2)
		{
			if(x1.i>x2.i)
			{
				cout<<"max="<<x1.i;
			}
			else
			{
				cout<<"max="<<x2.i;
			}
			
		}
};
int main()
{
	X x1;
	x1.SetI(40);
	
	X x2;
	x2.SetI(90);
	
//	x1.operator>(x2);//
	x1>x2;
}

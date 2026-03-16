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
		friend void operator++(X x)
		{
			x.i=x.i+1;
			cout<<"i="<<x.i;
		}
};
int main()
{
	X x1;
	x1.SetI(100);
	x1++;
	return 0;
}

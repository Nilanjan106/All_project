#include<iostream>
using namespace std;
class X
{
	private:
	int i;
	public:
		void SetI(int i1)
		{
			i=i1;
		}
		void Copy(X x)
		{
		   i=x.i;
		}
		void Show()
		{
			cout<<"i="<<i;
		}
};
int main()
{
	X x1;
	x1.SetI(100);
	
	X x2;
	x2.Copy(x1);
	
	x1.Show();
	x2.Show();
	return 0;
}

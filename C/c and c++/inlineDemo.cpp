#include<iostream>
using namespace std;
class X
{
	public:
   inline void Show()
   {
   	cout<<" I am inline";
   }	
};
int main()
{
	X x1;
	for(int i=0;i<10;i++)
	x1.Show();
	return 0;
}

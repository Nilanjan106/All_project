#include<iostream>
using namespace std;
class A
{
	int i;
	public: 
	void SetI(int i1)
	{
		if(i1<100)
		   cout<<"Not Possible";
		else
		   i=i1;
	}
	int GetI()
	{
		return i;
	}
	
};
int main()
{
	A a1;
	a1.SetI(1);
	cout<<"i="<<a1.GetI();
}

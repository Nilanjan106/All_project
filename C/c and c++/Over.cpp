//overridding
#include<iostream>
using namespace std;
class A
{
public:
   virtual void Show()	
   {
   	cout<<"A class";
   }
};
class B :public A
{
public:
   void Show()	
   {
   	cout<<"B class";
   }
};
int main()
{
	/*A *a1=NULL;
	B b1;
	a1=&b1;
	a1->Show();*/
	
}

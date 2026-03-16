//Nested class
#include<iostream>
using namespace std;
class A
{
	int a;
   public:
   	   void SetA(int a1)
   	   {
   		a=a1;
	   }
	   A()
	   {
	   	cout<<"A class";
	   }
       class B
	   {
	   	  int b; 
	   	public:
	   		void SetB(int b1)
   	       {
   		    b=b1;
	       }
	       B()
	       {
	       	cout<<"B class";
		   }
	   		class C
	   		{
	   			int c;
	   			public:
	   				void SetC(int c1)
   	                {
   		                c=c1;
	                }
	                C()
	                {
	                	cout<<"C Class";
					}
	                void ShowC()
	                {
	                	cout<<"C:"<<c;
					}
			};
	   };
		   	
};
int main()
{
A::	B::C obj3;
obj3.SetC(100);
obj3.ShowC();

A::B obj2;
obj2.SetB(150);
return 0;	
}

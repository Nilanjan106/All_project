#include<iostream>
using namespace std;
class X
{
	public:
		   int a,b,s;
		   void input()
		    {
		     cout<<"\n Enter the number\n";
			 cin>>a>>b;	 
			}
};
class Y:public X
            {
            	public:
                      	void add()
                      	{
                      		s=a+b;
						}  		
			};
class Z:public Y
            {
             public:
			        void display()
					{
						cout<<"\n Sum is: "<<s;
					}	
			};
int main()
            {
            	Z z;
            	z.input();
            	z.add();
            	z.display();
            	return 0;
			}							

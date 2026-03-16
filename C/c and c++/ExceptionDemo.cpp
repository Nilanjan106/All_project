#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	cout<<"I am c++"<<endl;
	try
	{
		int a,b;
		cout<<"Enter first number:";
		cin>>a;
		cout<<"Enter second number:";
		cin>>b;
		if(b==0)
		{
		  throw 0;	
		}
		else
		{
			cout<<"res:"<<a/b<<endl;
			cout<<"I am cpp"<<endl;
		}
		catch(int x)
		{
			cout<<"You can not devided by zero"<<x;
		}
		catch(float x)
		{
			cout<<"You can not devided by zero"<<x;
		}
		catch(char *ptr)
		{
			cout<<ptr;
			return 0;
		}
	}
}

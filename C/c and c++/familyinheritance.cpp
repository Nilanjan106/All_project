#include<iostream>
using namespace std;
class Father
{
	public:
		void ShowFather()
		{
			cout<<"I am your father";
		}
};
class Mother:public Father
{
	public:
		void ShowMother()
		{
			cout<<"I am your Wife";
		}
};
class Son:public Father,Mother
{
	public:
		void ShowSon()
		{
			cout<<"I am your son";
		}
		
};
class Daugther:public Father
{
	public:
		void ShowDaughter()
		{
			cout<<"I am your Daughter";
		}
};
int main()
{
	Son s1;
	s1.ShowFather();
	s1.ShowMother();
	s1.ShowSon();
	return 0;
}
	

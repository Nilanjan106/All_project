# include<iostream>
using namespace std;
class X
{
public:
   void Show()
   {
      cout<<"I am instance Function";
   }
   static void Print()
   {
   	cout<<"I am static Function";
	 }	
};
int main()
{
	//X.Print();
	X::Print();
	return 0;
}

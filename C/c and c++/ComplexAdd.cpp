#include<iostream>
using namespace std;
class Complex
{
private :
      int i,j;
public:
      void SetIJ(int i1,int j1)
	  {
	  	i=i1;
	  	j=j1;
	  }	
	  Complex()
	  {
	  	
	  }
	  Complex(Complex c1,Complex c2)
	  {
	  	i=c1.i+c2.i;
	  	j=c1.j+c2.j;
	  }
	  void Print()
	  {
	  	cout<<"i="<<i<<"  j="<<j<<endl;
	  }
	  void Fibo(int n)
	  {
	  	int FN=0,SN=1;
	  	cout<<FN<<" "<<SN;
	  	for(int i=2;i<=n;i++)
	  	{
	  		int TN=FN+SN;
	  		cout<<" "<<TN<<" ";
	  		FN=SN;
	  		SN=TN;
		}
	  }
};
int main()
{
	Complex c1;
	c1.SetIJ(50,100);
	
	Complex c2;
	c2.SetIJ(100,500);
	
	Complex c3(c1,c2);
	//c3.AddObject(c1,c2);
	c1.Print();
	c2.Print();
	c3.Print();
	c3.Fibo(10);
	return 0;
}

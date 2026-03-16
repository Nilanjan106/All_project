#include<stdio.h>
#include<conio.h>
struct Complex
{
	int R;
	int I;
	void SetR(int r)
	{
		R=r;
	}
	void SetI(int i)
	{
		I=i;
	}
	void Add(Complex c1,Complex c2)
	{
		R=c1.R+c2.R;
		I=c1.I+c2.I;
	}
	void Print()
	{
		printf("Real:%d   Imaginary:%d\n",R,I);
	}
};
int main()
{
	Complex c1;
	c1.SetR(100);
	c1.SetI(250);
	c1.Print();
	Complex c2;
	c2.SetR(200);
	c2.SetI(350);
	c2.Print();
	Complex c3;
	c3.Add(c1,c2);
	c3.Print();
	return 0;
}

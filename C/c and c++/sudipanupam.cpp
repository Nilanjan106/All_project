#include<iostream>
using namespace std;
class Sudip
{
	int money;
	public:
		void SetMoney(int mny)
		{
			money=mny;
		}
		friend void Anupam(Sudip parse)
		{
			parse.money=parse.money+10;
			cout<<"Money"<<parse.money;
		}
	
};
int main()
{
	Sudip s1;
	s1.SetMoney(1000);
	Anupam(s1);
	return 0;
}

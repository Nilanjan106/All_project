#include<iostream>
using namespace std;
class SudipParse
{
	int money;
	public:
		void SetMoney(int mny)
		{
			money=mny;
		}
		friend void Anupam(SudipParse parse)
		{
			cout<<"Money"<<parse.money;
		}
};
int main()
{
	SudipParse sp;
	sp.SetMoney(1000);
	Anupam(sp);
	return 0;
}

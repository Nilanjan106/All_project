#include<iostream>
using namespace std;
class Sudip;//forward declaration
class Namrata
{
	int Speaker;
	public:
		void SetSpeaker(int spk)
		{
			Speaker=spk;
		}
		friend void Anupam(Namrata nr,Sudip su);
		
};
class Sudip
{
	int Batery;
	public:
		void SetBatery(int bat)
		{
			Batery=bat;
		}
		friend void Anupam(Namrata nr,Sudip su);
		
};
void Anupam(Namrata nr,Sudip su)
{
	cout<<"Feast:"<<nr.Speaker+su.Batery;
}
int main()
{
	Namrata N;
	N.SetSpeaker(100);
	Sudip S;
	S.SetBatery(200);
	Anupam(N,S);
	return 0;
}

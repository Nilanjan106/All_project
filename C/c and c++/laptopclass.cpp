#include<stdio.h>
#include<string.h>
using namespace std;
class Laptop
{
	private:
		char ModelName[20];
		char CompanyName[20];
		char Processor[20];
		int Generation;
		float Price;
	public:
	    void SetModelName(char modelname[])
		{
		  strcpy(ModelName,modelname);  	
		}
		char *GetModelName()
		{
			return ModelName[0];
		}
		void SetCompanyName(char companyname[])
		{
		  strcpy(CompanyName,companyname);  	
		}
		char *GetCompanyName()
		{
			return CompanyName[0];
		}
		void SetProcessor(char processor[])
		{
			strcpy(Processor,processor);
		}
		char *GetProcessor()
		{
			return Processor[0];
		}
		void SetGeneration(int generation)
		{
			Generation=generation;
		}
		int GetGeneration()
		{
			return Generation;
		}
		void SetPrice(float price)
		{
			Price=price;
		}
		float GetPrice()
		{
			return Price;
		}
		void SetPrint()
		{
			cout<<".........SHOW THE DETAILS OF LAPTOP........"
		}
};
int main()
{
	Laptop l;
	l.SetModelName();
	l.SetCompanyName();
	l.SetProcessor();
	l.SetGeneration();
	l.SetPrint();
	return 0;
}

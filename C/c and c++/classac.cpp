#include<iostream>
#include<string.h>
using namespace std;
class AC
{
	private:
		char Model[20];
		char Company[20];
		float Price;
	public:
	    void SetModel( char *model)
		{
		  strcpy(Model,model);	
		}
		char * GetModel()
		{
			return &Model[0];
		}
		void SetCompany( char *company)
		{
		  strcpy(Company,company);	
		}
		char * GetCompany()
		{
			return &Company[0];
		}
		void SetPrice(float price)
		{
			Price=price;
		}
		float GetPrice()
		{
			return Price;
		}
		void Setprint()
		{
			cout<<"SHOW THE DAITAILS OF AC";
		}
};
int main()
{
	AC ac;
	
	ac.SetModel("LG45");
	ac.SetCompany("LG");
	ac.SetPrice(300000.87);
	ac.Setprint();
	ac.GetModel();
	ac.GetCompany();
	ac.GetPrice();
	return 0;
}

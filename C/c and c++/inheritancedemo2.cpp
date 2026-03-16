#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
		char Name[30];
		public:
		void SetName(char name[])
		{
			strcpy(Name,name);
		}
};
class PartTimeEmployee:public Employee
{

	int MonthlyPaid;
	public:
		
		void SetPaid(int hr,int amt)
		{
			MonthlyPaid=hr*amt;
		}
		void Print()
		{
			cout<<"Name:"<<Name<<"  Monthly Paid:"<<MonthlyPaid;
		}
};
class FullTimeEmployee:public Employee
{
   int Salary;
   public:
   	 
	 void SetSalary(int sal)
	 {
	 	Salary=sal;
	 }
	 void Print()
	 {
	 	cout<<"Name:"<<Name<<"   Salary:"<<Salary;
	 }
};

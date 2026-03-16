#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	private:
		int Roll;
		char Name[50];
	public:
		void SetRoll(int roll)
		{
			Roll=roll;
		}
		int GetRoll()
		{
			return Roll;
		}
		void SetName(char name[])
		{
			strcpy(Name,name);
		}
		char * GetName()
		{
			return &Name[0];
		}
		void Input()
		{
			cout<<"Enter Roll No:";
			cin>>Roll;
			
			cout<<"Enter Name:";
			cin>>Name;
		}
		void Print()
		{
				cout<<"Roll:"<<Roll<<"  Name:"<<Name<<endl;
		}

};
int main()
{
	//int arr[size]
	Student students[3];
	for(int i=0;i<3;i++)
	{
		students[i].Input();
		cout<<"......................"<<endl;
	}
	cout<<"\n............Students data are........\n";
	for(int i=0;i<3;i++)
	{
		students[i].Print();
	
	}
    
	return 0;
}


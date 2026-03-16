#include<stdio.h>
#include<string.h>
#include<conio.h>
struct Student
{
private:
	float PassMarks;
public:
	int Roll;
	char Name[30];
	
	float Marks;

	void SetPassMarks(float pm)
	{
		if(pm<30)
		{
			printf("You can not set passmark below 30");
		}
		else
		{
			PassMarks=pm;
		}
	}
};
int main()
{
	Student s1;
	s1.Roll=20;
	strcpy(s1.Name,"ABC");
	s1.SetPassMarks(33);
	s1.Marks=66;
	s1.SetPassMarks(10);
	return 0;
}

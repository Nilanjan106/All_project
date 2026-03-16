#include<iostream>
using namespace std;
class Vehicals
{
   	public:
   		void ShowVehical()
   		{
   			cout<<"This is the vehical";
		}
		   
};
class Automobiles:public Vehical
{
	public:
		void ShowAutomobiles()
		{
			cout<<"Automobiles is the part of Vehical";
		}
};
class Pulledvehical:public Vehical
{
	public:
		void ShowPulledvehical()
		{
			cout<<"Pulled Vehical is the part of Vechical";
		}
};
class Car:public Automobiles
{
	public:
		void ShowCar()
		{
			cout<<"Car is part of Automobiles";
		}
	
};
class Bus:public Automobiles
{
	public:
		void ShowBus()
		{
			cout<<"Bus is part of Automoblies";
		}
};
class Cart:public Pulledvehical
{
	public:
		void ShowCart()
		{
			cout<<"Cart is part Pulledvehical";
		}
};
class Rikshaw:public Pulledvehical
{
	public:
		void ShowRikshaw()
		{
			cout<<"Rikshaw is part Pulledvehical";
		}
};
int main()
{
	Automobiles A1;
	A1.ShowAutomobiles();
	
}


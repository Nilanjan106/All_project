//Static member
#include<iostream>
using namespace std;
class Circle
{
  int Radius;
  float PI;
   public:
     void SetRadiusPi(int Rad,float pi)
	 {
	 	Radius=Rad;
	 	PI=pi;
	 }
	 void CalculateArea	()
	 {
	 	cout<<"Radius:"<<PI*Radius*Radius;
	 }
};
int main()
{
	Circle C1;
	C1.SetRadiusPi(10,3.14);
	C1.CalculateArea();
	return 0;
}

#include<iostream>
using namespace std;
class Mobile
{
	public:
		void Call()
		{
			cout<<"I am calling";
		}
		virtual void SMS()=0;
		virtual void VideoCall()=0;
};
class Mobile1:public Mobile
{
	public:
		void SMS()
		{
			cout<<"SMS working";
		}
};
class Mobile2:public Mobile1
{
	public:
		void VideoCall()
		{
			cout<<"Video calling";
		}
		void WhatApp()
		{
			cout<<"What up.....";
		}
};
int main()
{
	Mobile1 *m1;
	Mobile2 m2;
	m1=&m2;
	m1->Call();
}

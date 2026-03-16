#include<iostream>
using namespace std;
class Letter
{
	public:
		void writting()
		{
			cout<<"Only hand writting are accessable";
		}
		virtual void telegraphing()=0;
		virtual void wirecalling()=0;
		virtual void networkcalling()=0;
		virtual void sms()=0;
		virtual void Email()=0;
		virtual void Wmessage()=0;
		virtual void Videocall()=0;
		virtual void Socialmedia()=0;
};
class Telegraph:public Letter
{
	public:
		void telegraphing()
		{
			cout<<"Only short letter accessable";
		}
};
class Telephone:public Telegraph
{
	public:
		void wirecalling()
		{
			cout<<"only wire call available";
		}
};
class Kyepadphone:public Telephone
{
	public:
		void networkcalling()
		{
			cout<<"Network call is available";
		}
		void sms()
		{
			cout<<"Also text sms is available";
		}
};
class Internet:public Kyepadphone
{
	public:
		void Email()
		{
			cout<<"Mail send by internet";
		}
		void web()
		{
			cout<<"Web accessable";
		}
};
class Whatsapp:public Internet
{
	public:
		void Wmessage()
		{
		   cout<<"SMS,videocall,voicecall are available";	
	    }
	    void wp()
	    {
	    	cout<<"Pictuer,video can send and recive";
		}
};
class InternetCall:public Whatsapp
{
	public:
		void Videocall()
		{
		    cout<<"You can see them";	
		}
};
class Socialmedias:public InternetCall
{
	public:
		void Socialmedia()
		{
			cout<<"You can contact with unkown person";
		}
};
int main()
{
	Telegraph *t1;
	Socialmedias sm;
	t1=&sm;
	t1->Email();
	t1->networkcalling();
	t1->sms();
	return 0;
}

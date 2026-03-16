#include<stdio.h>
#include<string.h>
struct Book
{
	char BookName[20],AuthorName[20],PublisherName[20];
	int Page,Edition;
	float Price;
	
	void SetBookName(char bookname[])
	{
		strcpy(BookName,bookname);
	}
	void SetAuthorName(char authorname[])
	{	
	    strcpy(AuthorName,authorname);
	}
	void SetPublisherName(char publishername[])
	{	
	    strcpy(PublisherName,publishername);
	}
	void SetPage(int page)
	{
		Page=page;
	}
	void SetEdition(int edition)
	{
		Edition=edition;
	}
	void SetPrice(float price)
	{
		Price=price;
	}
	void Print()
	{
		printf("BOOK NAME:%s\nAUTHOR NAME:%s\nPUBLISHER NAME:%s\n",BookName,AuthorName,PublisherName);
		printf("PAGE:%d\nEdition:%d\nPRICE=%f\n",Page,Edition,Price);
	}
};
int main()
{
	Book s1;
	strcpy(s1.BookName,"C++");
	strcpy(s1.AuthorName,"Mr.S Nandi");
	strcpy(s1.PublisherName,"PBC");
	s1.Page=100;
	s1.Edition=13;
	s1.Price=140.67;
	s1.Print();
	return 0;
}

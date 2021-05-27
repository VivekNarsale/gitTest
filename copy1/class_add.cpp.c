#include<iostream>
#include<conio.h>
using namespace std;
class add
{
	int a;
	int b;
	add()
	{
		a=0;b=0;
	}
	add(int a,int b)
	{
	this->a=a;
	this->b=b;
	}
	void setnum1(int x)
	{
		a=x;
	}
	void setnum1(int y)
    {
    	b=y;
	}
	void display();
	{
		cout<<"\n a"<<a;
		cout<<"\n b"<<b;
	}

     int addition()
     {
     	return a+b;
	 }
  
}
void main()
{
	int p;
	add c;
	c.setnum1(12);
	c.stnum2(23);
	cout<<"Addition = "<<c.addition();

	
}


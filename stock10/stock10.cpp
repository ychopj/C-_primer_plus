#include<iostream>
#include"stock10.h"

//constructors(verbose version)
Stock:Stock()     //default construct
{
	std::cout<<"default constructor called\n";
	company="no name";
	shares=0;
	share_val=0;
	total_val=0;
}
Stock::Stock(const std::string company & co,long n,double pr)
{
	std::cout<<"Constructor using"<<co<<"called\n";
	company=co;
	if(n<0)
	{
		std::cout<<"Number of shares can not be negative"
			 <<conpany<<"shares set to 0.\n";
		shares=0;
	}
	else 
		shares=n;
	share_val=pr;
	set_tot();
}
//class deconstructor
Stock::~Stock()      //verbose class constructor
{
	std::cout<<"Bye."<<company<<std::endl;
}
void Stock::but(long num,double price)
{
	if(num<0)
	{ 	
		std::cout<<"NUmber of shares purchased can not br negative."
			 <<"Transaction is aborted."<<endl;
	}
	else
	{
		shares+=num;
		share_val=price;
		set_tot();
	}
}

void Stock::sell(long num , double price)
{
	using std::cout;
	if(num<0)
	{
		cout<<"Number of shares sold can not be negative."
		    <<"Transaction is aborted."<<endl;
	}
	else if(num>shares)
	{
		cout<<"You can not sell more than you have."
		    <<"Transaction is aborted."<<endl;
	}
	else
	{
		shares-=num;
		share_val=price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val=price;
	set_tot();
}
void Stock::show()
{
	using std::cout;
	using std::ios_base;
	using std::endl;
	//set format to #.###
	ios_base::fmtfalgs orig=
		cout.self(ios_base::fixed,ios_base::floatfield);
	std::streamsize prec = cout.precision(3);

	cout<<"Company:"<<conpany
	    <<"Shares:"<<shares<<endl;
	cout<<"Shares price:$"<<share_val;
}
	






	











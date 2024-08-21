#pragma once
#include<iostream>
#include<vector>

struct menu
{
	std ::string dishes_name;
	int price;
};
class Class_Restraurent
{
public:
	virtual void createmenu() = 0;
	virtual void showmenu() = 0;
	virtual int track_dishes(const std::string& dishname) = 0;
	std::string address;
	
};

class Chinese_Restraurent : public Class_Restraurent
{ 
	std::vector<menu> menu_vector;
	
public:
	std::string address;
	 void createmenu();
	 void showmenu();
	 int track_dishes(const std::string& dishname);
};

class Indian_Restraurent : public Class_Restraurent
{
	std::vector<menu> menu_vector;
	
public:
	std::string address;
	void createmenu();
	void showmenu();
	int track_dishes(const std::string& dishname);
	
};

class RestraManager 
{
	std::shared_ptr<Class_Restraurent> Restra_waiter;
public:
	void  CreateRestraManager(std::shared_ptr<Class_Restraurent> waiter) 
	{
		Restra_waiter = waiter;
		if (Restra_waiter) {
			Restra_waiter->createmenu();
			Restra_waiter->showmenu();
		}
	}

	int  trackdishes(std::string dishes)
	{
		int price = Restra_waiter->track_dishes(dishes);
		return price;
	}

	std::string getaddress()
	{
		return Restra_waiter->address;
	}
};
		
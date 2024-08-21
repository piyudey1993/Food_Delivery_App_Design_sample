#pragma once
#include<string>
#include<iostream>

struct person_detail
{
	std::string person_name;
	std::string address;
	
};
class DelevryDetail
{
	person_detail pd;
public:
	void order_menu()
	{
		pd.person_name = "uio";
		pd.address = "rajandra nager";

	}

	void delivery_detail(std::string address)
	{
		std::cout << "restra address is" << address << std::endl;
		std::cout << "person adress is" << pd.address << std::endl;
	}
};


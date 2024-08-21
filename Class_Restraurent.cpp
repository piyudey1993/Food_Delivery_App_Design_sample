#include "Class_Restraurent.h"
void Chinese_Restraurent::createmenu(){
	menu me;
		me.dishes_name="noodles";
		me.price = 100;
	menu_vector.push_back(me);
	address = "chandni chowk";
}
void Chinese_Restraurent::showmenu() {
	std::cout << "welcome to chinise kitchen" << std::endl;
	for (auto itr:menu_vector)
	{
		std::cout << itr.dishes_name << " : " << itr.price << std::endl;
	}

}
int Chinese_Restraurent::track_dishes(const std::string & dishname){

	for (auto itr : menu_vector)
	{
		if (dishname == itr.dishes_name)
		{
			std::cout << itr.dishes_name << "price is " << itr.price << std::endl;
			return itr.price;
		}
	}
	return 0;

}

void Indian_Restraurent::createmenu() {
	menu me;
	me.dishes_name = "roti";
	me.price = 100;
	menu_vector.push_back(me);
	address = "greater chowk";
}
void Indian_Restraurent::showmenu() {
	std::cout << "welcome to Indian kitchen" << std::endl;
	for (auto itr : menu_vector)
	{
		std::cout << itr.dishes_name << " : " << itr.price << std::endl;
	}

}
int Indian_Restraurent::track_dishes(const std::string& dishname) {

	for (auto itr : menu_vector)
	{
		if (dishname == itr.dishes_name)
		{
			std::cout << itr.dishes_name << "price is " << itr.price << std::endl;
			return itr.price;
		}
	}
	return 0;

}


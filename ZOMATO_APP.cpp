// ZOMATO_APP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "DelevryDetail.h"
#include "Class_Restraurent.h"


int main()
{
    std::shared_ptr<Class_Restraurent > chineseWaiter = std::make_shared<Chinese_Restraurent>();
    std::shared_ptr<Class_Restraurent > IndianWaiter = std::make_shared<Indian_Restraurent>();
    DelevryDetail DD;
    RestraManager Manager;
    
    while (true)
    {
        DD.order_menu();
        int no,price =0 ;
        std::cout << "welcome zomoto app" << std::endl;
        std::cout << "enter the restra otion 1 chisnese 2 indian check both menus" << std::endl;
        std::cin >> no;

        switch (no)
        {
        case 1:

            Manager.CreateRestraManager(chineseWaiter);
            std::cout << "please enter your dish" << std::endl;

            price = Manager.trackdishes("noodles");
            DD.delivery_detail(Manager.getaddress());
            if (price == 0)
            {
                std::cout << "this dish is not available" << std::endl;
            }
           
            break;
        case 2:

            Manager.CreateRestraManager(IndianWaiter);
            std::cout << "please enter your dish" << std::endl;
            price = Manager.trackdishes("roti");
            DD.delivery_detail(Manager.getaddress());
            if (price == 0)
            {
                std::cout << "this dish is not available" << std::endl;
            }
            break;
        default:
            std::cout << "sorry can't help" << std::endl;
        }


    }



   // ;
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

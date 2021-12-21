//CSCI 1300 Fall 2020
//Devin Gessner
//Partner: Biswas Gauli
//Recitation: 503
//Project 3


#ifndef Shop_h
#define Shop_h

#include <iostream>
using namespace std;

class Shop
{
   public:
   //constructor
	Shop(); 
 //parameterized constructor
    Shop(double money_used, int oxen_bought, int food_bought, int ammo_bought, int parts_bought, int firstAid_bought, int bill); 

	//Mutators:
    void BuyOxen(int oxen_bought);
    void BuyFood(int food_bought);
    void BuyAmmo(int ammo_bought);
    void UseMoney(double money_used);
    void BuyFirstAid(int firstAid_bought);
    void BuyParts(int parts_bought);
    void CalculateBill(int bill);

    //Getters:
    double GetMoney();
    int GetOxen();
    int GetFood();
    int GetAmmo();
    int GetParts();
    int GetfirstAid();
    int GetBill();
    

	
   private:
    double money;
    int total_oxen;
    int total_food;
    int total_ammo;
    int total_parts;
    int total_firstAids;
    int total_bill;
	
};
#endif
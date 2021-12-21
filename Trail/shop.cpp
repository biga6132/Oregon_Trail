//CSCI 1300 Fall 2020
//Devin Gessner
//Partner: Biswas Gauli
//Recitation: 503
//Project 3


#include "shop.h"
#include <iostream>
using namespace std;

//default constructor
Shop::Shop()	
{
	money = 1000;		
    total_oxen = 0;
    total_food = 0;
    total_ammo = 0;
    total_parts = 0;
    total_firstAids = 0;
	total_bill = 0;
}

//parameterized constructor
Shop::Shop(double money_used, int oxen_bought, int food_bought, int ammo_bought, int parts_bought, int firstAid_bought, int bill)		
{
    money = money_used;
    total_oxen = oxen_bought;
    total_food = food_bought;
    total_ammo = ammo_bought;
    total_parts = parts_bought;
    total_firstAids = firstAid_bought; 
	total_bill = bill;
}

//Mutators

void Shop::BuyOxen(int oxen_bought)
{
	total_oxen = total_oxen + oxen_bought;
}
void Shop::BuyFood(int food_bought)
{
	total_food = total_food + food_bought;
}
void Shop::BuyAmmo(int ammo_bought)
{
	total_ammo = total_ammo + ammo_bought;
}
void Shop::UseMoney(double money_used)
{
	money = money - money_used;
}
void Shop::BuyFirstAid(int firstAid_bought)
{
	total_firstAids = total_firstAids + firstAid_bought;
}
void Shop::BuyParts(int parts_bought)
{
	total_parts = total_parts + parts_bought;
}
void Shop::CalculateBill(int bill)
{
	total_bill = total_bill + bill;
}

//Accessors

int Shop::GetOxen()
{
	return total_oxen;
}
int Shop::GetFood()
{
	return total_food;
}
int Shop::GetAmmo()
{
	return total_ammo;
}
double Shop::GetMoney()
{
	return money;
}
int Shop::GetfirstAid()
{
	return total_firstAids;
}
int Shop::GetParts()
{
	return total_parts;
}
int Shop::GetBill()
{
	return total_bill;
}
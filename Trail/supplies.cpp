//CSCI 1300 Fall 2020
//Devin Gessner
//Partner: Biswas Gauli
//Recitation: 503
//Project 3


#include "supplies.h"
#include <iostream>

using namespace std;

//default constuctor
Supplies::Supplies()	
{
	money = 1000;	//how much money they have
	oxen = 0;
	food = 0;
	ammo = 0;
	parts = 0;
	firstAid = 0;
}

//parameterized constuctor

Supplies::Supplies(double money1, int oxen1, int food1, int ammo1, int parts1, int firstAid1)	
{
	money = money1;
	oxen = oxen1;
	food = food1;
	ammo = ammo1;
	parts = parts1;
	firstAid = firstAid1;
}

//Mutators

void Supplies::SetOxen(int oxen1)	//add the oxen
{
	oxen = oxen + oxen1;
}
void Supplies::SetFood(int food1)	//adding the food
{
	food = food + food1;
}
void Supplies::SetAmmo(int ammo1)	//adding the ammo
{
	ammo = ammo + ammo1;
}
void Supplies::SetMoney(double money1)	//calculating the money left
{
	money = money - money1;
}
void Supplies::SetFirstAid(int firstAid1)	//adding the first aid
{
	firstAid = firstAid + firstAid1;
}
void Supplies::SetParts(int parts1)		//adding the parts
{
	parts = parts + parts1;
}

//Accessors

int Supplies::GetOxen()		//displaying the oxen
{
	return oxen;
}	
int Supplies::GetFood()		//displaying the food
{
	return food;
}
int Supplies::GetAmmo()		//displating the ammo left
{
	return ammo;
}	
double Supplies::GetMoney()		//displaying the money lefover
{
	return money;
}
int Supplies::GetfirstAid()		//displaying the amount of first aid kits
{
	return firstAid;
}	
int Supplies::GetParts()		//displaying the amount of parts
{
	return parts;
}
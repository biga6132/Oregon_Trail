//CSCI 1300 Fall 2020
//Devin Gessner
//Partner: Biswas Gauli
//Recitation: 503
//Project 3


#ifndef supplies_h
#define supplies_h
#include <string>
using namespace std;

//initializing class
class Supplies    
{
 private:   
  double money;
  int oxen;
  int food;
  int ammo;
  int parts;
  int firstAid;

 public:
  //default constructor
  Supplies();  
  //parameterized constuctor
  Supplies(double money1, int oxen1, int food1, int ammo1, int parts1, int firstAid1); 
  
  //Getters and Setters
  void SetMoney(double money1);   
  double GetMoney();

  void SetOxen(int oxen1);
  int GetOxen();

  void SetFood(int food1);
  int GetFood();

  void SetAmmo(int ammo1);
  int GetAmmo();

  void SetParts(int parts1);
  int GetParts();

  void SetFirstAid(int firstAid1);
  int GetfirstAid();
};

#endif
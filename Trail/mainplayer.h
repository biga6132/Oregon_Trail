//CSCI 1300 Fall 2020
//Devin Gessner
//Partner: Biswas Gauli
//Recitation: 503
//Project 3


#ifndef mainplayer_h
#define mainplayer_h

#include <iostream>
using namespace std;

//initializing the class
class MainPlayer        
{
   public:
   //deault contructor
    MainPlayer();   
    //parameterized constructor
    MainPlayer(string name1, int disease1, int fatigue1, int health1);     

    //setters
    void setName(string);   
    void setDisease(int);
    void setFatigue(int);
    void setHealth(int);

    //getters
    string getName();
    int getDisease();
    int getFatigue();
    int getHealth();
    
   private:
    string name;
    int disease;
    int fatigue;
    int health;
    
};
#endif
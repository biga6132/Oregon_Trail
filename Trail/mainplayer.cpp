//CSCI 1300 Fall 2020
//Devin Gessner
//Partner: Biswas Gauli
//Recitation: 503
//Project 3


#include "mainplayer.h"
#include <iostream>
using namespace std;

//default constructor
MainPlayer::MainPlayer()        
{
    name = "";
    disease = 0;
    fatigue = 0;
    health = 0;
}
//parameterized construtor
MainPlayer::MainPlayer(string name1, int disease1, int fatigue1, int health1)       
{
    name = name1;
    disease = disease1;
    fatigue = fatigue1;
    health = health1;
}
//Mutators
void MainPlayer::setName(string name1)      //give them their name
{
    name = name1;
}
void MainPlayer::setDisease(int disease1)   //if the have a disease or not
{
    disease = disease1; 
}
void MainPlayer::setFatigue(int fatigue1)       //how tired they are
{
    fatigue = fatigue1;
}

void MainPlayer::setHealth(int health1)     //their health
{
    health = health1;
}

//Accessors
string MainPlayer::getName()        //returns mainplayer's name
{
    return name;
}
int MainPlayer::getDisease()        //returns the dieases they have
{
    return disease;
}

int MainPlayer::getFatigue()        //return how tired they are
{
    return fatigue;
}

int MainPlayer::getHealth()     //returns their health
{
    return health;
}
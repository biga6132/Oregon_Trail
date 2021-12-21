//CSCI 1300 Fall 2020
//Devin Gessner
//Partner: Biswas Gauli
//Recitation: 503
//Project 3


#ifndef Certificate_h
#define Certificate_h

#include <string>
#include <iostream>
using namespace std;

class Certificate
{
   public:
   //constroctor
	Certificate(); 
    //parameterized constructor
    Certificate(string first_part, string second_part); 

	//Mutators:
    void SetFirstPart(string first_part);
    void SetSecondPart(string second_part);

    //Getters:
    string GetFirstPart();
    string GetSecondPart();

   private:
    string first;
    string second;
	
};
#endif
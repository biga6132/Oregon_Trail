//CSCI 1300 Fall 2020
//Devin Gessner
//Partner: Biswas Gauli
//Recitation: 503
//Project 3

#include "certificate.h"
#include <iostream>
#include <string>
using namespace std;


//default constructor
Certificate::Certificate()		
{
	first = "Congratulation, ";
    second = ", you have made it to Oregon City in time. Enjoy you life here.";
}
//parameterized constructor
Certificate::Certificate(string first_part, string second_part)		
{
    first = first_part;
    second = second_part;
}

//Mutators

void Certificate::SetFirstPart(string first_part)
{
	first = first_part;
}
void Certificate::SetSecondPart(string second_part)
{
	second = second_part;
}


//Accessors

string Certificate::GetFirstPart()
{
	return first;
}
string Certificate::GetSecondPart()
{
	return second;
}

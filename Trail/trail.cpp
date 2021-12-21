//CSCI 1300 Fall 2020
//Devin Gessner
//Partner: Biswas Gauli
//Recitation: 503
//Project 3


#include <iostream>
#include <string>
#include <fstream>
#include "mainplayer.h"
#include "shop.h"
#include "supplies.h"
#include "certificate.h"
using namespace std;


int numbergenarator(int min1, int max1) //random number generator for different uses
{
 return (rand() % (max1-min1+1)) + min1;    //how it works
}

int puzzle()    //puzzle for hunting
{
 int answer = 0;
 string guess = "";

 answer = numbergenarator(1,5);     //random number generator to guessing
 for(int i = 0; i < 3; i++) //give them 3 attempts at guessing
 {
 cout << "What is your guess?" << endl;
 getline(cin, guess);
 if(stoi(guess) == answer)
 {
 cout << "You guessed correctly." << endl;  //if they guessed correctly
 return true;
 }else
 cout << "Your guess is incorrect." << endl;    //if they guessed incorrectly
 }
 return false;
}

int huntrabbit(int ammo)    //hunt rabbit
{
 int meet = 0;
 bool hunted = false;
 string picked = "";
 
 if(ammo < 10)  //checker for succifient ammo to hunt
 {
 cout << "Unfortunately, you do not have enough bullets to hunt." << endl;  //they didn't have enough ammo to hunt
 return -1;
 }
 
 meet = numbergenarator(1, 100);    //random number generator
 if(meet >= 50) //chance of meeting the rabbit is 50%
 {
 cout << "Sorry, you did not encounter a rabbit" << endl;   //they didn't encounter the rabbit
 return 0;  
 }
 cout << "You got lucky! You encountered a rabbit Would you like to hunt? (Y/N)" << endl;   //if they wanna hunt or not
 getline(cin, picked); 
 while(picked != "Y" && picked != "y" && picked != "n" && picked != "N")    //checker for invalid inputs
 {
 cout << "Please enter a valid choice." << endl;
 getline(cin, picked); 
 }
 if(picked == "N" || picked == "n") //if they didn't wanna hunt
 return 0;
 else if(picked == "Y" || picked == "y")    //if they did wanna hunt
 {
 cout << "In order to see if you get the rabbit you need to solve a puzzle. You have three tries to guess a number." << endl;
 hunted = puzzle();
 if(!hunted)
 {
 cout << "Sorry. You had an unsucessful hunt for the rabbit" << endl;   //the hunt for the rabbit was unsuccefull
 return 0;
 }
 cout << "Nice! You got the rabbit" << endl;    //succefull rabbit hunt
 return 2;
 }
 return 0;
}

int huntFox(int ammo)
{
 int meet = 0;
 bool hunted = false;
 string picked = "";
 
 if(ammo < 10)  //checker for succifient ammo
 {
 cout << "Unfortunately, you do not have enough bullets to hunt." << endl;  //didnt have enought bullets
 return -1;
 }
 
 meet = numbergenarator(1, 100);    //random number generator
 if(meet >= 25) //chance of meeting fox is 25%
 {
 cout << "Sorry, you did not encounter a fox." << endl; //didn't meet the fox
 return 0;
 }
 cout << "You got lucky! You encountered a fox. Would you like to hunt? (Y/N)" << endl; //if they wanna hunt the fox
 getline(cin, picked); 
 while(picked != "Y" && picked != "y" && picked != "n" && picked != "N")    //checker for invalid inputs
 {
 cout << "Please enter a valid choice." << endl;
 getline(cin, picked); 
 }
 if(picked == "N" || picked == "n") //if they didn't wanna hunt
 return 0;
 else if(picked == "Y" || picked == "y")    //if they did wanna hunt
 {
 cout << "In order to see if you get the fox, you need to solve a puzzle. You have three tries to guess a number." << endl;
 hunted = puzzle();
 if(!hunted)
 {
 cout << "Sorry. You had an unsucessful hunt for the fox." << endl; //if hunt is not succesfull
 return 0;
 }
 cout << "Nice! You got the fox!" << endl;  //hunt is succesful
 return 2;
 }
 return 0;
}

int huntDeer(int ammo)  //hunt deer
{
 int meet = 0;
 bool hunted = false;
 string picked = "";
    
 if(ammo < 10)  //enough ammo to hunt
 {
 cout << "Unfortunately, you do not have enough bullets to hunt." << endl;
 return -1;
 }
 
 meet = numbergenarator(1, 100);    //random number generator
 if(meet >= 15) //chance of meeting a deer is 15%
 {
 cout << "Sorry, you did not encounter a rabbit" << endl;
 return 0;
 }
 cout << "You got lucky! You encountered a rabbit Would you like to hunt? (Y/N)" << endl;   //if they wanna hunt or not
 getline(cin, picked); 
 while(picked != "Y" && picked != "y" && picked != "n" && picked != "N")    //checker for invalid inputs
 {
 cout << "Please enter a valid choice." << endl;
 getline(cin, picked); 
 }
 if(picked == "N" || picked == "n") //if they don't wanna hunt
 return 0;
 else if(picked == "Y" || picked == "y")    //if they do wanna hunt
 {
 cout << "In order to see if you get the rabbit you need to solve a puzzle. You have three tries to guess a number." << endl;   
 hunted = puzzle();
 if(!hunted)
 {
 cout << "Sorry. You had an unsucessful hunt for the rabbit" << endl;   //hunt is failed
 return 0;
 }
 cout << "Nice! You got the rabbit" << endl;    //hunt is succesful or not
 return 2;
 }
 return 0;
}

int huntBear(int ammo)  //hunt bear
{
 int meet = 0;
 bool hunted = false;
 string picked = "";
 
 if(ammo < 10)
 {
 cout << "Unfortunately, you do not have enough bullets to hunt." << endl;  //not enough bullets
 return -1;
 }
 
 meet = numbergenarator(1, 100);    //random number generator
 if(meet >= 7)  //chance of meeting bear is 7%
 {
 cout << "Sorry, you did not encounter a bear" << endl; //didn't meet animal
 return 0;
 }
 cout << "You got lucky! You encountered a bear Would you like to hunt? (Y/N)" << endl; //if they wanna hunt
 getline(cin, picked); 
 while(picked != "Y" && picked != "y" && picked != "n" && picked != "N") //if input is invalid
 {
 cout << "Please enter a valid choice." << endl;
 getline(cin, picked); 
 }
 if(picked == "N" || picked == "n") //if they don't wanna hunt
 return 0;
 else if(picked == "Y" || picked == "y")
 {
 cout << "In order to see if you get the bear, you need to solve a puzzle. You have three tries to guess a number." << endl; 
 hunted = puzzle(); //puzzle to see if hunt is succesfull
 if(!hunted)
 {
 cout << "Sorry. You had an unsucessful hunt for the bear" << endl; //didn't solve the puzzle
 return 0;
 }
 cout << "Nice! You got the bear!" << endl; //solved the puzzle
 return 2;
 }
 return 0;
}

int huntMoose(int ammo) //hunt moost
{
 int meet = 0;
 bool hunted = false;
 string picked = "";
 
 if(ammo < 10)  //check to see if ammo is sufficient to hunt
 {
 cout << "Unfortunately, you do not have enough bullets to hunt." << endl;
 return -1;
 }
 
 meet = numbergenarator(1, 100);    //meeting animal to hunt randomizer
 if(meet >= 5)  //chance of meeting mosse is 5%
 {
 cout << "Sorry, you did not encounter a moose" << endl;
 return 0;
 }
 cout << "You got lucky! You encountered a moose Would you like to hunt? (Y/N)" << endl;    //if they wanna hunt the animal or not
 getline(cin, picked); 
 while(picked != "Y" && picked != "y" && picked != "n" && picked != "N")    //checker for if they picked right choice
 {
 cout << "Please enter a valid choice." << endl;    
 getline(cin, picked); 
 }
 if(picked == "N" || picked == "n") //if they don't wanna hunt
 return 0;
 else if(picked == "Y" || picked == "y")
 {
 cout << "In order to see if you get the moose you need to solve a puzzle. You have three tries to guess a number." << endl;
 hunted = puzzle(); //puzzle to see if hunt is succesfull
 if(!hunted)    
 {
 cout << "Sorry. You had an unsucessful hunt for the moose" << endl;    //didn't solve the puzzle
 return 0;
 }
 cout << "Nice! You got the moose" << endl; //solved the puzzle
 return 2;
 }
 return 0;
}





int main()
{
 

string main_player; //initializing mainplayer name variable
string teammates[5];    //initializing teammate array
string player1;
int disease = 0;
int fatigue = 0;
int health = 100;
cout << "What is your name?" << endl;
getline(cin, main_player);
MainPlayer best_player = MainPlayer(player1, disease, fatigue, health); //initializing the main player object
//setting their default stats
best_player.setName(main_player);
best_player.setDisease(disease);
best_player.setFatigue(fatigue);
best_player.setHealth(health);
cout << "Please enter the names of your companions below:" << endl;
for(int i = 1; i <= 4; i++) //loop to enter teammates
{
 cout << i << ". : ";
 getline(cin, teammates[i]);
 
}
int x; //for the checker
x = 1; //for the checker
double initial_money = 1600; //initialize
int initial_oxen = 0; //initialize
int initial_food = 0; //initialize
int initial_ammo = 0; //initialize
int initial_parts = 0; //initialize
int initial_firstAid = 0; //initialize
int initial_bill = 0;
Shop items_bought = Shop(initial_money, initial_oxen, initial_food, initial_ammo, initial_parts, initial_firstAid, initial_bill); //making the shopping car object

Supplies on_cart = Supplies(initial_money, initial_oxen, initial_food, initial_ammo, initial_parts, initial_firstAid); //creating the cart object with supplies
char store_choice;
cout << "You are starting at mile: 0" << endl;
cout << "There are 2040 that you must travel to reach your destination" << endl;
cout << "Before the start of your trip, you can visit the store and buy supplies: food, oxen, bullets, wagon parts." << endl;

 cout << "Would you like to visit the store? Y/N" << endl;
while (x == 1) //while loop for store
{

 cin >> store_choice;
 if(store_choice == 'Y' || store_choice == 'y')
 {
 cout << "Welcome to the Store!" << endl;
cout << "YOU HAD SAVED" << items_bought.GetMoney() << "TO SPEND FOR THE TRIP" << endl;
cout << "FOR A WAGON. YOU WILL NEED TO SPEND THE REST OF YOUR MONEY ON THE" << endl;
cout << "FOLLOWING ITEMS:" << endl;
cout << " -OXEN. YOU CAN SPEND $100-$200 ON YOUR TEAM. THE MORE YOU SPEND, THE" << endl;
cout << " -FASTER YOU'LL GO BECAUSE YOU'LL HAVE BETTER ANIMALS" << endl;
cout << " -FOOD. THE MORE YOU HAVE, THE LESS CHANCE THERE IS OF GETTING SICK" << endl;
cout << " -BULLETS - $2 BUYS A BELT OF 20 BULLETS. YOU WILL NEED BULLETS FOR" << endl;
cout << " ATTACKS BY ANIMALS AND BANDITS, AND FOR HUNTING FOOD" << endl;
cout << " -MISCELLANEOUS SUPPLIES. THIS INCLUDES MEDICINE AND OTHER THINGS YOU" << endl;
cout << " WILL NEED FOR SICKNESS AND EMERGENCY REPAIRS" << endl;
cout << "YOU CAN SPEND ALL YOUR MONEY BEFORE YOU START YOUR TRIP, OR YOU CAN SAVE" << endl;
cout << "SOME OF YOUR CASH TO SPEND AT FORTS ALONG THE WAY WHEN YOU RUN LOW." << endl;
cout << "HOWEVER, ITEMS COST MORE AT THE FORTS. YOU CAN ALSO GO HUNTING ALONG THE" << endl;
cout << "WAY TO GET MORE FOOD." << endl;
cout << "You must spend between $100 to $200 dollars on oxen. There are 2 oxen in a" << endl;
cout << "yoke and the price of each yoke is $40.0." << endl;
int yokes_desired; //variables initialized
int price_yokes; //variables initialized
int total_oxen;
while(x == 1) //while loop for checker of following
{
cout << "How many yokes do you wish to purchase?: ";
cin >> yokes_desired; //input for how many desired yokes
total_oxen = yokes_desired * 2;
price_yokes = yokes_desired * 40;
if(price_yokes < 100 || price_yokes > 200) //check to see if they spent in between the amount told
{
 cout << "You must purchase between $100 to $200 dollars on oxen. Try again!" << endl;
}
else
{
 break;
}

}


items_bought.BuyOxen(total_oxen); //adding to the shopping cart with oxen

items_bought.UseMoney(price_yokes); //subtracting the bill from money left over so far

items_bought.CalculateBill(price_yokes);




on_cart.SetOxen(total_oxen); //setting the oxen to the supplies

on_cart.SetMoney(price_yokes); //setting the money by subtracting from the current budget


cout << endl;
cout << "Your current bill is: " << items_bought.GetBill() << endl; //print the bill so far
cout << endl;
cout << "I recommend at least 200 lbs. per person at the price of $0.5 per pound." << endl;
cout << "Remember the wagon cannot hold more than 1000 lbs. of food." << endl;

int food_desired; //cariables
int price_food; //variables
while(x == 1) //checker for following
{
 cout << "How many pounds of food do you wish to purchase?: ";
 cin >> food_desired;
 price_food = food_desired * .5;
 if(food_desired > 1000)
 {
 cout << "The wagon cannot hold more than 1000 lbs of food. Try again!" << endl;
 }
 else
 {
 break;
 }
 
}


items_bought.BuyFood(food_desired); //adding to the shopping cart with food

items_bought.UseMoney(price_food); //subtracting the bill from money left over so far

items_bought.CalculateBill(price_food); //calculating bill after

on_cart.SetFood(food_desired); //setting the food to the supplies

on_cart.SetMoney(price_food); //setting the money by subtracting from the current budget

cout << endl;
cout << "Your current bill is: " << items_bought.GetBill() << endl; //print the bill so far
cout << endl;

cout << "A box of 20 bullets costs $2.0." << endl;
cout << "How many boxes do you wish to purchase?: ";

int ammo_desired; //input initialization
int ammo_price; //price initialization
int total_ammo; //total bullets initialization
cin >> ammo_desired; //input the desired ammount
total_ammo = ammo_desired * 20;
ammo_price = ammo_desired * 2;


items_bought.BuyAmmo(total_ammo); //adding to the shopping cart with bullets

items_bought.UseMoney(ammo_price); //subtracting the bill from money left over so far

items_bought.CalculateBill(ammo_price);

on_cart.SetAmmo(total_ammo); //setting the ammo to the supplies

on_cart.SetMoney(ammo_price); //setting the money by subtracting from the current budget

cout << endl;
cout << "Your current bill is: " << items_bought.GetBill() << endl;
cout << endl;

cout << "A wagon part (wheels, axels, tongues) costs $20.0." << endl;
cout << "How many parts do you wish to purchase?: ";

int parts_desired;
int parts_price;
cin >> parts_desired;
parts_price = parts_desired * 20;

items_bought.BuyParts(parts_desired); //adding to the shopping cart with parts

items_bought.UseMoney(parts_price); //subtracting the bill from money left over so far

on_cart.SetParts(parts_desired); //setting the Parts to the supplies

on_cart.SetMoney(parts_price); //setting the money by subtracting from the current budget

cout << "A medical aid kit costs $25.0." << endl;
cout << "How many kits do you wish to purchase?: ";

int meds_desired;
int meds_price;
cin >> meds_desired;
meds_price = meds_desired * 25;

items_bought.BuyFirstAid(meds_desired); //adding to the shopping cart with parts

items_bought.UseMoney(meds_price); //subtracting the bill from money left over so far

on_cart.SetFirstAid(meds_desired); //setting the Meds to the supplies

on_cart.SetMoney(meds_price); //setting the money by subtracting from the current budget

int final_bill;
final_bill = parts_price + meds_price;

items_bought.CalculateBill(final_bill);

cout << endl;
cout << "Your final bill is: " << items_bought.GetBill() << ".0" << endl;
cout << endl;

cout << "You finally have have: $" << items_bought.GetMoney() << ".0. Thank you for visiting the store." << endl;
cout << endl;
 }
 else if(store_choice == 'n' || store_choice == 'N')
 {
 break;
 }
 cout << "Would you like to visit the store again?" <<endl;
}



//start of journey
//reading from from each line
ifstream f("Checkpoints.txt");

string first_checkpoint;
for (int i = 1; i <= 1; i++)
 {
 getline(f, first_checkpoint);
 }
string first_miles;
for (int i = 1; i <= 1; i++)
 {
 getline(f, first_miles);
 }
 string second_checkpoint;
for (int i = 1; i <= 1; i++)
 {
 getline(f, second_checkpoint);
 }
 string second_miles;
for (int i = 1; i <= 1; i++)
 {
 getline(f, second_miles);
 }
string third_checkpoint;
for (int i = 1; i <= 1; i++)
 {
 getline(f, third_checkpoint);
 }
string third_miles;
for (int i = 1; i <= 1; i++)
 {
 getline(f, third_miles);
 }
string fourth_checkpoint;
for (int i = 1; i <= 1; i++)
 {
 getline(f, fourth_checkpoint);
 }
string fourth_miles;
for (int i = 1; i <= 1; i++)
 {
 getline(f, fourth_miles);
 }
string fifth_checkpoint;
for (int i = 1; i <= 1; i++)
 {
 getline(f, fifth_checkpoint);
 }
string fifth_miles;
for (int i = 1; i <= 1; i++)
 {
 getline(f, fifth_miles);
 }
string sixth_checkpoint;
for (int i = 1; i <= 1; i++)
 {
 getline(f, sixth_checkpoint);
 }
string sixth_miles;
for (int i = 1; i <= 1; i++)
 {
 getline(f, sixth_miles);
 }
string seventh_checkpoint;
for (int i = 1; i <= 1; i++)
 {
 getline(f, seventh_checkpoint);
 }
string seventh_miles;
for (int i = 1; i <= 1; i++)
 {
 getline(f, seventh_miles);
 }
string eight_checkpoint;
for (int i = 1; i <= 1; i++)
 {
 getline(f, eight_checkpoint);
 }
string eight_miles;
for (int i = 1; i <= 1; i++)
 {
 getline(f, eight_miles);
 }
string ninth_checkpoint;
for (int i = 1; i <= 1; i++)
 {
 getline(f, ninth_checkpoint);
 }
string ninth_miles;
for (int i = 1; i <= 1; i++)
 {
 getline(f, ninth_miles);
 }
string tenth_checkpoint;
for (int i = 1; i <= 1; i++)
 {
 getline(f, tenth_checkpoint);
 }
string tenth_miles;
for (int i = 1; i <= 1; i++)
 {
 getline(f, tenth_miles);
 }
string eleventh_checkpoint;
for (int i = 1; i <= 1; i++)
 {
 getline(f, eleventh_checkpoint);
 }
string eleventh_miles;
for (int i = 1; i <= 1; i++)
 {
 getline(f, eleventh_miles);
 }
string twelveth_checkpoint;
for (int i = 1; i <= 1; i++)
 {
 getline(f, twelveth_checkpoint);
 }
string twelveth_miles;
for (int i = 1; i <= 1; i++)
 {
 getline(f, twelveth_miles);
 }
string thirteenth_checkpoint;
for (int i = 1; i <= 1; i++)
 {
 getline(f, thirteenth_checkpoint);
 }
string thirteenth_miles;
for (int i = 1; i <= 1; i++)
 {
 getline(f, thirteenth_miles);
 }
string fourthteenth_checkpoint;
for (int i = 1; i <= 1; i++)
 {
 getline(f, fourthteenth_checkpoint);
 }
string fourthteenth_miles;
for (int i = 1; i <= 1; i++)
 {
 getline(f, fourthteenth_miles);
 }
string fifthteenth_checkpoint;
for (int i = 1; i <= 1; i++)
 {
 getline(f, fifthteenth_checkpoint);
 }
string fifthteenth_miles;
for (int i = 1; i <= 1; i++)
 {
 getline(f, fifthteenth_miles);
 }


cout << "The final date of departure is: 1847-03-28" << endl;   //date start
cout << "You must reach the Oregon City by 1847-11-30" << endl; //date you must reach by to finish game

int nim;
int times = 0;
//First Checkpoint
cout << "1847-03-28" << endl;
cout << "Next Milestone is a river named: " << first_checkpoint << " and it is " << first_miles << " away." << endl;
cout << "You will have 3 days to either rest or hunt before continuing." << endl;

while(times < 3)
{
    //each turn
cout << "1. Rest; 2. Continue; 3. hunt; 4. quit" << endl;   //choices to what they wanna do
cin >> nim;
 if(nim == 1)
 {
 cout << "You chose to rest. Your party has consumed 3 lbs of food, per person." << endl;
 on_cart.SetFood(-15);
 if(on_cart.GetFood() <= 0)
 {
 cout << "You have ran out of food" << endl;
 return 1;
 }
 else
 {
 cout << "You have " << on_cart.GetFood() << "lbs left." << endl;   //food update
 }
 
 }
 else if(nim == 3)
 {
 cout<<"Let's go hunting!!!" << endl;
 //huntrabbit(on_cart.GetAmmo());
 if(huntrabbit(on_cart.GetAmmo()) == 2) //run hunting function
 {
 on_cart.SetAmmo(-10);
 on_cart.SetFood(5);
 
 int x;
 //how good you wanna eat after succesfull hunt
 cout << "How well do you want to eat after this hunting day?" << endl;
 cout << "(1)Poorly: 2 lbs of food, per person" << endl;
 cout << "(2)Moderately: 3 lbs of food, per person" << endl;
 cout << "(3)Well: 5 lbs of food, per person" << endl;
 cin >> x;
 if(x == 1)
 {
 on_cart.SetFood(-10);
 }
 else if(x == 2)
 {
 on_cart.SetFood(-15);
 }
 else if(x == 3)
 {
 on_cart.SetFood(-25);
 }

 if(on_cart.GetFood() > 1000)   //food can't exceed 1000
 {
 cout << "You had a succefull hunt. Unfortunately your cart can't carry more than a 1000 pounds of food." << endl;
 int dog;
 dog = 1000 - on_cart.GetFood();
 on_cart.SetFood(dog);
 }

 }


 
 }
 else if(nim == 4)
 {
 return 1;
 }
 else if(nim == 2)
 {
     on_cart.SetFood(-210); //eat food
 break;
 }

 times++;
}
//stauts update
cout << "--------------------------------------CURRENT STATUS------------------------------------------------------------" << endl;
cout << "current date: 1847-03-28 " << "miles traveled: 102 " << "next landmark: 83 " << "food: " << on_cart.GetFood() << " " << "bullets: " << on_cart.GetAmmo() << " " << "Cash: " << on_cart.GetMoney() << endl;
if(on_cart.GetFood() <= 0)
{
    return 1;
}

//Second Checkpoint
cout << "1847-04-11" << endl;
cout << "Next Milestone is a river named: " << second_checkpoint << " and it is " << second_miles << " away." << endl;
cout << "You will have 3 days to either rest or hunt before continuing." << endl;
while(times < 3)
{
    //turn
cout << "1. Rest; 2. Continue; 3. hunt; 4. quit" << endl;
cin >> nim;
 if(nim == 1)
 {
 cout << "You chose to rest. Your party has consumed 3 lbs of food, per person." << endl;
 on_cart.SetFood(-15);
 if(on_cart.GetFood() < 0)
 {
 cout << "You have ran out of food" << endl;
 return 1;
 }
 else
 {
 cout << "You have " << on_cart.GetFood() << "lbs left." << endl;   //food update
 }
 
 }
 else if(nim == 3)
 {
 cout<<"Let's go hunting!!!" << endl;
 if(huntFox(on_cart.GetAmmo()) == 2)
 {
 on_cart.SetAmmo(-8);
 on_cart.SetFood(10);
 
 int x;
 //how much to eat after hunt
 cout << "How well do you want to eat after this hunting day?" << endl;
 cout << "(1)Poorly: 2 lbs of food, per person" << endl;
 cout << "(2)Moderately: 3 lbs of food, per person" << endl;
 cout << "(3)Well: 5 lbs of food, per person" << endl;
 cin >> x;
 if(x == 1)
 {
 on_cart.SetFood(-10);  //time to eat
 }
 else if(x == 2)
 {
 on_cart.SetFood(-15);  //dinner time
 }
 else if(x == 3)
 {
 on_cart.SetFood(-25);  //eat food
 }

 if(on_cart.GetFood() > 1000)   //food can't exceed 1000
 {
 cout << "You had a succefull hunt. Unfortunately your cart can't carry more than a 1000 pounds of food." << endl;
 int dog;
 dog = 1000 - on_cart.GetFood();
 on_cart.SetFood(dog);
 }

 }
 }
 else if(nim == 4)
 {
 return 1;
 }
 else if(nim == 2)
 {
     on_cart.SetFood(-210); //eat food 
 break;
 }

 nim++;
}
//status update
cout << "--------------------------------------CURRENT STATUS------------------------------------------------------------" << endl;
cout << "current date: 1847-04-11 " << "miles traveled: 185 " << "next landmark: 119 " << "food: " << on_cart.GetFood() << " " << "bullets: " << on_cart.GetAmmo() << " " << "Cash: " << on_cart.GetMoney() << endl;
if(on_cart.GetFood() <= 0)
{
    return 1;
}

//Third Checkpoint
cout << "1847-04-25" << endl;
cout << "Next Milestone is: " << third_checkpoint << " and it is " << third_miles << " away." << endl;
//start of fort shopping
cout << "You have arrived at a fort. You can choose to shop for more supplies." << endl;

 cout << "Would you like to visit the store? Y/N" << endl;
while (x == 1) //while loop for store
{

 cin >> store_choice;
 if(store_choice == 'Y' || store_choice == 'y')
 {
 cout << "Welcome to the Store!" << endl;
cout << "YOU HAD SAVED" << items_bought.GetMoney() << "TO SPEND FOR THE TRIP" << endl;
cout << "FOR A WAGON. YOU WILL NEED TO SPEND THE REST OF YOUR MONEY ON THE" << endl;
cout << "FOLLOWING ITEMS:" << endl;
cout << " -OXEN. YOU CAN SPEND $100-$200 ON YOUR TEAM. THE MORE YOU SPEND, THE" << endl;
cout << " -FASTER YOU'LL GO BECAUSE YOU'LL HAVE BETTER ANIMALS" << endl;
cout << " -FOOD. THE MORE YOU HAVE, THE LESS CHANCE THERE IS OF GETTING SICK" << endl;
cout << " -BULLETS - $2 BUYS A BELT OF 20 BULLETS. YOU WILL NEED BULLETS FOR" << endl;
cout << " ATTACKS BY ANIMALS AND BANDITS, AND FOR HUNTING FOOD" << endl;
cout << " -MISCELLANEOUS SUPPLIES. THIS INCLUDES MEDICINE AND OTHER THINGS YOU" << endl;
cout << " WILL NEED FOR SICKNESS AND EMERGENCY REPAIRS" << endl;
cout << "YOU CAN SPEND ALL YOUR MONEY BEFORE YOU START YOUR TRIP, OR YOU CAN SAVE" << endl;
cout << "SOME OF YOUR CASH TO SPEND AT FORTS ALONG THE WAY WHEN YOU RUN LOW." << endl;
cout << "HOWEVER, ITEMS COST MORE AT THE FORTS. YOU CAN ALSO GO HUNTING ALONG THE" << endl;
cout << "WAY TO GET MORE FOOD." << endl;
cout << "You must spend between $100 to $200 dollars on oxen. There are 2 oxen in a" << endl;
cout << "yoke and the price of each yoke is $40.0." << endl;
int yokes_desired; //variables initialized
int price_yokes; //variables initialized
int total_oxen;
while(x == 1) //while loop for checker of following
{
cout << "How many yokes do you wish to purchase?: ";
cin >> yokes_desired; //input for how many desired yokes
total_oxen = yokes_desired * 2;
price_yokes = yokes_desired * 40;
if(price_yokes < 100 || price_yokes > 200) //check to see if they spent in between the amount told
{
 cout << "You must purchase between $100 to $200 dollars on oxen. Try again!" << endl;
}
else
{
 break;
}

}


items_bought.BuyOxen(total_oxen); //adding to the shopping cart with oxen

items_bought.UseMoney(price_yokes); //subtracting the bill from money left over so far

items_bought.CalculateBill(price_yokes);




on_cart.SetOxen(total_oxen); //setting the oxen to the supplies

on_cart.SetMoney(price_yokes); //setting the money by subtracting from the current budget


cout << endl;
cout << "Your current bill is: " << items_bought.GetBill() << endl; //print the bill so far
cout << endl;
cout << "I recommend at least 200 lbs. per person at the price of $0.5 per pound." << endl;
cout << "Remember the wagon cannot hold more than 1000 lbs. of food." << endl;

int food_desired; //cariables
int price_food; //variables
while(x == 1) //checker for following
{
 cout << "How many pounds of food do you wish to purchase?: ";
 cin >> food_desired;
 price_food = food_desired * .5;
 if(food_desired > 1000)
 {
 cout << "The wagon cannot hold more than 1000 lbs of food. Try again!" << endl;
 }
 else
 {
 break;
 }
 
}


items_bought.BuyFood(food_desired); //adding to the shopping cart with food

items_bought.UseMoney(price_food); //subtracting the bill from money left over so far

items_bought.CalculateBill(price_food); //calculating bill after

on_cart.SetFood(food_desired); //setting the food to the supplies

on_cart.SetMoney(price_food); //setting the money by subtracting from the current budget

cout << endl;
cout << "Your current bill is: " << items_bought.GetBill() << endl; //print the bill so far
cout << endl;

cout << "A box of 20 bullets costs $2.0." << endl;
cout << "How many boxes do you wish to purchase?: ";

int ammo_desired; //input initialization
int ammo_price; //price initialization
int total_ammo; //total bullets initialization
cin >> ammo_desired; //input the desired ammount
total_ammo = ammo_desired * 20;
ammo_price = ammo_desired * 2;


items_bought.BuyAmmo(total_ammo); //adding to the shopping cart with bullets

items_bought.UseMoney(ammo_price); //subtracting the bill from money left over so far

items_bought.CalculateBill(ammo_price);

on_cart.SetAmmo(total_ammo); //setting the ammo to the supplies

on_cart.SetMoney(ammo_price); //setting the money by subtracting from the current budget

cout << endl;
cout << "Your current bill is: " << items_bought.GetBill() << endl;
cout << endl;

cout << "A wagon part (wheels, axels, tongues) costs $20.0." << endl;
cout << "How many parts do you wish to purchase?: ";

int parts_desired;
int parts_price;
cin >> parts_desired;
parts_price = parts_desired * 20;

items_bought.BuyParts(parts_desired); //adding to the shopping cart with parts

items_bought.UseMoney(parts_price); //subtracting the bill from money left over so far

on_cart.SetParts(parts_desired); //setting the Parts to the supplies

on_cart.SetMoney(parts_price); //setting the money by subtracting from the current budget

cout << "A medical aid kit costs $25.0." << endl;
cout << "How many kits do you wish to purchase?: ";

int meds_desired;
int meds_price;
cin >> meds_desired;
meds_price = meds_desired * 25;

items_bought.BuyFirstAid(meds_desired); //adding to the shopping cart with parts

items_bought.UseMoney(meds_price); //subtracting the bill from money left over so far

on_cart.SetFirstAid(meds_desired); //setting the Meds to the supplies

on_cart.SetMoney(meds_price); //setting the money by subtracting from the current budget

int final_bill;
final_bill = parts_price + meds_price;

items_bought.CalculateBill(final_bill);

cout << endl;
cout << "Your final bill is: " << items_bought.GetBill() << ".0" << endl;
cout << endl;

cout << "You finally have have: $" << items_bought.GetMoney() << ".0. Thank you for visiting the store." << endl;
cout << endl;
 }
 else if(store_choice == 'n' || store_choice == 'N')
 {
 break;
 }
 cout << "Would you like to visit the store again?" <<endl;
}
//end of fort shopping
cout << "You will have 3 days to either rest or hunt before continuing." << endl;
while(times < 3)
{
    //turn
cout << "1. Rest; 2. Continue; 3. hunt; 4. quit" << endl;
cin >> nim;
 if(nim == 1)
 {
 cout << "You chose to rest. Your party has consumed 3 lbs of food, per person." << endl;
 on_cart.SetFood(-15);
 if(on_cart.GetFood() < 0)
 {
 cout << "You have ran out of food" << endl;
 return 1;
 }
 else
 {
 cout << "You have " << on_cart.GetFood() << "lbs left." << endl;   //food update
 }
 
 }
 else if(nim == 3)
 {
 cout<<"Let's go hunting!!!" << endl;
 if(huntDeer(on_cart.GetAmmo()) == 2)   //run hunt
 {
 on_cart.SetAmmo(-5);
 on_cart.SetFood(60);
 
 int x;
 //how good the dinner is after hunt
 cout << "How well do you want to eat after this hunting day?" << endl;
 cout << "(1)Poorly: 2 lbs of food, per person" << endl;
 cout << "(2)Moderately: 3 lbs of food, per person" << endl;
 cout << "(3)Well: 5 lbs of food, per person" << endl;
 cin >> x;
 if(x == 1)
 {
 on_cart.SetFood(-10);  //catch grub
 }
 else if(x == 2)
 {
 on_cart.SetFood(-15);  //consume food
 }
 else if(x == 3)
 {
 on_cart.SetFood(-25);  //eat food
 }

 if(on_cart.GetFood() > 1000)   //food can't exceed 1000 after hunting
 {
 cout << "You had a succefull hunt. Unfortunately your cart can't carry more than a 1000 pounds of food." << endl;
 int dog;
 dog = 1000 - on_cart.GetFood();
 on_cart.SetFood(dog);
 }

 } 
 }
 else if(nim == 4)
 {
 return 1;
 }
 else if(nim == 2)
 {
     on_cart.SetFood(-210); //eat food
 break;
 }

 nim++;
}
//status update
cout << "--------------------------------------CURRENT STATUS------------------------------------------------------------" << endl;
cout << "current date: 1847-04-25 " << "miles traveled: 304 " << "next landmark: 250 " << "food: " << on_cart.GetFood() << " " << "bullets: " << on_cart.GetAmmo() << " " << "Cash: " << on_cart.GetMoney() << endl;
if(on_cart.GetFood() <= 0)
{
    return 1;
}

//Fourth Checkpoint
cout << "1847-05-09" << endl;
cout << "Next Milestone is " << fourth_checkpoint << " and it is " << fourth_miles << " away." << endl;
cout << "You will have 3 days to either rest or hunt before continuing." << endl;
while(times < 3)
{
    //turn
cout << "1. Rest; 2. Continue; 3. hunt; 4. quit" << endl;
cin >> nim;
 if(nim == 1)
 {
 cout << "You chose to rest. Your party has consumed 3 lbs of food, per person." << endl;
 on_cart.SetFood(-15);
 if(on_cart.GetFood() < 0)
 {
 cout << "You have ran out of food" << endl;
 return 1;
 }
 else
 {
 cout << "You have " << on_cart.GetFood() << "lbs left." << endl;
 }
 
 }
 else if(nim == 3)
 {
 cout<<"Let's go hunting!!!" << endl;
 if(huntBear(on_cart.GetAmmo()) == 2)   //run hunt
 {
 on_cart.SetAmmo(-10);
 on_cart.SetFood(200);
 
 int x;
 //how good we eating after hunt
 cout << "How well do you want to eat after this hunting day?" << endl;
 cout << "(1)Poorly: 2 lbs of food, per person" << endl;
 cout << "(2)Moderately: 3 lbs of food, per person" << endl;
 cout << "(3)Well: 5 lbs of food, per person" << endl;
 cin >> x;
 if(x == 1)
 {
 on_cart.SetFood(-10);  //devour food
 }
 else if(x == 2)
 {
 on_cart.SetFood(-15);  //eat grub
 }
 else if(x == 3)
 {
 on_cart.SetFood(-25);  //consume food
 }

 if(on_cart.GetFood() > 1000)   //food can't exceed 1000
 {
 cout << "You had a succefull hunt. Unfortunately your cart can't carry more than a 1000 pounds of food." << endl;
 int dog;
 dog = 1000 - on_cart.GetFood();
 on_cart.SetFood(dog);
 }

 }
 }
 else if(nim == 4)
 {
 return 1;
 }
 else if(nim == 2)
 {
     on_cart.SetFood(-210); //eat food
 break;
 }

 nim++;
}
//status update
cout << "--------------------------------------CURRENT STATUS------------------------------------------------------------" << endl;
cout << "current date: 1847-05-09 " << "miles traveled: 554 " << "next landmark: 86 " << "food: " << on_cart.GetFood() << " " << "bullets: " << on_cart.GetAmmo() << " " << "Cash: " << on_cart.GetMoney() << endl;
if(on_cart.GetFood() <= 0)
{
    return 1;
}

//Fifth Checkpoint
cout << "1847-05-23" << endl;
cout << "Next Milestone is: " << fifth_checkpoint << " and it is " << fifth_miles << " away." << endl;
//start of fort shopping
cout << "You have arrived at a fort. You can choose to shop for more supplies." << endl;

 cout << "Would you like to visit the store? Y/N" << endl;
while (x == 1) //while loop for store
{

 cin >> store_choice;
 if(store_choice == 'Y' || store_choice == 'y')
 {
 cout << "Welcome to the Store!" << endl;
cout << "YOU HAD SAVED" << items_bought.GetMoney() << "TO SPEND FOR THE TRIP" << endl;
cout << "FOR A WAGON. YOU WILL NEED TO SPEND THE REST OF YOUR MONEY ON THE" << endl;
cout << "FOLLOWING ITEMS:" << endl;
cout << " -OXEN. YOU CAN SPEND $100-$200 ON YOUR TEAM. THE MORE YOU SPEND, THE" << endl;
cout << " -FASTER YOU'LL GO BECAUSE YOU'LL HAVE BETTER ANIMALS" << endl;
cout << " -FOOD. THE MORE YOU HAVE, THE LESS CHANCE THERE IS OF GETTING SICK" << endl;
cout << " -BULLETS - $2 BUYS A BELT OF 20 BULLETS. YOU WILL NEED BULLETS FOR" << endl;
cout << " ATTACKS BY ANIMALS AND BANDITS, AND FOR HUNTING FOOD" << endl;
cout << " -MISCELLANEOUS SUPPLIES. THIS INCLUDES MEDICINE AND OTHER THINGS YOU" << endl;
cout << " WILL NEED FOR SICKNESS AND EMERGENCY REPAIRS" << endl;
cout << "YOU CAN SPEND ALL YOUR MONEY BEFORE YOU START YOUR TRIP, OR YOU CAN SAVE" << endl;
cout << "SOME OF YOUR CASH TO SPEND AT FORTS ALONG THE WAY WHEN YOU RUN LOW." << endl;
cout << "HOWEVER, ITEMS COST MORE AT THE FORTS. YOU CAN ALSO GO HUNTING ALONG THE" << endl;
cout << "WAY TO GET MORE FOOD." << endl;
cout << "You must spend between $100 to $200 dollars on oxen. There are 2 oxen in a" << endl;
cout << "yoke and the price of each yoke is $40.0." << endl;
int yokes_desired; //variables initialized
int price_yokes; //variables initialized
int total_oxen;
while(x == 1) //while loop for checker of following
{
cout << "How many yokes do you wish to purchase?: ";
cin >> yokes_desired; //input for how many desired yokes
total_oxen = yokes_desired * 2;
price_yokes = yokes_desired * 40;
if(price_yokes < 100 || price_yokes > 200) //check to see if they spent in between the amount told
{
 cout << "You must purchase between $100 to $200 dollars on oxen. Try again!" << endl;
}
else
{
 break;
}

}


items_bought.BuyOxen(total_oxen); //adding to the shopping cart with oxen

items_bought.UseMoney(price_yokes); //subtracting the bill from money left over so far

items_bought.CalculateBill(price_yokes);




on_cart.SetOxen(total_oxen); //setting the oxen to the supplies

on_cart.SetMoney(price_yokes); //setting the money by subtracting from the current budget


cout << endl;
cout << "Your current bill is: " << items_bought.GetBill() << endl; //print the bill so far
cout << endl;
cout << "I recommend at least 200 lbs. per person at the price of $0.5 per pound." << endl;
cout << "Remember the wagon cannot hold more than 1000 lbs. of food." << endl;

int food_desired; //cariables
int price_food; //variables
while(x == 1) //checker for following
{
 cout << "How many pounds of food do you wish to purchase?: ";
 cin >> food_desired;
 price_food = food_desired * .5;
 if(food_desired > 1000)
 {
 cout << "The wagon cannot hold more than 1000 lbs of food. Try again!" << endl;
 }
 else
 {
 break;
 }
 
}


items_bought.BuyFood(food_desired); //adding to the shopping cart with food

items_bought.UseMoney(price_food); //subtracting the bill from money left over so far

items_bought.CalculateBill(price_food); //calculating bill after

on_cart.SetFood(food_desired); //setting the food to the supplies

on_cart.SetMoney(price_food); //setting the money by subtracting from the current budget

cout << endl;
cout << "Your current bill is: " << items_bought.GetBill() << endl; //print the bill so far
cout << endl;

cout << "A box of 20 bullets costs $2.0." << endl;
cout << "How many boxes do you wish to purchase?: ";

int ammo_desired; //input initialization
int ammo_price; //price initialization
int total_ammo; //total bullets initialization
cin >> ammo_desired; //input the desired ammount
total_ammo = ammo_desired * 20;
ammo_price = ammo_desired * 2;


items_bought.BuyAmmo(total_ammo); //adding to the shopping cart with bullets

items_bought.UseMoney(ammo_price); //subtracting the bill from money left over so far

items_bought.CalculateBill(ammo_price);

on_cart.SetAmmo(total_ammo); //setting the ammo to the supplies

on_cart.SetMoney(ammo_price); //setting the money by subtracting from the current budget

cout << endl;
cout << "Your current bill is: " << items_bought.GetBill() << endl;
cout << endl;

cout << "A wagon part (wheels, axels, tongues) costs $20.0." << endl;
cout << "How many parts do you wish to purchase?: ";

int parts_desired;
int parts_price;
cin >> parts_desired;
parts_price = parts_desired * 20;

items_bought.BuyParts(parts_desired); //adding to the shopping cart with parts

items_bought.UseMoney(parts_price); //subtracting the bill from money left over so far

on_cart.SetParts(parts_desired); //setting the Parts to the supplies

on_cart.SetMoney(parts_price); //setting the money by subtracting from the current budget

cout << "A medical aid kit costs $25.0." << endl;
cout << "How many kits do you wish to purchase?: ";

int meds_desired;
int meds_price;
cin >> meds_desired;
meds_price = meds_desired * 25;

items_bought.BuyFirstAid(meds_desired); //adding to the shopping cart with parts

items_bought.UseMoney(meds_price); //subtracting the bill from money left over so far

on_cart.SetFirstAid(meds_desired); //setting the Meds to the supplies

on_cart.SetMoney(meds_price); //setting the money by subtracting from the current budget

int final_bill;
final_bill = parts_price + meds_price;

items_bought.CalculateBill(final_bill);

cout << endl;
cout << "Your final bill is: " << items_bought.GetBill() << ".0" << endl;
cout << endl;

cout << "You finally have have: $" << items_bought.GetMoney() << ".0. Thank you for visiting the store." << endl;
cout << endl;
 }
 else if(store_choice == 'n' || store_choice == 'N')
 {
 break;
 }
 cout << "Would you like to visit the store again?" <<endl;
}
//end of fort shopping
cout << "You will have 3 days to either rest or hunt before continuing." << endl;
while(times < 3)
{
    //turn
cout << "1. Rest; 2. Continue; 3. hunt; 4. quit" << endl;
cin >> nim;
 if(nim == 1)
 {
 cout << "You chose to rest. Your party has consumed 3 lbs of food, per person." << endl;
 on_cart.SetFood(-15);
 if(on_cart.GetFood() < 0)
 {
 cout << "You have ran out of food" << endl;
 return 1;
 }
 else
 {
 cout << "You have " << on_cart.GetFood() << "lbs left." << endl;   //food update
 }
 
 }
 else if(nim == 3)
 {
 cout<<"Let's go hunting!!!" << endl;
 if(huntMoose(on_cart.GetAmmo()) == 2)
 {
 on_cart.SetAmmo(-12);
 on_cart.SetFood(500);
 
 int x;
 //how well u wanna eat after hunt
 cout << "How well do you want to eat after this hunting day?" << endl;
 cout << "(1)Poorly: 2 lbs of food, per person" << endl;
 cout << "(2)Moderately: 3 lbs of food, per person" << endl;
 cout << "(3)Well: 5 lbs of food, per person" << endl;
 cin >> x;
 if(x == 1)
 {
 on_cart.SetFood(-10);  //eat food
 }
 else if(x == 2)
 {
 on_cart.SetFood(-15);  //eat food
 }
 else if(x == 3)
 {
 on_cart.SetFood(-25);  //eat food
 }  

 if(on_cart.GetFood() > 1000)
 {
 cout << "You had a succefull hunt. Unfortunately your cart can't carry more than a 1000 pounds of food." << endl;
 int dog;
 dog = 1000 - on_cart.GetFood();
 on_cart.SetFood(dog);
 }

 }
 }
 else if(nim == 4)
 {
 return 1;
 }
 else if(nim == 2)
 {
     on_cart.SetFood(-210); //eat food
 break;
 }

 nim++;
}
//status update
cout << "--------------------------------------CURRENT STATUS------------------------------------------------------------" << endl;
cout << "current date: 1847-05-23 " << "miles traveled: 640 " << "next landmark: 190 " << "food: " << on_cart.GetFood() << " " << "bullets: " << on_cart.GetAmmo() << " " << "Cash: " << on_cart.GetMoney() << endl;
if(on_cart.GetFood() <= 0)
{
    return 1;
}

//Sixth Checkpoint
cout << "1847-06-06" << endl;
cout << "Next Milestone is: " << sixth_checkpoint << " and it is " << sixth_miles << " away." << endl;
cout << "You will have 3 days to either rest or hunt before continuing." << endl;
while(times < 3)
{
    //turn
cout << "1. Rest; 2. Continue; 3. hunt; 4. quit" << endl;   
cin >> nim;
 if(nim == 1)
 {
 cout << "You chose to rest. Your party has consumed 3 lbs of food, per person." << endl;
 on_cart.SetFood(-15);
 if(on_cart.GetFood() < 0)
 {
 cout << "You have ran out of food" << endl;
 return 1;
 }
 else
 {
 cout << "You have " << on_cart.GetFood() << "lbs left." << endl;
 }
 
 }
 else if(nim == 3)
 {
 cout<<"Let's go hunting!!!" << endl;
 if(huntFox(on_cart.GetAmmo()) == 2)    //run hunt
 {
 on_cart.SetAmmo(-8);
 on_cart.SetFood(10);
 
 int x;
 //how well to eat after hunt
 cout << "How well do you want to eat after this hunting day?" << endl;
 cout << "(1)Poorly: 2 lbs of food, per person" << endl;
 cout << "(2)Moderately: 3 lbs of food, per person" << endl;
 cout << "(3)Well: 5 lbs of food, per person" << endl;
 cin >> x;
 if(x == 1)
 {
 on_cart.SetFood(-10);
 }
 else if(x == 2)
 {
 on_cart.SetFood(-15);  //eat food
 }
 else if(x == 3)
 {
 on_cart.SetFood(-25);  //eat grub
 }

 if(on_cart.GetFood() > 1000)   //food can't exceed 1000
 {
 cout << "You had a succefull hunt. Unfortunately your cart can't carry more than a 1000 pounds of food." << endl;
 int dog;
 dog = 1000 - on_cart.GetFood();
 on_cart.SetFood(dog);
 }

 } 
 }
 else if(nim == 4)
 {
 return 1;
 }
 else if(nim == 2)
 {
     on_cart.SetFood(-210); //eat food
 break;
 }

 nim++;
}
//status update
cout << "--------------------------------------CURRENT STATUS------------------------------------------------------------" << endl;
cout << "current date: 1847-06-06 " << "miles traveled: 830 " << "next landmark: 102 " << "food: " << on_cart.GetFood() << " " << "bullets: " << on_cart.GetAmmo() << " " << "Cash: " << on_cart.GetMoney() << endl;
if(on_cart.GetFood() <= 0)
{
    return 1;
}

//Seventh Checkpoint
cout << "1847-06-20" << endl;
cout << "Next Milestone is: " << seventh_checkpoint << " and it is " << seventh_miles << " away." << endl;
cout << "You will have 3 days to either rest or hunt before continuing." << endl;
while(times < 3)
{
    //turn
cout << "1. Rest; 2. Continue; 3. hunt; 4. quit" << endl;
cin >> nim;
 if(nim == 1)
 {
 cout << "You chose to rest. Your party has consumed 3 lbs of food, per person." << endl;
 on_cart.SetFood(-15);
 if(on_cart.GetFood() < 0)
 {
 cout << "You have ran out of food" << endl;
 return 1;
 }
 else
 {
 cout << "You have " << on_cart.GetFood() << "lbs left." << endl;   //food update
 }
 
 }
 else if(nim == 3)
 {
 cout<<"Let's go hunting!!!" << endl;
 if(huntMoose(on_cart.GetAmmo()) == 2)
 {
 on_cart.SetAmmo(-12);
 on_cart.SetFood(500);
 
 int x;
 //how well you wanna eat after hunt
 cout << "How well do you want to eat after this hunting day?" << endl;
 cout << "(1)Poorly: 2 lbs of food, per person" << endl;
 cout << "(2)Moderately: 3 lbs of food, per person" << endl;
 cout << "(3)Well: 5 lbs of food, per person" << endl;
 cin >> x;
 if(x == 1)
 {
 on_cart.SetFood(-10);
 }
 else if(x == 2)
 {
 on_cart.SetFood(-15);
 }
 else if(x == 3)
 {
 on_cart.SetFood(-25);
 }

 if(on_cart.GetFood() > 1000)   //food can't exceed 1000
 {
 cout << "You had a succefull hunt. Unfortunately your cart can't carry more than a 1000 pounds of food." << endl;
 int dog;
 dog = 1000 - on_cart.GetFood();
 on_cart.SetFood(dog);
 }

 } 
 }
 else if(nim == 4)
 {
 return 1;
 }
 else if(nim == 2)
 { 
     on_cart.SetFood(-210); //eat food
 break;
 }

 nim++;
}
//stauts update
cout << "--------------------------------------CURRENT STATUS------------------------------------------------------------" << endl;
cout << "current date: 1847-06-20 " << "miles traveled: 932 " << "next landmark: 57 " << "food: " << on_cart.GetFood() << " " << "bullets: " << on_cart.GetAmmo() << " " << "Cash: " << on_cart.GetMoney() << endl;
if(on_cart.GetFood() <= 0)
{
    return 1;
}

//Eighth Checkpoint
cout << "1847-07-04" << endl;
cout << "Next Milestone is: " << eight_checkpoint << " and it is " << eight_miles << " away." << endl;
//start of fort shopping
cout << "You have arrived at a fort. You can choose to shop for more supplies." << endl;

 cout << "Would you like to visit the store? Y/N" << endl;
while (x == 1) //while loop for store
{

 cin >> store_choice;
 if(store_choice == 'Y' || store_choice == 'y')
 {
 cout << "Welcome to the Store!" << endl;
cout << "YOU HAD SAVED" << items_bought.GetMoney() << "TO SPEND FOR THE TRIP" << endl;
cout << "FOR A WAGON. YOU WILL NEED TO SPEND THE REST OF YOUR MONEY ON THE" << endl;
cout << "FOLLOWING ITEMS:" << endl;
cout << " -OXEN. YOU CAN SPEND $100-$200 ON YOUR TEAM. THE MORE YOU SPEND, THE" << endl;
cout << " -FASTER YOU'LL GO BECAUSE YOU'LL HAVE BETTER ANIMALS" << endl;
cout << " -FOOD. THE MORE YOU HAVE, THE LESS CHANCE THERE IS OF GETTING SICK" << endl;
cout << " -BULLETS - $2 BUYS A BELT OF 20 BULLETS. YOU WILL NEED BULLETS FOR" << endl;
cout << " ATTACKS BY ANIMALS AND BANDITS, AND FOR HUNTING FOOD" << endl;
cout << " -MISCELLANEOUS SUPPLIES. THIS INCLUDES MEDICINE AND OTHER THINGS YOU" << endl;
cout << " WILL NEED FOR SICKNESS AND EMERGENCY REPAIRS" << endl;
cout << "YOU CAN SPEND ALL YOUR MONEY BEFORE YOU START YOUR TRIP, OR YOU CAN SAVE" << endl;
cout << "SOME OF YOUR CASH TO SPEND AT FORTS ALONG THE WAY WHEN YOU RUN LOW." << endl;
cout << "HOWEVER, ITEMS COST MORE AT THE FORTS. YOU CAN ALSO GO HUNTING ALONG THE" << endl;
cout << "WAY TO GET MORE FOOD." << endl;
cout << "You must spend between $100 to $200 dollars on oxen. There are 2 oxen in a" << endl;
cout << "yoke and the price of each yoke is $40.0." << endl;
int yokes_desired; //variables initialized
int price_yokes; //variables initialized
int total_oxen;
while(x == 1) //while loop for checker of following
{
cout << "How many yokes do you wish to purchase?: ";
cin >> yokes_desired; //input for how many desired yokes
total_oxen = yokes_desired * 2;
price_yokes = yokes_desired * 40;
if(price_yokes < 100 || price_yokes > 200) //check to see if they spent in between the amount told
{
 cout << "You must purchase between $100 to $200 dollars on oxen. Try again!" << endl;
}
else
{
 break;
}

}


items_bought.BuyOxen(total_oxen); //adding to the shopping cart with oxen

items_bought.UseMoney(price_yokes); //subtracting the bill from money left over so far

items_bought.CalculateBill(price_yokes);




on_cart.SetOxen(total_oxen); //setting the oxen to the supplies

on_cart.SetMoney(price_yokes); //setting the money by subtracting from the current budget


cout << endl;
cout << "Your current bill is: " << items_bought.GetBill() << endl; //print the bill so far
cout << endl;
cout << "I recommend at least 200 lbs. per person at the price of $0.5 per pound." << endl;
cout << "Remember the wagon cannot hold more than 1000 lbs. of food." << endl;

int food_desired; //cariables
int price_food; //variables
while(x == 1) //checker for following
{
 cout << "How many pounds of food do you wish to purchase?: ";
 cin >> food_desired;
 price_food = food_desired * .5;
 if(food_desired > 1000)
 {
 cout << "The wagon cannot hold more than 1000 lbs of food. Try again!" << endl;
 }
 else
 {
 break;
 }
 
}


items_bought.BuyFood(food_desired); //adding to the shopping cart with food

items_bought.UseMoney(price_food); //subtracting the bill from money left over so far

items_bought.CalculateBill(price_food); //calculating bill after

on_cart.SetFood(food_desired); //setting the food to the supplies

on_cart.SetMoney(price_food); //setting the money by subtracting from the current budget

cout << endl;
cout << "Your current bill is: " << items_bought.GetBill() << endl; //print the bill so far
cout << endl;

cout << "A box of 20 bullets costs $2.0." << endl;
cout << "How many boxes do you wish to purchase?: ";

int ammo_desired; //input initialization
int ammo_price; //price initialization
int total_ammo; //total bullets initialization
cin >> ammo_desired; //input the desired ammount
total_ammo = ammo_desired * 20;
ammo_price = ammo_desired * 2;


items_bought.BuyAmmo(total_ammo); //adding to the shopping cart with bullets

items_bought.UseMoney(ammo_price); //subtracting the bill from money left over so far

items_bought.CalculateBill(ammo_price);

on_cart.SetAmmo(total_ammo); //setting the ammo to the supplies

on_cart.SetMoney(ammo_price); //setting the money by subtracting from the current budget

cout << endl;
cout << "Your current bill is: " << items_bought.GetBill() << endl;
cout << endl;

cout << "A wagon part (wheels, axels, tongues) costs $20.0." << endl;
cout << "How many parts do you wish to purchase?: ";

int parts_desired;
int parts_price;
cin >> parts_desired;
parts_price = parts_desired * 20;

items_bought.BuyParts(parts_desired); //adding to the shopping cart with parts

items_bought.UseMoney(parts_price); //subtracting the bill from money left over so far

on_cart.SetParts(parts_desired); //setting the Parts to the supplies

on_cart.SetMoney(parts_price); //setting the money by subtracting from the current budget

cout << "A medical aid kit costs $25.0." << endl;
cout << "How many kits do you wish to purchase?: ";

int meds_desired;
int meds_price;
cin >> meds_desired;
meds_price = meds_desired * 25;

items_bought.BuyFirstAid(meds_desired); //adding to the shopping cart with parts

items_bought.UseMoney(meds_price); //subtracting the bill from money left over so far

on_cart.SetFirstAid(meds_desired); //setting the Meds to the supplies

on_cart.SetMoney(meds_price); //setting the money by subtracting from the current budget

int final_bill;
final_bill = parts_price + meds_price;

items_bought.CalculateBill(final_bill);

cout << endl;
cout << "Your final bill is: " << items_bought.GetBill() << ".0" << endl;
cout << endl;

cout << "You finally have have: $" << items_bought.GetMoney() << ".0. Thank you for visiting the store." << endl;
cout << endl;
 }
 else if(store_choice == 'n' || store_choice == 'N')
 {
 break;
 }
 cout << "Would you like to visit the store again?" <<endl;
}
//end of fort shopping
cout << "You will have 3 days to either rest or hunt before continuing." << endl;
while(times < 3)
{
cout << "1. Rest; 2. Continue; 3. hunt; 4. quit" << endl;
cin >> nim;
 if(nim == 1)
 {
 cout << "You chose to rest. Your party has consumed 3 lbs of food, per person." << endl;   
 on_cart.SetFood(-15);
 if(on_cart.GetFood() < 0)
 {
 cout << "You have ran out of food" << endl;
 return 1;
 }
 else
 {
 cout << "You have " << on_cart.GetFood() << "lbs left." << endl;   //food update
 }
 
 }
 else if(nim == 3)
 {
 cout<<"Let's go hunting!!!" << endl;
 if(huntBear(on_cart.GetAmmo()) == 2)
 {
 on_cart.SetAmmo(-10);
 on_cart.SetFood(200);
 
 int x;
 //how well you wanna eat after hunt
 cout << "How well do you want to eat after this hunting day?" << endl;
 cout << "(1)Poorly: 2 lbs of food, per person" << endl;
 cout << "(2)Moderately: 3 lbs of food, per person" << endl;
 cout << "(3)Well: 5 lbs of food, per person" << endl;
 cin >> x;
 if(x == 1)
 {
 on_cart.SetFood(-10);
 }
 else if(x == 2)
 {
 on_cart.SetFood(-15);  //eat food
 }
 else if(x == 3)
 {
 on_cart.SetFood(-25);  //eat food
 }

 if(on_cart.GetFood() > 1000)   //food can't exceed 1000
 {
 cout << "You had a succefull hunt. Unfortunately your cart can't carry more than a 1000 pounds of food." << endl;
 int dog;
 dog = 1000 - on_cart.GetFood();
 on_cart.SetFood(dog);
 }

 } 
 }
 else if(nim == 4)
 {
 return 1;
 }
 else if(nim == 2)
 {
     on_cart.SetFood(-210); //eat food
 break;
 }

 nim++;
}
//status update
cout << "--------------------------------------CURRENT STATUS------------------------------------------------------------" << endl;
cout << "current date: 1847-07-04 " << "miles traveled: 989 " << "next landmark: 162 " << "food: " << on_cart.GetFood() << " " << "bullets: " << on_cart.GetAmmo() << " " << "Cash: " << on_cart.GetMoney() << endl;
if(on_cart.GetFood() <= 0)
{
    return 1;
}

//Ninth Checkpoint
cout << "1847-07-18" << endl;
cout << "Next Milestone is a river named: " << ninth_checkpoint << " and it is " << ninth_miles << " away." << endl;
cout << "You will have 3 days to either rest or hunt before continuing." << endl;
while(times < 3)
{
    //turn
cout << "1. Rest; 2. Continue; 3. hunt; 4. quit" << endl;
cin >> nim;
 if(nim == 1)
 {
 cout << "You chose to rest. Your party has consumed 3 lbs of food, per person." << endl;
 on_cart.SetFood(-15);
 if(on_cart.GetFood() < 0)
 {
 cout << "You have ran out of food" << endl;
 return 1;
 }
 else
 {
 cout << "You have " << on_cart.GetFood() << "lbs left." << endl;   //food update
 }
 
 }
 else if(nim == 3)
 {
 cout<<"Let's go hunting!!!" << endl;
 if(huntrabbit(on_cart.GetAmmo()) == 2)
 {
 on_cart.SetAmmo(-10);
 on_cart.SetFood(5);
 
 int x;
 //how well you wanna eat
 cout << "How well do you want to eat after this hunting day?" << endl;
 cout << "(1)Poorly: 2 lbs of food, per person" << endl;
 cout << "(2)Moderately: 3 lbs of food, per person" << endl;
 cout << "(3)Well: 5 lbs of food, per person" << endl;
 cin >> x;
 if(x == 1)
 {
 on_cart.SetFood(-10);  //eat food
 }
 else if(x == 2)
 {
 on_cart.SetFood(-15);  //eat food
 }
 else if(x == 3)
 {
 on_cart.SetFood(-25);
 }

 if(on_cart.GetFood() > 1000)   //food can't exceed 1000
 {
 cout << "You had a succefull hunt. Unfortunately your cart can't carry more than a 1000 pounds of food." << endl;
 int dog;
 dog = 1000 - on_cart.GetFood();
 on_cart.SetFood(dog);
 }

 }
 }
 else if(nim == 4)  //quit
 {
 return 1;
 }
 else if(nim == 2)
 {
     on_cart.SetFood(-210); //eat food
 break;
 }

 nim++;
}
//status update
cout << "--------------------------------------CURRENT STATUS------------------------------------------------------------" << endl;
cout << "current date: 1847-07-18 " << "miles traveled: 1151 " << "next landmark: 144 " << "food: " << on_cart.GetFood() << " " << "bullets: " << on_cart.GetAmmo() << " " << "Cash: " << on_cart.GetMoney() << endl;
if(on_cart.GetFood() <= 0)  
{
    return 1;
}

//Tenth Checkpoint
cout << "1847-08-01" << endl;
cout << "Next Milestone is: " << tenth_checkpoint << " and it is " << tenth_miles << " away." << endl;
cout << "You will have 3 days to either rest or hunt before continuing." << endl;
while(times < 3)
{
    //turn
cout << "1. Rest; 2. Continue; 3. hunt; 4. quit" << endl;
cin >> nim;
 if(nim == 1)
 {
 cout << "You chose to rest. Your party has consumed 3 lbs of food, per person." << endl;
 on_cart.SetFood(-15);
 if(on_cart.GetFood() < 0)
 {
 cout << "You have ran out of food" << endl;
 return 1;
 }
 else
 {
 cout << "You have " << on_cart.GetFood() << "lbs left." << endl;   //food update
 }
 
 }
 else if(nim == 3)
 {
 cout<<"Let's go hunting!!!" << endl;
 if(huntrabbit(on_cart.GetAmmo()) == 2) //run hunt
 {
 on_cart.SetAmmo(-10);
 on_cart.SetFood(5);
 
 int x;
 //how good you wanna eat food
 cout << "How well do you want to eat after this hunting day?" << endl;
 cout << "(1)Poorly: 2 lbs of food, per person" << endl;
 cout << "(2)Moderately: 3 lbs of food, per person" << endl;
 cout << "(3)Well: 5 lbs of food, per person" << endl;
 cin >> x;
 if(x == 1)
 {
 on_cart.SetFood(-10);  //eat food
 }  
 else if(x == 2)
 {
 on_cart.SetFood(-15);  //eat food
 }
 else if(x == 3)
 {
 on_cart.SetFood(-25);  //eat food
 }

 if(on_cart.GetFood() > 1000)   //can't exceed 1000 food
 {
 cout << "You had a succefull hunt. Unfortunately your cart can't carry more than a 1000 pounds of food." << endl;
 int dog;
 dog = 1000 - on_cart.GetFood();
 on_cart.SetFood(dog);
 }

 }
 }
 else if(nim == 4)
 {
 return 1;
 }
 else if(nim == 2)  
 {
     on_cart.SetFood(-210); //eat food
 break;
 }

 nim++;
}
//status update
cout << "--------------------------------------CURRENT STATUS------------------------------------------------------------" << endl;
cout << "current date: 1847-08-01 " << "miles traveled: 1295 " << "next landmark: 100 " << "food: " << on_cart.GetFood() << " " << "bullets: " << on_cart.GetAmmo() << " " << "Cash: " << on_cart.GetMoney() << endl;
if(on_cart.GetFood() <= 0)
{
    return 1;
}

//Eleventh Checkpoint
cout << "1847-08-15" << endl;
cout << "Next Milestone is: " << eleventh_checkpoint << " and it is " << eleventh_miles << " away." << endl;
//start of fort shopping
cout << "You have arrived at a fort. You can choose to shop for more supplies." << endl;

 cout << "Would you like to visit the store? Y/N" << endl;
while (x == 1) //while loop for store
{

 cin >> store_choice;
 if(store_choice == 'Y' || store_choice == 'y')
 {
 cout << "Welcome to the Store!" << endl;
cout << "YOU HAD SAVED" << items_bought.GetMoney() << "TO SPEND FOR THE TRIP" << endl;
cout << "FOR A WAGON. YOU WILL NEED TO SPEND THE REST OF YOUR MONEY ON THE" << endl;
cout << "FOLLOWING ITEMS:" << endl;
cout << " -OXEN. YOU CAN SPEND $100-$200 ON YOUR TEAM. THE MORE YOU SPEND, THE" << endl;
cout << " -FASTER YOU'LL GO BECAUSE YOU'LL HAVE BETTER ANIMALS" << endl;
cout << " -FOOD. THE MORE YOU HAVE, THE LESS CHANCE THERE IS OF GETTING SICK" << endl;
cout << " -BULLETS - $2 BUYS A BELT OF 20 BULLETS. YOU WILL NEED BULLETS FOR" << endl;
cout << " ATTACKS BY ANIMALS AND BANDITS, AND FOR HUNTING FOOD" << endl;
cout << " -MISCELLANEOUS SUPPLIES. THIS INCLUDES MEDICINE AND OTHER THINGS YOU" << endl;
cout << " WILL NEED FOR SICKNESS AND EMERGENCY REPAIRS" << endl;
cout << "YOU CAN SPEND ALL YOUR MONEY BEFORE YOU START YOUR TRIP, OR YOU CAN SAVE" << endl;
cout << "SOME OF YOUR CASH TO SPEND AT FORTS ALONG THE WAY WHEN YOU RUN LOW." << endl;
cout << "HOWEVER, ITEMS COST MORE AT THE FORTS. YOU CAN ALSO GO HUNTING ALONG THE" << endl;
cout << "WAY TO GET MORE FOOD." << endl;
cout << "You must spend between $100 to $200 dollars on oxen. There are 2 oxen in a" << endl;
cout << "yoke and the price of each yoke is $40.0." << endl;
int yokes_desired; //variables initialized
int price_yokes; //variables initialized
int total_oxen;
while(x == 1) //while loop for checker of following
{
cout << "How many yokes do you wish to purchase?: ";
cin >> yokes_desired; //input for how many desired yokes
total_oxen = yokes_desired * 2;
price_yokes = yokes_desired * 40;
if(price_yokes < 100 || price_yokes > 200) //check to see if they spent in between the amount told
{
 cout << "You must purchase between $100 to $200 dollars on oxen. Try again!" << endl;
}
else
{
 break;
}

}


items_bought.BuyOxen(total_oxen); //adding to the shopping cart with oxen

items_bought.UseMoney(price_yokes); //subtracting the bill from money left over so far

items_bought.CalculateBill(price_yokes);




on_cart.SetOxen(total_oxen); //setting the oxen to the supplies

on_cart.SetMoney(price_yokes); //setting the money by subtracting from the current budget


cout << endl;
cout << "Your current bill is: " << items_bought.GetBill() << endl; //print the bill so far
cout << endl;
cout << "I recommend at least 200 lbs. per person at the price of $0.5 per pound." << endl;
cout << "Remember the wagon cannot hold more than 1000 lbs. of food." << endl;

int food_desired; //cariables
int price_food; //variables
while(x == 1) //checker for following
{
 cout << "How many pounds of food do you wish to purchase?: ";
 cin >> food_desired;
 price_food = food_desired * .5;
 if(food_desired > 1000)
 {
 cout << "The wagon cannot hold more than 1000 lbs of food. Try again!" << endl;
 }
 else
 {
 break;
 }
 
}


items_bought.BuyFood(food_desired); //adding to the shopping cart with food

items_bought.UseMoney(price_food); //subtracting the bill from money left over so far

items_bought.CalculateBill(price_food); //calculating bill after

on_cart.SetFood(food_desired); //setting the food to the supplies

on_cart.SetMoney(price_food); //setting the money by subtracting from the current budget

cout << endl;
cout << "Your current bill is: " << items_bought.GetBill() << endl; //print the bill so far
cout << endl;

cout << "A box of 20 bullets costs $2.0." << endl;
cout << "How many boxes do you wish to purchase?: ";

int ammo_desired; //input initialization
int ammo_price; //price initialization
int total_ammo; //total bullets initialization
cin >> ammo_desired; //input the desired ammount
total_ammo = ammo_desired * 20;
ammo_price = ammo_desired * 2;


items_bought.BuyAmmo(total_ammo); //adding to the shopping cart with bullets

items_bought.UseMoney(ammo_price); //subtracting the bill from money left over so far

items_bought.CalculateBill(ammo_price);

on_cart.SetAmmo(total_ammo); //setting the ammo to the supplies

on_cart.SetMoney(ammo_price); //setting the money by subtracting from the current budget

cout << endl;
cout << "Your current bill is: " << items_bought.GetBill() << endl;
cout << endl;

cout << "A wagon part (wheels, axels, tongues) costs $20.0." << endl;
cout << "How many parts do you wish to purchase?: ";

int parts_desired;
int parts_price;
cin >> parts_desired;
parts_price = parts_desired * 20;

items_bought.BuyParts(parts_desired); //adding to the shopping cart with parts

items_bought.UseMoney(parts_price); //subtracting the bill from money left over so far

on_cart.SetParts(parts_desired); //setting the Parts to the supplies

on_cart.SetMoney(parts_price); //setting the money by subtracting from the current budget

cout << "A medical aid kit costs $25.0." << endl;
cout << "How many kits do you wish to purchase?: ";

int meds_desired;
int meds_price;
cin >> meds_desired;
meds_price = meds_desired * 25;

items_bought.BuyFirstAid(meds_desired); //adding to the shopping cart with parts

items_bought.UseMoney(meds_price); //subtracting the bill from money left over so far

on_cart.SetFirstAid(meds_desired); //setting the Meds to the supplies

on_cart.SetMoney(meds_price); //setting the money by subtracting from the current budget

int final_bill;
final_bill = parts_price + meds_price;

items_bought.CalculateBill(final_bill);

cout << endl;
cout << "Your final bill is: " << items_bought.GetBill() << ".0" << endl;
cout << endl;

cout << "You finally have have: $" << items_bought.GetMoney() << ".0. Thank you for visiting the store." << endl;
cout << endl;
 }
 else if(store_choice == 'n' || store_choice == 'N')
 {
 break;
 }
 cout << "Would you like to visit the store again?" <<endl;
}
//end of fort shopping
cout << "You will have 3 days to either rest or hunt before continuing." << endl;
while(times < 3)
{
    //turn
cout << "1. Rest; 2. Continue; 3. hunt; 4. quit" << endl;
cin >> nim;
 if(nim == 1)
 {
 cout << "You chose to rest. Your party has consumed 3 lbs of food, per person." << endl;
 on_cart.SetFood(-15);
 if(on_cart.GetFood() <= 0) //can't run outta food
 {
 cout << "You have ran out of food" << endl;    
 return 1;
 }
 else
 {
 cout << "You have " << on_cart.GetFood() << "lbs left." << endl;   //food update
 }
 
 }
 else if(nim == 3)
 {
 cout<<"Let's go hunting!!!" << endl;
 if(huntrabbit(on_cart.GetAmmo()) == 2) //run hunt
 {
 on_cart.SetAmmo(-10);
 on_cart.SetFood(5);
 
 int x;
 cout << "How well do you want to eat after this hunting day?" << endl;
 cout << "(1)Poorly: 2 lbs of food, per person" << endl;
 cout << "(2)Moderately: 3 lbs of food, per person" << endl;
 cout << "(3)Well: 5 lbs of food, per person" << endl;
 cin >> x;
 if(x == 1)
 {
 on_cart.SetFood(-10);  //subtract food
 }
 else if(x == 2)
 {
 on_cart.SetFood(-15);  //eat food
 }
 else if(x == 3)
 {
 on_cart.SetFood(-25);  //eat food
 }

 if(on_cart.GetFood() > 1000)   //food can't exceed 1000
 {
 cout << "You had a succefull hunt. Unfortunately your cart can't carry more than a 1000 pounds of food." << endl;
 int dog;
 dog = 1000 - on_cart.GetFood();
 on_cart.SetFood(dog);
 }

 }
 }
 else if(nim == 4)
 {
 return 1;
 }
 else if(nim == 2)
 {
     on_cart.SetFood(-210); //subtract food
 break;
 }

 nim++;
}
//status update
cout << "--------------------------------------CURRENT STATUS------------------------------------------------------------" << endl;
cout << "current date: 1847-08-15 " << "miles traveled: 1395 " << "next landmark: 139 " << "food: " << on_cart.GetFood() << " " << "bullets: " << on_cart.GetAmmo() << " " << "Cash: " << on_cart.GetMoney() << endl;
if(on_cart.GetFood() <= 0)
{
    return 1;
}

//Twelveth Checkpoint
cout << "1847-08-29" << endl;
cout << "Next Milestone is a river named: " << twelveth_checkpoint << " and it is " << twelveth_miles << " away." << endl;
cout << "You will have 3 days to either rest or hunt before continuing." << endl;
while(times < 3)
{
    //turn
cout << "1. Rest; 2. Continue; 3. hunt; 4. quit" << endl;
cin >> nim;
 if(nim == 1)
 {
 cout << "You chose to rest. Your party has consumed 3 lbs of food, per person." << endl;
 on_cart.SetFood(-15);  
 if(on_cart.GetFood() < 0)  //check to see if outta food
 {
 cout << "You have ran out of food" << endl;   
 return 1;
 }
 else
 {
 cout << "You have " << on_cart.GetFood() << "lbs left." << endl;   //food update
 }
 
 }
 else if(nim == 3)
 {
 cout<<"Let's go hunting!!!" << endl;
 if(huntrabbit(on_cart.GetAmmo()) == 2) //run hunt
 {
 on_cart.SetAmmo(-10);
 on_cart.SetFood(5);
 
 int x;
 //how good you wanna eat
 cout << "How well do you want to eat after this hunting day?" << endl;
 cout << "(1)Poorly: 2 lbs of food, per person" << endl;
 cout << "(2)Moderately: 3 lbs of food, per person" << endl;
 cout << "(3)Well: 5 lbs of food, per person" << endl;
 cin >> x;
 if(x == 1)
 {
 on_cart.SetFood(-10);  //subtract food
 }
 else if(x == 2)
 {
 on_cart.SetFood(-15);  //subtract food
 }
 else if(x == 3)
 {
 on_cart.SetFood(-25);  //subtract food
 }

 if(on_cart.GetFood() > 1000) // food can't exceed 1000
 {
 cout << "You had a succefull hunt. Unfortunately your cart can't carry more than a 1000 pounds of food." << endl;
 int dog;
 dog = 1000 - on_cart.GetFood();
 on_cart.SetFood(dog);
 }

 }
 }
 else if(nim == 4)
 {
 return 1;
 }
 else if(nim == 2)
 {
     on_cart.SetFood(-210); //subtract food
 break;
 }

 nim++;
}
//status update
cout << "--------------------------------------CURRENT STATUS------------------------------------------------------------" << endl;
cout << "current date: 1847-08-29 " << "miles traveled: 1534 " << "next landmark: 114 " << "food: " << on_cart.GetFood() << " " << "bullets: " << on_cart.GetAmmo() << " " << "Cash: " << on_cart.GetMoney() << endl;
if(on_cart.GetFood() <= 0)
{
    return 1;
}

//Thirtheenth Checkpoint
cout << "1847-09-05" << endl;
cout << "Next Milestone is : " << thirteenth_checkpoint << " and it is " << thirteenth_miles << " away." << endl;
//start of fort shopping
cout << "You have arrived at a fort. You can choose to shop for more supplies." << endl;

 cout << "Would you like to visit the store? Y/N" << endl;  //if you wanna visit the fort store
while (x == 1) //while loop for store
{

 cin >> store_choice;
 if(store_choice == 'Y' || store_choice == 'y')
 {
 cout << "Welcome to the Store!" << endl;
cout << "YOU HAD SAVED" << items_bought.GetMoney() << "TO SPEND FOR THE TRIP" << endl;
cout << "FOR A WAGON. YOU WILL NEED TO SPEND THE REST OF YOUR MONEY ON THE" << endl;
cout << "FOLLOWING ITEMS:" << endl;
cout << " -OXEN. YOU CAN SPEND $100-$200 ON YOUR TEAM. THE MORE YOU SPEND, THE" << endl;
cout << " -FASTER YOU'LL GO BECAUSE YOU'LL HAVE BETTER ANIMALS" << endl;
cout << " -FOOD. THE MORE YOU HAVE, THE LESS CHANCE THERE IS OF GETTING SICK" << endl;
cout << " -BULLETS - $2 BUYS A BELT OF 20 BULLETS. YOU WILL NEED BULLETS FOR" << endl;
cout << " ATTACKS BY ANIMALS AND BANDITS, AND FOR HUNTING FOOD" << endl;
cout << " -MISCELLANEOUS SUPPLIES. THIS INCLUDES MEDICINE AND OTHER THINGS YOU" << endl;
cout << " WILL NEED FOR SICKNESS AND EMERGENCY REPAIRS" << endl;
cout << "YOU CAN SPEND ALL YOUR MONEY BEFORE YOU START YOUR TRIP, OR YOU CAN SAVE" << endl;
cout << "SOME OF YOUR CASH TO SPEND AT FORTS ALONG THE WAY WHEN YOU RUN LOW." << endl;
cout << "HOWEVER, ITEMS COST MORE AT THE FORTS. YOU CAN ALSO GO HUNTING ALONG THE" << endl;
cout << "WAY TO GET MORE FOOD." << endl;
cout << "You must spend between $100 to $200 dollars on oxen. There are 2 oxen in a" << endl;
cout << "yoke and the price of each yoke is $40.0." << endl;
int yokes_desired; //variables initialized
int price_yokes; //variables initialized
int total_oxen;
while(x == 1) //while loop for checker of following
{
cout << "How many yokes do you wish to purchase?: ";
cin >> yokes_desired; //input for how many desired yokes
total_oxen = yokes_desired * 2;
price_yokes = yokes_desired * 40;
if(price_yokes < 100 || price_yokes > 200) //check to see if they spent in between the amount told
{
 cout << "You must purchase between $100 to $200 dollars on oxen. Try again!" << endl;
}
else
{
 break;
}

}


items_bought.BuyOxen(total_oxen); //adding to the shopping cart with oxen

items_bought.UseMoney(price_yokes); //subtracting the bill from money left over so far

items_bought.CalculateBill(price_yokes);




on_cart.SetOxen(total_oxen); //setting the oxen to the supplies

on_cart.SetMoney(price_yokes); //setting the money by subtracting from the current budget


cout << endl;
cout << "Your current bill is: " << items_bought.GetBill() << endl; //print the bill so far
cout << endl;
cout << "I recommend at least 200 lbs. per person at the price of $0.5 per pound." << endl;
cout << "Remember the wagon cannot hold more than 1000 lbs. of food." << endl;

int food_desired; //cariables
int price_food; //variables
while(x == 1) //checker for following
{
 cout << "How many pounds of food do you wish to purchase?: ";
 cin >> food_desired;
 price_food = food_desired * .5;
 if(food_desired > 1000)
 {
 cout << "The wagon cannot hold more than 1000 lbs of food. Try again!" << endl;
 }
 else
 {
 break;
 }
 
}


items_bought.BuyFood(food_desired); //adding to the shopping cart with food

items_bought.UseMoney(price_food); //subtracting the bill from money left over so far

items_bought.CalculateBill(price_food); //calculating bill after

on_cart.SetFood(food_desired); //setting the food to the supplies

on_cart.SetMoney(price_food); //setting the money by subtracting from the current budget

cout << endl;
cout << "Your current bill is: " << items_bought.GetBill() << endl; //print the bill so far
cout << endl;

cout << "A box of 20 bullets costs $2.0." << endl;
cout << "How many boxes do you wish to purchase?: ";

int ammo_desired; //input initialization
int ammo_price; //price initialization
int total_ammo; //total bullets initialization
cin >> ammo_desired; //input the desired ammount
total_ammo = ammo_desired * 20;
ammo_price = ammo_desired * 2;


items_bought.BuyAmmo(total_ammo); //adding to the shopping cart with bullets

items_bought.UseMoney(ammo_price); //subtracting the bill from money left over so far

items_bought.CalculateBill(ammo_price);

on_cart.SetAmmo(total_ammo); //setting the ammo to the supplies

on_cart.SetMoney(ammo_price); //setting the money by subtracting from the current budget

cout << endl;
cout << "Your current bill is: " << items_bought.GetBill() << endl;
cout << endl;

cout << "A wagon part (wheels, axels, tongues) costs $20.0." << endl;
cout << "How many parts do you wish to purchase?: ";

int parts_desired;
int parts_price;
cin >> parts_desired;
parts_price = parts_desired * 20;

items_bought.BuyParts(parts_desired); //adding to the shopping cart with parts

items_bought.UseMoney(parts_price); //subtracting the bill from money left over so far

on_cart.SetParts(parts_desired); //setting the Parts to the supplies

on_cart.SetMoney(parts_price); //setting the money by subtracting from the current budget

cout << "A medical aid kit costs $25.0." << endl;
cout << "How many kits do you wish to purchase?: ";

int meds_desired;
int meds_price;
cin >> meds_desired;
meds_price = meds_desired * 25;

items_bought.BuyFirstAid(meds_desired); //adding to the shopping cart with parts

items_bought.UseMoney(meds_price); //subtracting the bill from money left over so far

on_cart.SetFirstAid(meds_desired); //setting the Meds to the supplies

on_cart.SetMoney(meds_price); //setting the money by subtracting from the current budget

int final_bill;
final_bill = parts_price + meds_price;

items_bought.CalculateBill(final_bill);

cout << endl;
cout << "Your final bill is: " << items_bought.GetBill() << ".0" << endl;
cout << endl;

cout << "You finally have have: $" << items_bought.GetMoney() << ".0. Thank you for visiting the store." << endl;
cout << endl;
 }
 else if(store_choice == 'n' || store_choice == 'N')
 {
 break;
 }
 cout << "Would you like to visit the store again?" <<endl;
}
//end of fort shopping
cout << "You will have 3 days to either rest or hunt before continuing." << endl;
while(times < 3)
{
    //turn
cout << "1. Rest; 2. Continue; 3. hunt; 4. quit" << endl;
cin >> nim;
 if(nim == 1)
 {
 cout << "You chose to rest. Your party has consumed 3 lbs of food, per person." << endl;
 on_cart.SetFood(-15);
 if(on_cart.GetFood() < 0)  //cant run out of food or you starve
 {
 cout << "You have ran out of food" << endl;   
 return 1;
 }
 else
 {
 cout << "You have " << on_cart.GetFood() << "lbs left." << endl;   //how much food left
 }
 
 }
 else if(nim == 3)
 {
 cout<<"Let's go hunting!!!" << endl;
 if(huntDeer(on_cart.GetAmmo()) == 2)   //do the hunting function
 {
 on_cart.SetAmmo(-5);
 on_cart.SetFood(60);
 
 int x;
 //how well to eat
 cout << "How well do you want to eat after this hunting day?" << endl;
 cout << "(1)Poorly: 2 lbs of food, per person" << endl;
 cout << "(2)Moderately: 3 lbs of food, per person" << endl;
 cout << "(3)Well: 5 lbs of food, per person" << endl;
 cin >> x;
 if(x == 1)
 {
 on_cart.SetFood(-10);      //subtract food
 }
 else if(x == 2)
 {
 on_cart.SetFood(-15);      //subtract food
 }
 else if(x == 3)
 {
 on_cart.SetFood(-25);  //subtract food
 }

 if(on_cart.GetFood() > 1000)   //food may not exceed 1000
 {
 cout << "You had a succefull hunt. Unfortunately your cart can't carry more than a 1000 pounds of food." << endl;
 int dog;
 dog = 1000 - on_cart.GetFood();
 on_cart.SetFood(dog);
 }

 } 
 }
 else if(nim == 4)
 {
 return 1;
 }
 else if(nim == 2)
 {
     on_cart.SetFood(-210); //subtract food
 break;
 }

 nim++;
}
//status update
cout << "--------------------------------------CURRENT STATUS------------------------------------------------------------" << endl;
cout << "current date: 1847-09-05 " << "miles traveled: 1648 " << "next landmark: 160 " << "food: " << on_cart.GetFood() << " " << "bullets: " << on_cart.GetAmmo() << " " << "Cash: " << on_cart.GetMoney() << endl;
if(on_cart.GetFood() <= 0)
{
    return 1;
}

//Fourthteenth Checkpoint
cout << "1847-09-19" << endl;
cout << "Next Milestone is : " << fourthteenth_checkpoint << " and it is " << fourthteenth_miles << " away." << endl;   //printing milestone
cout << "You will have 3 days to either rest or hunt before continuing." << endl;
while(times < 3)
{
    //the turn
cout << "1. Rest; 2. Continue; 3. hunt; 4. quit" << endl;
cin >> nim;
 if(nim == 1)
 {
 cout << "You chose to rest. Your party has consumed 3 lbs of food, per person." << endl;
 on_cart.SetFood(-15);
 if(on_cart.GetFood() <= 0)
 {
 cout << "You have ran out of food" << endl;
 return 1;
 }
 else
 {
 cout << "You have " << on_cart.GetFood() << "lbs left." << endl;
 }
 
 }
 else if(nim == 3)
 {
 cout << "Let's go hunting!!!" << endl;
 if(huntFox(on_cart.GetAmmo()) == 2)
 {
 on_cart.SetAmmo(-8);
 on_cart.SetFood(10);
 
 int x;
 //how well you wanna eat
 cout << "How well do you want to eat after this hunting day?" << endl;
 cout << "(1)Poorly: 2 lbs of food, per person" << endl;
 cout << "(2)Moderately: 3 lbs of food, per person" << endl;
 cout << "(3)Well: 5 lbs of food, per person" << endl;
 cin >> x;
 if(x == 1)
 {
 on_cart.SetFood(-10);  //subtract food
 }
 else if(x == 2)
 {  
 on_cart.SetFood(-15);  //subtract food
 }
 else if(x == 3)
 {
 on_cart.SetFood(-25);  //subtract food
 }

 if(on_cart.GetFood() > 1000)   //food can't be more 1000 on cart
 {
 cout << "You had a succefull hunt. Unfortunately your cart can't carry more than a 1000 pounds of food." << endl;
 int dog;
 dog = 1000 - on_cart.GetFood();
 on_cart.SetFood(dog);
 }

 }
 }
 else if(nim == 4)
 {
 return 1;
 }
 else if(nim == 2)
 {
     on_cart.SetFood(-210); //subtract food
 break;
 }

 nim++;
}
//status update
cout << "--------------------------------------CURRENT STATUS------------------------------------------------------------" << endl;
cout << "current date: 1847-09-19 " << "miles traveled: 1808 " << "next landmark: 55 " << "food: " << on_cart.GetFood() << " " << "bullets: " << on_cart.GetAmmo() << " " << "Cash: " << on_cart.GetMoney() << endl;
if(on_cart.GetFood() <= 0)
{
    return 1;
}

//Fifthteenth Checkpoint
cout << "1847-10-03" << endl;
cout << "Next Milestone is: " << fifthteenth_checkpoint << " and it is " << fifthteenth_miles << " away." << endl;  //printing milestone
//start of fort shopping
cout << "You have arrived at a fort. You can choose to shop for more supplies." << endl;

 cout << "Would you like to visit the store? Y/N" << endl;
while (x == 1) //while loop for store
{

 cin >> store_choice;
 if(store_choice == 'Y' || store_choice == 'y')
 {
     //store message
 cout << "Welcome to the Store!" << endl;
cout << "YOU HAD SAVED" << items_bought.GetMoney() << "TO SPEND FOR THE TRIP" << endl;
cout << "FOR A WAGON. YOU WILL NEED TO SPEND THE REST OF YOUR MONEY ON THE" << endl;
cout << "FOLLOWING ITEMS:" << endl;
cout << " -OXEN. YOU CAN SPEND $100-$200 ON YOUR TEAM. THE MORE YOU SPEND, THE" << endl;
cout << " -FASTER YOU'LL GO BECAUSE YOU'LL HAVE BETTER ANIMALS" << endl;
cout << " -FOOD. THE MORE YOU HAVE, THE LESS CHANCE THERE IS OF GETTING SICK" << endl;
cout << " -BULLETS - $2 BUYS A BELT OF 20 BULLETS. YOU WILL NEED BULLETS FOR" << endl;
cout << " ATTACKS BY ANIMALS AND BANDITS, AND FOR HUNTING FOOD" << endl;
cout << " -MISCELLANEOUS SUPPLIES. THIS INCLUDES MEDICINE AND OTHER THINGS YOU" << endl;
cout << " WILL NEED FOR SICKNESS AND EMERGENCY REPAIRS" << endl;
cout << "YOU CAN SPEND ALL YOUR MONEY BEFORE YOU START YOUR TRIP, OR YOU CAN SAVE" << endl;
cout << "SOME OF YOUR CASH TO SPEND AT FORTS ALONG THE WAY WHEN YOU RUN LOW." << endl;
cout << "HOWEVER, ITEMS COST MORE AT THE FORTS. YOU CAN ALSO GO HUNTING ALONG THE" << endl;
cout << "WAY TO GET MORE FOOD." << endl;
cout << "You must spend between $100 to $200 dollars on oxen. There are 2 oxen in a" << endl;
cout << "yoke and the price of each yoke is $40.0." << endl;
int yokes_desired; //variables initialized
int price_yokes; //variables initialized
int total_oxen;
while(x == 1) //while loop for checker of following
{
cout << "How many yokes do you wish to purchase?: ";
cin >> yokes_desired; //input for how many desired yokes
total_oxen = yokes_desired * 2;
price_yokes = yokes_desired * 40;
if(price_yokes < 100 || price_yokes > 200) //check to see if they spent in between the amount told
{
 cout << "You must purchase between $100 to $200 dollars on oxen. Try again!" << endl;
}
else
{
 break;
}

}


items_bought.BuyOxen(total_oxen); //adding to the shopping cart with oxen

items_bought.UseMoney(price_yokes); //subtracting the bill from money left over so far

items_bought.CalculateBill(price_yokes);




on_cart.SetOxen(total_oxen); //setting the oxen to the supplies

on_cart.SetMoney(price_yokes); //setting the money by subtracting from the current budget


cout << endl;
cout << "Your current bill is: " << items_bought.GetBill() << endl; //print the bill so far
cout << endl;
cout << "I recommend at least 200 lbs. per person at the price of $0.5 per pound." << endl;
cout << "Remember the wagon cannot hold more than 1000 lbs. of food." << endl;

int food_desired; //cariables
int price_food; //variables
while(x == 1) //checker for following
{
 cout << "How many pounds of food do you wish to purchase?: ";
 cin >> food_desired;
 price_food = food_desired * .5;
 if(food_desired > 1000)
 {
 cout << "The wagon cannot hold more than 1000 lbs of food. Try again!" << endl;    //wagon can't hold more than 1000 pounds of food
 }
 else
 {
 break;
 }
 
}


items_bought.BuyFood(food_desired); //adding to the shopping cart with food

items_bought.UseMoney(price_food); //subtracting the bill from money left over so far

items_bought.CalculateBill(price_food); //calculating bill after

on_cart.SetFood(food_desired); //setting the food to the supplies

on_cart.SetMoney(price_food); //setting the money by subtracting from the current budget    

cout << endl;
cout << "Your current bill is: " << items_bought.GetBill() << endl; //print the bill so far
cout << endl;

cout << "A box of 20 bullets costs $2.0." << endl;
cout << "How many boxes do you wish to purchase?: ";

int ammo_desired; //input initialization
int ammo_price; //price initialization
int total_ammo; //total bullets initialization
cin >> ammo_desired; //input the desired ammount
total_ammo = ammo_desired * 20;
ammo_price = ammo_desired * 2;


items_bought.BuyAmmo(total_ammo); //adding to the shopping cart with bullets

items_bought.UseMoney(ammo_price); //subtracting the bill from money left over so far

items_bought.CalculateBill(ammo_price);

on_cart.SetAmmo(total_ammo); //setting the ammo to the supplies

on_cart.SetMoney(ammo_price); //setting the money by subtracting from the current budget

cout << endl;
cout << "Your current bill is: " << items_bought.GetBill() << endl;
cout << endl;

cout << "A wagon part (wheels, axels, tongues) costs $20.0." << endl;
cout << "How many parts do you wish to purchase?: ";

int parts_desired;
int parts_price;
cin >> parts_desired;
parts_price = parts_desired * 20;

items_bought.BuyParts(parts_desired); //adding to the shopping cart with parts

items_bought.UseMoney(parts_price); //subtracting the bill from money left over so far

on_cart.SetParts(parts_desired); //setting the Parts to the supplies

on_cart.SetMoney(parts_price); //setting the money by subtracting from the current budget

cout << "A medical aid kit costs $25.0." << endl;
cout << "How many kits do you wish to purchase?: ";

int meds_desired;
int meds_price;
cin >> meds_desired;
meds_price = meds_desired * 25;

items_bought.BuyFirstAid(meds_desired); //adding to the shopping cart with parts

items_bought.UseMoney(meds_price); //subtracting the bill from money left over so far

on_cart.SetFirstAid(meds_desired); //setting the Meds to the supplies

on_cart.SetMoney(meds_price); //setting the money by subtracting from the current budget

int final_bill;
final_bill = parts_price + meds_price;

items_bought.CalculateBill(final_bill);

cout << endl;
cout << "Your final bill is: " << items_bought.GetBill() << ".0" << endl;   //printing total
cout << endl;

cout << "You finally have have: $" << items_bought.GetMoney() << ".0. Thank you for visiting the store." << endl;   //printing money left
cout << endl;
 }
 else if(store_choice == 'n' || store_choice == 'N')
 {
 break;
 }
 cout << "Would you like to visit the store again?" <<endl; //do you wanna visit the store again
}
//end of fort shopping
cout << "You will have 3 days to either rest or hunt before continuing." << endl;
while(times < 3)
{
cout << "1. Rest; 2. Continue; 3. hunt; 4. quit" << endl;
cin >> nim;
 if(nim == 1)
 {  
 cout << "You chose to rest. Your party has consumed 3 lbs of food, per person." << endl;       //resting
 on_cart.SetFood(-15);
 if(on_cart.GetFood() < 0)
 {
 cout << "You have ran out of food" << endl;    //if you run out of food
 return 1;
 }
 else
 {
 cout << "You have " << on_cart.GetFood() << "lbs left." << endl;   
 }
 
 }
 else if(nim == 3)
 {
 cout<<"Let's go hunting!!!" << endl;   //hunting
 if(huntBear(on_cart.GetAmmo()) == 2)   //if hunt succesfull
 {
 on_cart.SetAmmo(-10);
 on_cart.SetFood(200);
 
 int x;
 //how well we want to eat after hunt
 cout << "How well do you want to eat after this hunting day?" << endl;
 cout << "(1)Poorly: 2 lbs of food, per person" << endl;
 cout << "(2)Moderately: 3 lbs of food, per person" << endl;
 cout << "(3)Well: 5 lbs of food, per person" << endl;
 cin >> x;
 if(x == 1)
 {
 on_cart.SetFood(-10);  //subtract food eaten

 }
 else if(x == 2)
 {
 on_cart.SetFood(-15);  //subtract food eaten
 }
 else if(x == 3)
 {
 on_cart.SetFood(-25);
 }

 if(on_cart.GetFood() > 1000)   //make sure we cant have more than 1000 pounds of food
 {
 cout << "You had a succefull hunt. Unfortunately your cart can't carry more than a 1000 pounds of food." << endl;
 int dog;
 dog = 1000 - on_cart.GetFood();
 on_cart.SetFood(dog);
 }

 }
 }
 else if(nim == 4)  //quit
 {
 return 1;
 }
 else if(nim == 2)
 {
     on_cart.SetFood(-210); //subtract food eaten after continuing
 break;
 }

 nim++;
}
//status update
cout << "--------------------------------------CURRENT STATUS------------------------------------------------------------" << endl;
cout << "current date: 1847-10-03 " << "miles traveled: 1863 " << "to Oregon City: 177 " << "food: " << on_cart.GetFood() << " " << "bullets: " << on_cart.GetAmmo() << " " << "Cash: " << on_cart.GetMoney() << endl;
if(on_cart.GetFood() <= 0)
{
    return 1;
}


cout << "Nice job. You won" << endl;    //winning statement

string FirstThing = "Congratulation, ";
string SecondThing = ", you have made it to Oregon City in time. Enjoy you life here.";

Certificate award = Certificate(FirstThing, SecondThing);   //making object for certificate

ofstream MyFile;
MyFile.open("Certificate.txt");
MyFile << award.GetFirstPart() << main_player << award.GetSecondPart() << endl; //printing certificate
MyFile.close();




return 0;
}
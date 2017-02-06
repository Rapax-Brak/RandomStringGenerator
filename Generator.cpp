#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

string one;
string two;
string three;
string four;

void run()   {
string textArray[4] = {one, two, three, four}; 
int RandIndex = rand() % 4; //generates a random number between 0 and 3
cout << textArray[RandIndex];
}

int main()  {
srand ( time(NULL) ); //initialize the random seed

cout << "Enter a string/word" << endl;
cout <<":";
cin >> one;
cout << "\nEnter a string/word" << endl;
cout <<":";
cin >> two;
cout << "\nEnter a string/word" << endl;
cout <<":";
cin >> three;
cout << "\nEnter a string/word" << endl;
cout <<":";
cin >> four;
run();
}

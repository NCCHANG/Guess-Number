#include <iostream>
#include <cmath>
#include <limits>
#include <stdlib.h>
#include <time.h>

using namespace std;

void nb1(){
    string result;
    int guessnum;
    int cnumber;
    int guessattempt = 0;
    int maxattempt = 3;
    srand (time(NULL));
    cnumber = rand() % 10 + 1;
    while (guessattempt != maxattempt && guessnum != cnumber){
        cout << "Number: ";
        cin >> guessnum;
        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "Please enter an integer!"<< endl;
        }else if(guessnum == cnumber){
            cout <<"You Won!";
        }else if(guessnum > cnumber){
            cout << "It's BIGGER than what I think! Try again ;)"<<endl;
            guessattempt++;
        }else if(guessnum < cnumber){
            cout << "It's SMALLER than what I think! Try again ;)"<<endl;
            guessattempt++;
        }
    }
    if(guessattempt == maxattempt){
        cout << "I was thinking "<<cnumber<<" !";
    }
}

int main ()
{ 
    nb1();
    return 0;
}

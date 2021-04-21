#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

void nb1(){
    string result;
    int guessnum;
    int cnumber;
    cnumber = 69;
    while (guessnum != cnumber){
        cout << "Number: ";
        cin >> guessnum;
        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "Hai Gan Luan Luan Da Ah!"<< endl;
        }else if(guessnum == cnumber){
            cout <<"You Won!";
        }else if(guessnum != cnumber){
            cout << "Nope,try again :)"<<endl;
        }else {
            cout << "Invalid";
        }
    }
}

int main ()
{ 
    nb1();
    return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    srand(time(0));
    int rando = rand();
    srand(rando);

    int grade = rand() % 9;

    cout << "Press Enter 3 times to reveal your future.";

    for(int i = 1 ; i <= 3 ; i++){
        cin.get();
    }

    switch(grade){
        case 0:
            cout << "You will get A in this 261102.";
            break;
        case 1:
            cout << "You will get B+ in this 261102.";
            break;
        case 2:
            cout << "You will get B in this 261102.";
            break;
        case 3:
            cout << "You will get C+ in this 261102.";
            break;
        case 4:
            cout << "You will get C in this 261102.";
            break;
        case 5:
            cout << "You will get D+ in this 261102.";
            break;
        case 6:
            cout << "You will get D in this 261102.";
            break;
        case 7:
            cout << "You will get F in this 261102.";
            break;
        case 8:
            cout << "You will get W in this 261102.";
            break;
    }

}
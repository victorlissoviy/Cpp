#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int main(){
    srand(time(NULL));
    int num = rand() % 101;
    int i = num;
    int tryes = 0;
    do{
        tryes += 1;
        cout << "Enter num:";
        try{
            cin >> i;
        }catch(exception){
            cout << "Goodbye" << endl;
            break;
        }
        if(i < 0 || i > 100 || cin.fail()){
            cout << "Goodbye" << endl;
            break;
        }
        if(i < num){
            cout << "(more) ";
        }else if(i > num){
            cout << "(less) ";
        }else{
            cout << "Bingo!!!\nYou tryes: " << tryes << endl;
            break;
        }
    }while(true);

    return 0;
}
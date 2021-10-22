#include <iostream>

using namespace std;

int main(){
    int num;
    cout << "Enter num:";
    cin >> num;

    if(num >= 0 && num <= 14){
        cout << "interval 0-14" << endl;
    }else if (num >= 15 && num <= 35){
        cout << "interval 15-35" << endl;
    }else if (num >= 36 && num <= 50){
        cout << "interval 36-50" << endl;
    }else if (num >= 51 && num <= 100){
        cout << "interval 51-100" << endl;
    }else{
        cout << "num not in interval" << endl;
    }    

    return 0;
}
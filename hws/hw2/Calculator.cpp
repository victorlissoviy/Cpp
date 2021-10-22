#include <iostream>

using namespace std;

int main(){
    int operand1;
    int operand2;

    cout << "Enter num1:";
    cin >> operand1;
    cout << "Enter num2:";
    cin >> operand2;

    char choose;
    cout << "Choose work (+,-,*,/):";
    try{
        cin >> choose;
    }catch(exception e){
        cout << e.what() << endl;
        return 1;
    }

    switch (choose)
    {
    case '+':{
        cout << operand1 + operand2 << endl;
        break;
    }
    case '-':{
        cout << operand1 - operand2 << endl;
        break;
    }
    case '*':{
        cout << operand1 * operand2 << endl;
        break;
    }
    case '/':{
        if(operand2 != 0){
            cout << operand1 / operand2 << endl;
        }else{
            cout << "num2 is 0" << endl;
        }
        break;
    }
    
    default:
        break;
    }
    

    return 0;
}
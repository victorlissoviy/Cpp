#include <iostream>

using namespace std;

int main(){
    string text;
    cin >> text;
    int num = stoi(text);
    int a = num / 100;
    num %= 100;
    int b = num / 10;
    int c = num % 10;

    int temp = 0;
    if(a != 0){
        if(b != 0){
            if(c != 0){
                if(a < b && a < c){
                    temp = a * 100;
                    if(b < c){
                        temp += b * 10 + c;
                    }else{
                        temp += c * 10 + b;
                    }
                }else{
                    if(b < c){
                        temp = b * 100;
                        if(a < c){
                            temp += a * 10 + c;
                        }else{
                            temp += c * 10 + b;
                        }
                    }else{
                        temp = c * 100;
                        if(a < b){
                            temp += a * 10 + b;
                        }else{
                            temp += b * 10 + a;
                        }
                    }
                }
            }else{
                if(a < b){
                    temp = a * 100 + b;
                }else{
                    temp = b * 100 + a;
                }
            }
        }else{
            if(c != 0){
                if(a < c){
                    temp = a * 100 + c;
                }else{
                    temp = c * 100 + a;
                }
            }else{
                temp = a * 100;
            }
        }
    }else{
        if(b != 0){
            if(c != 0){
                if(b < c){
                    temp = b * 100 + c;
                }else{
                    temp = c * 100 + b;
                }
            }else{
                temp = b * 100;
            }
        }else{
            temp = c * 100;
        }
    }

    cout << temp << endl;

    return 0;
}
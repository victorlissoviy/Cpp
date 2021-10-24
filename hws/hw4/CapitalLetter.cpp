#include <iostream>

using  namespace std;

int main(){
    string text = "";
    cout << "Enter text: ";
    getline(cin, text);

    cout << (char)toupper(text[0]);
    for(int i = 1; i < text.size(); i++){
        if(text[i] != ' '){
            cout << text[i];
        }else{
            i += 1;
            cout << " " << (char)toupper(text[i]);
        }
    }
    cout << endl;
    return 0;
}
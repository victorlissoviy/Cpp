#include <iostream>

using  namespace std;

int countChar(string text, char sym){
    int sum = 0;
    int i = text.find(sym);
    while(i != -1){
        sum += 1;
        text = text.substr(i + 1);
        i = text.find(sym);
    }
    return sum;
}

int main(){
    string text1;
    string text2;
    getline(cin, text1);
    getline(cin, text2);
    bool isAnagram = true;
    for(int i = 0; i < text1.size() && isAnagram;i++){
        int temp = tolower(text1[i]);
        if(temp >= (int)'a' && temp <= (int)'z'){
            if(countChar(text1, (char)temp) != countChar(text2, (char)temp)){
                isAnagram = false;
                break;
            }
        }
    }
    if(isAnagram){
        cout << "is anagram" << endl;
    }else{
        cout << "is not anagram" << endl;
    }
    return 0;
}
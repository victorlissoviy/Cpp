#include <iostream>

using namespace std;

int main(){
    string line;
    getline(cin, line);
    int n = stoi(line);
    int* mas = new int[n];
    getline(cin, line);
    int i = line.find(" ");
    int j = 0;
    while (i != -1)
    {
        mas[j] = stoi(line.substr(0, i));
        line = line.substr(i + 1);
        i = line.find(" ");
        j += 1;
    }
    mas[j] = stoi(line);
    getline(cin, line);
    int num = stoi(line);
    int min = abs(mas[0] - num);
    i = mas[0];
    j = 1;
    for(;j < n; j++){
        if(min > abs(mas[j] - num)){
            min = abs(mas[j] - num);
            i = mas[j];
        }
    }
    delete mas;
    cout << i << endl;
    return 0;
}
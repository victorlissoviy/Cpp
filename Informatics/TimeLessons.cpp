#include <iostream>

using  namespace std;

int main(){
    int n = 0;
    cin >> n;
    int time = 9 * 60 + 45 * n + 20 * (n / 2) + 15 * (n % 2 - 1);
        
    cout << time / 60 << " " << time % 60 << endl;
    return 0;
}
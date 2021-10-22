#include <iostream>

using namespace std;

int main(){
    const int n = 10;
    int mas[n];
    int sum = 0;
    int nums  = 0;
    for(int i = 0; i < n; i++){
        cout << "mas [" << i + 1 << "]:";
        cin >> mas[i];
        sum += mas[i];
        if(mas[i] > 0){
            nums += 1;
        }
    }
    cout << "Mas: ";
    for(int i = 0; i < n; i++){
        cout << mas[i] << " ";
    }
    cout << endl << "Sum: " << sum << endl;
    cout << "Nums of positive numbers: " << nums << endl;
    int N = n;
    do{
        int newn = 0;    
        for(int i = 1; i < N; i++){
            if(mas[i] < mas[i - 1]){
                int temp = mas[i];
                mas[i] = mas[i - 1];
                mas[i - 1] = temp;
                newn = i;
            }
        }
        N = newn;
    }while(N > 0);
    
    cout << "New mas: ";
    for(int i = 0; i < n; i++){
        cout << mas[i] << " ";
    }
    cout << endl;
    return 0;
}
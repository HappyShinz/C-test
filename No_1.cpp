#include <iostream>
using namespace std;

int main(){
    int row = 0;
    int num = 1;

    cout << "Enter the number of the row : ";
    cin >> row;

    for (int i=0; i<=row; i++){
        for (int j=0; j<=i; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}
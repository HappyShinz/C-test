#include <iostream>
using namespace std;

int main (){

    int size = 0;
    // asking the size of array
    cout << "Enter the size of array : " ;
    cin >> size;

    int ary[size];

    // asking the element for array
    cout << "Enter the element /must be number : " << endl;
    for ( int i=0; i<=size; i++){
        cin >> ary[i];
    }

    int max_num = ary[0];
    int min_num = ary[0];

    for ( int i=0; i<=size; i++){
        if (ary[i] > max_num){
            max_num = ary[i];
        }
        if (ary[i] < min_num){
            min_num = ary[i];
        }
    }

    cout << "Maximum Number : " << max_num << endl;
    cout << "Minimun Number : " << min_num << endl;


}
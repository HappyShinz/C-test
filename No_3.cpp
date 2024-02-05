#include <iostream>
using namespace std;

int main (){

    enum class Seasons {
        Summer, Rainy, Winter
     };

     cout << "Choose a season from Myanmar : " << endl;
     cout << "1. Summer \n2. Rainy \n3. Winter \n";
     
     int choice;
     cout << "Enter the number of the season that you want to choose : ";
     cin >> choice;

     switch (choice)
     {
     case 1:
        cout << "Summer (March, April, May, June)" << endl;
        break;

     case 2:
        cout << "Rainy (July, August, September, October)" << endl;
        break;

     case 3:
        cout << "Winter (November, December, January, February)" << endl;
        break;
     
     default:
        cout << "Invalid input number! Please enter 1 or 2 or 3!" << endl;
        break;
     }
}
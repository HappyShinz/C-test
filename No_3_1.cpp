#include <iostream>
using namespace std;

int main (){

    enum class Seasons {
        Tagu, 
        Kason,
        Nayon,
        Waso,
        Wagaung,
        Tawthalin,
        Thadingyut,
        Tazaungmon,
        Nadaw,
        Pyatho,
        Tabodwe,
        Tabaung
     };

     cout << "Choose a season from Myanmar : " << endl;
     cout << "1. Tagu\n2. Kason\n3. Nayon\n4. Waso\n5. Wagaung\n6. Tawthalin\n7. Thadingyut\n8. Tazaungmon\n9. Nadaw\n10. Pyatho\n11. Tabodwe\n12. Tabaung\n";
     
     int choice;
     cout << "Enter the number of the season that you want to choose : ";
     cin >> choice;

     switch (choice)
     {
     case 1:
        cout << "Tagu (March - April)" << endl;
        break;

     case 2:
        cout << "Kason (April - May)" << endl;
        break;

     case 3:
        cout << "Nayon (May - June)" << endl;
        break;
    
     case 4:
        cout << "Waso (June - July)" << endl;
        break;
    
     case 5:
        cout << "Wagaung (July - August)" << endl;
        break;

     case 6:
        cout << "Tawthalin (August - September)" << endl;
        break;

     case 7:
        cout << "Thadingyut (September - October)" << endl;
        break;

     case 8:
        cout << "Tazaungmon (October - November)" << endl;
        break;

     case 9:
        cout << "Nadaw (November - December)" << endl;
        break;

     case 10:
        cout << "Pyatho (December - January)" << endl;
        break;
    
     case 11:
        cout << "Tabodwe (January - February)" << endl;
        break;
    
     case 12:
        cout << "Tabaung (February - March)" << endl;
        break;
     
     default:
        cout << "Invalid input number! Please enter between 1 and 12!" << endl;
        break;
     }
}
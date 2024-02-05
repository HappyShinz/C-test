#include <iostream>

using namespace std;

    // Function call by value to calculate triangle area
    float cal_Area(float base, float height) {
        return 0.5 * base * height;
    }

    // Function call by reference to calculate triangle area
    void cal_Area(float& base, float& height, float& result) {
        result = 0.5 * base * height;
    }

int main() {
    float base, height, area_byValue, area_byReference;

    // Input values for base and height of triangle
    cout << "Enter the base of the triangle with cm: ";
    cin >> base;

    cout << "Enter the height of the triangle with cm: ";
    cin >> height;
    cout << endl;

    // Calculate area using call by value
    area_byValue = cal_Area(base, height);
    cout << "Calculation of the triangle with call by value" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Base of the triangle : " << base << "cm" << endl;
    cout << "Height of the triangle : " << height << "cm" <<endl;
    cout << "Area of the triangle: " << area_byValue << "square cm" << endl;
    
    cout << endl;
    
    // Calculate area using call by reference
    cal_Area(base, height, area_byReference);
    cout << "Calculation of the triangle with call by reference" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "Base of the triangle : " << base << "cm" << endl;
    cout << "Height of the triangle : " << height << "cm" <<endl;
    cout << "Area of the triangle: " << area_byReference << "square cm" << endl;

    return 0;
}

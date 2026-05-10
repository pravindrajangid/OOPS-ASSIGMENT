include <iostream>
using namespace std;

class SimpleInterest
{
public:
    // Function with default arguments
    float calculate(float p, float r = 5, float t = 2)
    {
        return (p * r * t) / 100;
    }
};

int main()
{
    SimpleInterest obj;

    // Using default rate and time
    cout << "Simple Interest = "
         << obj.calculate(1000) << endl;

    // Providing rate only
    cout << "Simple Interest = "
         << obj.calculate(1000, 7) << endl;

    // Providing rate and time
    cout << "Simple Interest = "
         << obj.calculate(1000, 7, 4) << endl;

    return 0;
}
Output :
 
GitHub :
https://github.com/Abhaysingla637/OOPS_Assignment/blob/main/2.Def_Arg.cpp
Program 3. WAP to demonstrate function overloading for area, sum, and volume calculations.
//Author- Abhay Singla/241461
#include <iostream>
using namespace std;

class Calculation
{
public:
    // Sum of two integers
    int calculate(int a, int b)
    {
        cout << "Function for SUM is called" << endl;
        return a + b;
    }

    // Area of rectangle
    float calculate(float length, float breadth)
    {
        cout << "Function for AREA is called" << endl;
        return length * breadth;
    }

    // Volume of cube
    int calculate(int side)
    {
        cout << "Function for VOLUME is called" << endl;
        return side * side * side;
    }
};

int main()
{
    Calculation obj;

    // Sum
    int sum = obj.calculate(10, 20);
    cout << "Sum = " << sum << endl << endl;

    // Area
    float area = obj.calculate(5.5f, 4.0f);
    cout << "Area of Rectangle = " << area << endl << endl;

    // Volume
    int volume = obj.calculate(3);
    cout << "Volume of Cube = " << volume << endl;

    return 0;
}

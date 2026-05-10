include <iostream>
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

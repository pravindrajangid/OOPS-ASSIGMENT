#include <iostream>
using namespace std;

// Engine Class
class Engine
{
    int engineNumber;
    string fuelType;

public:
    void getEngineDetails()
    {
        cout << "Enter Engine Number: ";
        cin >> engineNumber;

        cout << "Enter Fuel Type: ";
        cin >> fuelType;
    }

    void showEngineDetails()
    {
        cout << "Engine Number: " << engineNumber << endl;
        cout << "Fuel Type: " << fuelType << endl;
    }
};

// Car Class contains Engine object
class Car
{
    string carName;
    int modelYear;

    Engine e;   // Containership

public:
    void getCarDetails()
    {
        cout << "Enter Car Name: ";
        cin >> carName;

        cout << "Enter Model Year: ";
        cin >> modelYear;

        // Calling Engine class function
        e.getEngineDetails();
    }

    void showCarDetails()
    {
        cout << "\n----- Car Details -----" << endl;

        cout << "Car Name: " << carName << endl;
        cout << "Model Year: " << modelYear << endl;

        // Showing Engine details
        e.showEngineDetails();
    }
};

int main()
{
    Car c;

    c.getCarDetails();
    c.showCarDetails();

    return 0;
}

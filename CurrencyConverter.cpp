#include <iostream>
using namespace std;

class CurrencyConverter
{
    float amount, result;

public:
    void convert()
    {
        int choice;

        do
        {
            cout << "\n===== Currency Converter =====" << endl;
            cout << "1. INR to USD" << endl;
            cout << "2. USD to INR" << endl;
            cout << "3. INR to EURO" << endl;
            cout << "4. EURO to INR" << endl;
            cout << "5. Exit" << endl;

            cout << "Enter Your Choice: ";
            cin >> choice;

            switch(choice)
            {
                case 1:
                    cout << "Enter Amount in INR: ";
                    cin >> amount;

                    result = amount / 83;   // Example conversion rate
                    cout << "Converted Amount in USD = "
                         << result << endl;
                    break;

                case 2:
                    cout << "Enter Amount in USD: ";
                    cin >> amount;

                    result = amount * 83;
                    cout << "Converted Amount in INR = "
                         << result << endl;
                    break;

                case 3:
                    cout << "Enter Amount in INR: ";
                    cin >> amount;

                    result = amount / 90;
                    cout << "Converted Amount in EURO = "
                         << result << endl;
                    break;

                case 4:
                    cout << "Enter Amount in EURO: ";
                    cin >> amount;

                    result = amount * 90;
                    cout << "Converted Amount in INR = "
                         << result << endl;
                    break;

                case 5:
                    cout << "Exiting Program..." << endl;
                    break;

                default:
                    cout << "Invalid Choice!" << endl;
            }

        } while(choice != 5);
    }
};

int main()
{
    CurrencyConverter obj;

    obj.convert();

    return 0;
}

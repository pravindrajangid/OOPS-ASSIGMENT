include <iostream>
using namespace std;

class Number
{
    int n;

public:
    // Constructor
    Number(int x = 0)
    {
        n = x;
    }

    // Overloading + operator
    Number operator +(Number obj)
    {
        Number temp;
        temp.n = n + obj.n;
        return temp;
    }

    // Overloading - operator
    Number operator -(Number obj)
    {
        Number temp;
        temp.n = n - obj.n;
        return temp;
    }

    // Overloading ++ operator
    Number operator ++()
    {
        ++n;
        return *this;
    }

    // Overloading == operator
    bool operator ==(Number obj)
    {
        return (n == obj.n);
    }

    // Overloading << operator
    friend ostream& operator <<(ostream &out, Number obj);

};

// Definition of << operator
ostream& operator <<(ostream &out, Number obj)
{
    out << obj.n;
    return out;
}

int main()
{
    Number n1(10), n2(5), n3;

    // + operator
    n3 = n1 + n2;
    cout << "Addition: " << n3 << endl;

    // - operator
    n3 = n1 - n2;
    cout << "Subtraction: " << n3 << endl;

    // ++ operator
    ++n1;
    cout << "After Increment: " << n1 << endl;

    // == operator
    if (n1 == n2)
        cout << "Both numbers are Equal" << endl;
    else
        cout << "Both numbers are Not Equal" << endl;

    return 0;
}

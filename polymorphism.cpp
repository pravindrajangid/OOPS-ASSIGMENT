#include <iostream>
using namespace std;

// Base Class
class Album
{
public:
    // Virtual function for runtime polymorphism
    virtual void showDetails()
    {
        cout << "Music Album in Store" << endl;
    }
};

// Derived Class 1
class PopAlbum : public Album
{
public:
    // Function overriding
    void showDetails() override
    {
        cout << "Pop Album: Midnight Beats" << endl;
        cout << "Artist: Alex Star" << endl;
        cout << "Price: Rs. 499" << endl;
    }
};

// Derived Class 2
class RockAlbum : public Album
{
public:
    // Function overriding
    void showDetails() override
    {
        cout << "Rock Album: Thunder Road" << endl;
        cout << "Band: Fire Waves" << endl;
        cout << "Price: Rs. 699" << endl;
    }
};

int main()
{
    Album *ptr;   // Base class pointer

    PopAlbum p;
    RockAlbum r;

    cout << "----- Pop Album Record -----" << endl;
    ptr = &p;
    ptr->showDetails();   // Calls PopAlbum function

    cout << "\n----- Rock Album Record -----" << endl;
    ptr = &r;
    ptr->showDetails();   // Calls RockAlbum function

    return 0;
}

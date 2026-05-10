#include <iostream>
using namespace std;

class Test{
    private:
        int code;
        static int count;  // static member variable: iniatilized to zero when first object of its class is created
    public:
        void setcode(){
            code = ++count;
        }
        void showcode(){
            cout << "object number: " << code << endl;
        }
        static void showcount(){
            cout << "count: "<< count << endl;
        }
};

int Test :: count;

//...........Main Program...............
int main(){
    Test t1, t2;

    t1.setcode();
    t2.setcode();

    Test :: showcount();

    Test t3;
    t3.setcode();

    Test :: showcount();

    t1.showcode();
    t2.showcode();
    t3.showcode();

    return 0;
}

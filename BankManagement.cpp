#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

class Bank{
    private:
        int total;
        string id;
        struct person{
            string name, ID, address;
            int contact, cash;
        } person[100];
    public:
        Bank(){
            total = 0;
        }
        void choice();
        void perData();
        void show();
        void update();
        void search();
        void transaction();
        void del();
};

//=========================================================================
void Bank :: choice(){
    char ch;
    bool running = true;
    while(running){
        cout << "\n\nPress..!!" << endl;
        cout << "1. Create New Account" << endl;
        cout << "2. View Customer List" << endl;
        cout << "3. Update Information of Existing Account" << endl;
        cout << "4. Check the Details of Existing account" << endl;
        cout << "5. For Transactions" << endl;
        cout << "6. Remove Existing Account" << endl;
        cout << "7. Exit" << endl;

        ch = getch();

        switch(ch){
            case '1' :
                Bank :: perData();
                break;
            case '2' :
                Bank :: show();
                break;
            case '3' :
                Bank :: update();
                break;
            case '4' :
                Bank :: search();
                break;
            case '5' :
                Bank :: transaction();
                break;
            case '6' :
                Bank :: del();
                break;
            case '7' : 
                running = false;
                break;
            default : cout << "Error in input; try again\n";
        }
    }
}

void Bank :: perData(){
    cout << "Enter data of person" << total+1 << endl;
    cout << "Enter Name: ";
    cin >> person[total].name;
    cout << "ID: ";
    cin >> person[total].ID;
    cout << "Address: ";
    cin >> person[total].address;
    cout << "Contact: ";
    cin >> person[total].contact;
    cout << "Total Cash: ";
    cin >> person[total].cash;

    total++;
}

void Bank :: show(){
    for(int i = 0; i < total; i++){
        cout << "Data of person " << i+1 << endl;
        cout << "Name: " << person[i].name << endl;
        cout << "ID: " << person[i].ID << endl;
        cout << "Address: " << person[i].address << endl;
        cout << "Contact: " << person[i].contact << endl;
        cout << "Cash: " << person[i].cash << endl;
    }
}

void Bank :: update(){
    cout << "Enter ID of data to be updated" << endl;
    cin >> id;

    for(int i = 0; i < total; i++){
        if(id == person[i].ID){  // if starts
            cout << "Previous Data:" << endl;
            cout << "Data of person " << i+1 << endl;
            cout << "Name: " << person[i].name << endl;
            cout << "ID: " << person[i].ID << endl;
            cout << "Address: " << person[i].address << endl;
            cout << "Contact: " << person[i].contact << endl;
            cout << "Cash: " << person[i].cash << endl;

            cout << "\nEnter new data" << endl;
            cout << "Enter Name: ";
            cin >> person[i].name;
            cout << "ID: ";
            cin >> person[i].ID;
            cout << "Address: ";
            cin >> person[i].address;
            cout << "Contact: ";
            cin >> person[i].contact;
            cout << "Total Cash: ";
            cin >> person[i].cash;
            break;
        } // if ends
        if(i == total-1){
            cout << "No such record found" << endl;
        }
    }
}

void Bank :: search(){
    cout << "Enter ID of data to be searched" << endl;
    cin >> id;
    
    for(int i =0; i < total; i++){
        if(id == person[i].ID){
            cout << "Name: " << person[i].name << endl;
            cout << "ID: " << person[i].ID << endl;
            cout << "Address: " << person[i].address << endl;
            cout << "Contact: " << person[i].contact << endl;
            cout << "Cash: " << person[i].cash << endl;
            break;
        }
        if(i == total-1){
            cout << "No such record found" << endl;
        }
    }
}
void Bank :: transaction(){
    int cash;
    char ch;
    cout << "Enter ID for transaction" << endl;
    cin >> id;

    for(int i = 0; i < total; i++){
        if(id == person[i].ID){  // if starts
            cout << "Name: " << person[i].name << endl;
            cout << "Address: " << person[i].address << endl;
            cout << "Contact: " << person[i].contact << endl;
            cout << "\nExisting Cash: " << person[i].cash << endl;
            cout << "Press 1 to deposit" << endl;
            cout << "Press 2 to withdraw" << endl;

            ch = getch();

            switch(ch){
                case '1':
                    cout << "Enter amount: "<< endl;
                    cin >> cash;
                    person[i].cash+=cash;
                    cout << "Current Balance: " << person[i].cash << endl;
                    break;
                case '2':
                    back:
                    cout << "Enter amount: "<< endl;
                    cin >> cash;
                    if(cash > person[i].cash){
                        cout << "Insufficient Balance: " << person[i].cash << endl;
                        Sleep(3000);
                        goto back;
                    }   
                    else{
                        person[i].cash-=cash;
                        cout << "Current Balance: " << person[i].cash << endl;
                    }    
                    break;
                default:
                    cout << "Invalid Input!!" << endl;
                    break;
            }
            break;
        }  // if ends
        if(i == total-1){
            cout << "No such record found" << endl;
        }
    }
}
void Bank :: del(){
    char ch;
    cout << "Press 1 to remove specific record" << endl;
    cout << "Press 2 to remove full record" << endl;
    ch = getch();
    
    switch(ch){
        case '1':
            cout << "Enter ID of record" << endl;
            cin >> id; 
            for(int i = 0;i < total; i++){
                if(id == person[i].ID){
                    for(int j = i; j < total; j++){
                        person[j].name = person[j+1].name;
                        person[j].ID = person[j+1].ID;
                        person[j].address = person[j+1].address; 
                        person[j].contact = person[j+1].contact;
                        person[j].cash = person[j+1].cash;    
                        total--;
                        break;    
                    }
}
                if(i == total-1){
                    cout << "No such record found" << endl;
                }
            }
            break;
        case '2':
            total = 0;
            cout << "All records are deleted" << endl;
            break;
    }
}
//....................Main Program....................
int main(){
    Bank b;
    b.choice();

    return 0;
}

  

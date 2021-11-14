#include <iostream>
#include <string>
#include "pill.h"

using namespace std;

int main(){
    string com;

    Prescription pre;

    cout << "Do you want to add Prescription?\n" << endl;

    cin >> com;

    if(com == "yes")
    {
        int med;
        cout << "How many medication to add? " << endl;
        cin >> med;
        
        for(int i = 0; i< med; i++){
            string name;
            int r, nb;
            cout << "Pill name?" << endl;
            cin >> name;
            cout << "Rack number inserted?" << endl;
            cin >> r;
            cout << "Number of pills added?" << endl;
            cin >> nb;

            pre.add_pill(name, r, nb);
        }

        
        pre.print_prescription();

    }else if (com == "no")
    {
        cout << "ok" <<endl;
    }
    

    return 0;
}

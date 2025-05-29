#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>

using namespace std;

int l, b; //Live rounds, blank rounds

ifstream f("options.txt");

int input_rounds() {
    cout<<"Enter the number of live rounds: ";
    cin>>l;
    cout<<"Enter the number of blank rounds: ";
    cin>>b;
    if (l && b) return 1;
    else return 0;
}

int main() {
    system("color a");
    cout<<"----- BuckshotCounter -----"<<endl<<endl;
    char s[100];
    char choice;
    if (input_rounds()) {
        do {
            system("cls");
            cout<<"The shotgun currently has: "<<l<<" live rounds and "<<b<<" blank rounds."<<endl<<endl;
            while (f.getline(s, 100)) {
                cout<<s<<endl;
            }
            cout<<endl;
            cout<<"Choose your option: ";
            cin>>choice;
            switch (choice) {
                case 'L':
                case 'l':
                    l--;
                    break;
                case 'B':
                case 'b':
                    b--;
                    break;
                case 'E':
                case 'e':
                    return 0;
            }
        }
        while(choice != 'E');
    }
    return 0;
}
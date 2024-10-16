#include <iostream>
using namespace std;

int main() {
    
    int tinggi;
    cout << "masukkan tinggi segitiga : ";
    cin >> tinggi;
    
    cout << endl;
    cout << "Segitiga Siku-siku dengan tinggi " << tinggi << endl;
    
    for(int a=1; a <= tinggi; a++) {
        for(int b=1; b <= a; b++) {
            cout << "*";
        }
        cout << endl;
    }
    
    cin.get();
    cin.get();
}

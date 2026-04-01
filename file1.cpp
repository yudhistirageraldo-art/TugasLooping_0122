#include <iostream>
using namespace std;

//variable global
int n, pilihan;

//prosedur input data
void inputAngka() {
    cout << "masukkan bilangan: ";
    cin >> n;
}

// function cek bilangan prima
bool isPrima(int x){
    if (x <= 1){
        return false;
    }

    int i = 2;
    while (i < x) {
        if ( % i == 0){
            return false;
        }
        
    }
}
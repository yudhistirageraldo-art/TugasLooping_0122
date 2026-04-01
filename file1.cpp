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
        i++;
    }
    return true;
}

// Function cek bilangan fibonacci
bool isFIBONACCI(int x) {
    int a = 0, b = 1, c;

     while (a <= x) {
        if (a == x) {
            return true;
        }
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}

// Prosedur tampil hasil
void tampilHasilPrima() {
    if (isPrima(n)) {
             cout << n << " adalah bilangan prima." << endl;
    } else {

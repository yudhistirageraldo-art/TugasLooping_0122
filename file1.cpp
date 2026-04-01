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
 cout << n << " bukan bilangan prima." << endl;
    }
}

void tampilHasilFibonacci() {
    if (isFibonacci(n)) {
         cout << n << " termasuk bilangan Fibonacci." << endl;
    } else {
          cout << n << " bukan bilangan Fibonacci." << endl;
    }
}

// function menu
void tampilMenu() {
    cout << "\n=== MENU ===" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih menu: ";
    cin >> pilihan;
}

// Main program
int main() {

    while (true) {
        tampilMenu();

        switch (pilihan) {
        }
    }
}
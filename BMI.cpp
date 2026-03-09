#include <iostream>
using namespace std;

int main(){
    return 0;
}
void inputData(float &berat, float &tinggi){
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}
float hitungBMI(float berat, float tinggi){
    return berat / (tinggi * tinggi);
}
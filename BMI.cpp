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
string statusBMI(float bmi){
    if(bmi < 18.5)
        return "Berat Badan Kurang";
    else if(bmi < 25)
        return "Berat Badan Normal";
    else if(bmi < 30)
        return "Berat Badan Kelebihan";
    else
        return "Obesitas";
}
int main() {
    float berat, tinggi, bmi;
    
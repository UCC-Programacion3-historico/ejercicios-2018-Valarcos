#include <iostream>
#include "Calculadora.h"
#include <vector>

using namespace std;

int main() {
    Calculadora<int> miCalc;
    vector<int> pp;

    pp.push_back(3);


    cout << miCalc.dividir(10, 3)<< endl;
    cout << "Ejercicio 00/02\n" << endl;
    return 0;
}
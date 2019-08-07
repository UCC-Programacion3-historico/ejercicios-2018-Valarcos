#include <iostream>
#include "Calculadora.h"
#include <vector>

using namespace std;

int main() {
    Calculadora<int, float> miCalc;

    cout << miCalc.divi(10, 3);
    cout << "Ejercicio 00/02\n" << endl;
    return 0;
}
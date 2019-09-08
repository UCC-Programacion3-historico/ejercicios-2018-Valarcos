#include <iostream>
using namespace std;
unsigned int potencia(unsigned int base, unsigned int exp) {
    int control=0;
    if (exp == 0)
        return 1;
    else
        control=base * potencia(base,                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      exp - 1);

        cout << exp<< " - "<< base <<" - "<<control<< endl;
        return control;
}

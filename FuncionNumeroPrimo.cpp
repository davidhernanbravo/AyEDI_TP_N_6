// Realizar un programa que permita saber si un número es primo o no.

#include <iostream>
using namespace std;

bool esPrimo(int numero);

int main()
    {
        int numero;

        numero = 0;

        cout << "*****************" << endl;
        cout << "PRIMO... SOS VOS?" << endl;
        cout << "*****************" << endl;
        cout <<  endl;

        cout << "Ingresa un numero: ";
        cin >> numero;
        cout << endl;

        cout << "BEARBEITUNG...BITTE WARTEN." << endl;
        cout << endl;

        if(esPrimo(numero))
            {
                cout << "******************************" << endl;
                cout << "El numero " << numero << " es PRIMO" << endl;
                cout << "HOLA PRIMO!!!" << endl;
                cout << "******************************" << endl;
                cout << endl;

            } else
                {
                    cout << "***************************" << endl;
                    cout << "El numero " << numero << " NO es PRIMO" << endl;
                    cout << "SORRY... WRONG FAMILY..." << endl;
                    cout << "***************************" << endl;
                    cout << endl;
                }
            
        return 0;
    }

    bool esPrimo(int numero)
        {
            if(numero <= 1)
                {
                    return false;
                }

                int a = 2;

                    while(a * a <= numero)
                        {
                            if(numero % a == 0)
                                {
                                    return false;
                                }

                            a++;
                        }

            return true;
        }
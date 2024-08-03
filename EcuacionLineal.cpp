/* Nos piden un programa que resuelva la siguiente función lineal: 
                        y = 2x - 1
   con salida x consola, deber pedir 4 valores para x dando le valor de y por consola. */

#include <iostream>
using namespace std;

double ecuacionLineal(double x);

int main()
    {
        double valor1, valor2, valor3, valor4;

        cout << "**********************************" << endl;
        cout << "AVERIGUANDO EL VALOR DE Y = 2X - 1" << endl;
        cout << "**********************************" << endl;
        cout << endl;

        cout << "Primer valor de X: ";
        cin >> valor1;
        cout << "Segundo valor de X: ";
        cin >> valor2;
        cout << "Tercer valor de X: ";
        cin >> valor3;
        cout << "Cuarto valor de X: ";
        cin >> valor4;
        cout << endl;

        cout << "EL RESULTADO DE Y PARA EL PRIMER VALOR DE X ES: " << ecuacionLineal(valor1) << endl;
        cout << endl;
        cout << "EL RESULTADO DE Y PARA EL SEGUNDO VALOR DE X ES: " << ecuacionLineal(valor2) << endl;
        cout << endl;
        cout << "EL RESULTADO DE Y PARA EL TERCER VALOR DE X ES: " << ecuacionLineal(valor3) << endl;
        cout << endl;
        cout << "EL RESULTADO DE Y PARA EL CUARTO VALOR DE X ES: " << ecuacionLineal(valor4) << endl;
        cout << endl;

        return 0;
    }

    double ecuacionLineal(double x)
        {
            return (2 * x) + 1;
        }
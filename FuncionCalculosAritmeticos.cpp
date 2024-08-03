// Crear un programa que sume, reste, multiplica y divida.

#include <iostream>
using namespace std;

double suma(double a, double b);
double resta(double a, double b);
double multiplicacion(double a, double b);
double division(double a, double b);

int main()
    {
        int opcion;
        double numero1, numero2;

        opcion = 0;
        numero1 = 0;
        numero2 = 0;

        cout << "***********************" << endl;
        cout << "SUPER CALCULADORA KAZIO" << endl;
        cout << "***********************" << endl;
        cout << endl;

        cout << "Ingresa un numero: ";
        cin >> numero1;
        cout << endl;

        cout << "Ingresa otro numero: ";
        cin >> numero2;
        cout << endl;

        cout << "Elegi la operacion que queres que haga: " << endl;
        cout << "---------------------------------------" << endl;
        cout << endl;
        cout << "1. SUMAR" << endl;
        cout << "2. RESTAR" << endl;
        cout << "3. MULTIPLICAR" << endl;
        cout << "4. DIVIDIR" << endl;
        cout << endl;
        cout << "Y la opcion es... ";
        cin >> opcion;
        cout << endl;

        if(opcion == 1)
            {
                cout << "*********************************************" << endl;
                cout << "El resultado de " << numero1 << " + " << numero2 << " = " << suma(numero1, numero2) << endl;
                cout << "*********************************************" << endl;
                cout << endl;

            } else if(opcion == 2)
                {
                    cout << "*********************************************" << endl;
                    cout << "El resultado de " << numero1 << " - " << numero2 << " = " << resta(numero1, numero2) << endl;
                    cout << "*********************************************" << endl;
                    cout << endl;

                } else if(opcion == 3)
                    {
                        cout << "*********************************************" << endl;
                        cout << "El resultado de " << numero1 << " * " << numero2 << " = " << multiplicacion(numero1, numero2) << endl;
                        cout << "*********************************************" << endl;
                        cout << endl;

                    } else if(opcion == 4)
                        {
                            if(numero2 == 0)
                            {
                                cout << "Error: No se puede dividir por cero." << endl;

                            } else 
                                {
                                    cout << "*********************************************" << endl;
                                    cout << "El resultado de " << numero1 << " / " << numero2 << " = " << division(numero1, numero2) << endl;
                                    cout << "*********************************************" << endl;
                                    cout << endl;
                                }
                        }

        return 0;
    }

    double suma(double a, double b)
        {
            return a + b;
        }

    double resta(double a, double b)
        {
            return a - b;
        }

    double multiplicacion(double a, double b)
        {
            return a * b;
        }

    double division(double a, double b)
        {
            return a / b;
        }
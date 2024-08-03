/* Nos piden un programa que resuelva las siguientes ecuaciones con salida Y 
por consola (asignar valores a x´s , m y b via Cin):

    y = m(x – x1)	           y = mx + b		      y = m2 - m1 / x2 – x1
*/

#include <iostream>
using namespace std;

void mostrarMenu();
double ecuacion1(double m, double x, double x1);
double ecuacion2(double m, double x, double b);
double ecuacion3(double m1, double m2, double x1, double x2);

int main()
    {
        int opcion;
        double valor1, valor2, valor3, valor4;

        mostrarMenu();
        cin >> opcion;
        cout << endl;

             if(opcion == 1)
            {
                cout << "ELEGISTE LA ECUACION Nro 1" << endl;
                cout << "--------------------------" << endl;
                cout << "Ingresa el valor de m: ";
                cin >> valor1;
                cout << "Ingresa el valor de x: ";
                cin >> valor2;
                cout << "Ingresa el valor de x1: ";
                cin >> valor3;
                cout << endl;
                cout << "EL RESULTADO DE Y ES: " << ecuacion1(valor1, valor2, valor3) << endl;

            } else if(opcion == 2)
                {
                    cout << "ELEGISTE LA ECUACION Nro 2" << endl;
                    cout << "--------------------------" << endl;
                    cout << "Ingresa el valor de m: ";
                    cin >> valor1;
                    cout << "Ingresa el valor de x: ";
                    cin >> valor2;
                    cout << "Ingresa el valor de b: ";
                    cin >> valor3;
                    cout << endl;
                    cout << "EL RESULTADO DE Y ES: " << ecuacion2(valor1, valor2, valor3) << endl;

                } else if(opcion == 3)
                    {
                        cout << "ELEGISTE LA ECUACION Nro 3" << endl;
                        cout << "--------------------------" << endl;
                        cout << "Ingresa el valor de m1: ";
                        cin >> valor1;
                        cout << "Ingresa el valor de m2: ";
                        cin >> valor2;
                        cout << "Ingresa el valor de x1: ";
                        cin >> valor3;
                        cout << "Ingresa el valor de x2: ";
                        cin >> valor4;
                        cout << endl;

                        if((valor3 - valor4) == 0)
                            {
                                cout << "NO se puede dividir por 0 ZOQUETE!!!" << endl;

                            } else
                                {
                                    cout << "EL RESULTADO DE Y ES: " << ecuacion3(valor1, valor2, valor3, valor4) << endl;
                                }
                    }  
                    
        cout << endl; 

        return 0;
    }

    void mostrarMenu()
        {
            cout << "***********************************" << endl;
            cout << "ELEGI CUAL ECUACION QUERES RESOLVER" << endl;
            cout << "***********************************" << endl;
            cout << endl;
            cout << "1. Y=m.(x-x1)" << endl;
            cout << "2. Y=m.x+b" << endl;
            cout << "3. Y=(m2-m1)/(x2-x1)" << endl;
            cout << endl;
            cout << "Opcion: ";
        }
    
    double ecuacion1(double m, double x, double x1)
        {
            return m * (x - x1);
        }

    double ecuacion2(double m, double x, double b)
        {
            return (m * x) + b;
        }

    double ecuacion3(double m1, double m2, double x1, double x2)
        {
            return (m2 - m1) / (x2 - x1);    
        }
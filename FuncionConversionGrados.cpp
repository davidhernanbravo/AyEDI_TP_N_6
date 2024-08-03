/* Crear un programa por consola que convierta Grados Centígrados en Fahrenheit y viceversa, 
el programa debe preguntar qué operación desea hacer el usuario.*/

#include <iostream>
using namespace std;

// Declaro las funciones que voy a utilizar.
double centigradosAfahrenheit(double centigrados);
double fahrenheitAcentigrados(double fahrenheit);

int main()
    {
        int opcion;
        double valor;

        opcion = 0;
        valor = 0;

        cout << "************************" << endl;
        cout << "EL VALOR DE TU CALENTURA" << endl;
        cout << "************************" << endl;
        cout << endl;

        cout << "Mini programa conversor de grados Centigrados a Fahrenheit y viceversa." << endl;
        cout << endl;

        cout << "Elegi tu opcion de conversion: " << endl;
        cout << "------------------------------" << endl;
        cout << endl;

        cout << "1.Centigrados a Farenheit" << endl;
        cout << "2.Farenheit a Centigrados" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        cout << endl;

        if(opcion == 1)
            {
                cout << "Ingresa lo caliente que estas en grados Centigrados: ";
                cin >> valor;
                cout << endl;

                cout << "*******************************************************" << endl;
                cout << "El valor equivalente en grados Farenheit es: " << centigradosAfahrenheit(valor) << endl;
                cout << "*******************************************************" << endl;
                cout << endl;
            } else 
                {
                    cout << "Ingresa lo caliente que estas en grados Fahrenheit: ";
                    cin >> valor;
                    cout << endl;

                    cout << "*******************************************************" << endl;
                    cout << "El valor equivalente en grados Centigrados es: " << fahrenheitAcentigrados(valor) << endl;
                    cout << "*******************************************************" << endl;
                    cout << endl;
                }

        return 0;
    }

    double centigradosAfahrenheit(double centigrados) //Función para convertir Centígrados a Fahrenheit.
        {
            return (centigrados * 1.8) + 32;
        }

    double fahrenheitAcentigrados(double fahrenheit) //Función para convertir Fahrenheit a Centígrados.
        {
            return (fahrenheit - 32) / 1.8;
        }
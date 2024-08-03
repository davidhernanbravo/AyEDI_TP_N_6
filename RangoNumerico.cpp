// Realizar un programa que pida un rango, luego que ingrese un número y determine si está dentro del rango solicitado.

#include <iostream>
using namespace std;

bool estaEnRango(int numero, int minimo, int maximo);

int main()
    {
        int numero, minimo, maximo;

        numero = 0;
        minimo = 0;
        maximo = 0;

        cout << "*******************" << endl;
        cout << "DENTRO DEL ESTANDAR" << endl;
        cout << "*******************" << endl;
        cout << endl;

        cout << "Estableciendo los limites: " << endl;
        cout << "--------------------------" << endl;

        cout << "Ingresa el Numero para establecer el Rango Minimo: ";
        cin >> minimo;
        cout << "Ingresa el Numero para establecer el Rango Maximo: ";
        cin >> maximo;
        cout << endl;

        cout << "Ingresa el Numero que sera puesto a Escrutinio: ";
        cin >> numero;
        cout << endl;

        cout << "El Rango esta delimitado por " << minimo << " como MINIMO y " << maximo << " como MAXIMO" << endl;
        cout << endl;

        if(estaEnRango(numero, minimo, maximo)) 
            {
                cout << "***************************************************" << endl;
                cout << "El NUMERO " << numero << " ESTA DENTRO DE NUESTROS ESTANDARES" << endl;
                cout << "BIENVENIDO A NUESTRA PERFECTA SOCIEDAD!!!" << endl;
                cout << "***************************************************" << endl;
                cout << endl;

            } else 
                {
                    cout << "***************************************************" << endl;
                    cout << "El NUMERO " << numero << " NO ESTA DENTRO DE NUESTROS ESTANDARES" << endl;
                    cout << "PREPARATE PARA SER DILAPIDADO HASTA QUE TE AMOLDES" << endl;
                    cout << "***************************************************" << endl;
                    cout << endl;

                    cout << "*************************************************************************************************" << endl;
                    cout << "REFLEXION: " << endl;
                    cout << "SOMOS NOSOTROS QUIENES NO ENCAJAMOS EN LA SOCIEDAD O ES ESTA SOCIEDAD CARETA LA QUE ESTA PODRIDA?" << endl;
                    cout << "*************************************************************************************************" << endl;
                    cout << endl;
                }
            
        return 0;
    }

    bool estaEnRango(int numero, int minimo, int maximo) 
        {
            return ((numero >= minimo) && (numero <= maximo));
        }
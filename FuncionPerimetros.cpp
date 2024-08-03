// Realizar un programa que pida los datos necesarios y Calcule los Perímetros de: Cuadrado, Rectángulo y Triángulo.

#include <iostream>
using namespace std;

void mostrarMenu();
double perimetroCuadrado(double lado);
double perimetroRectangulo(double largo, double ancho);
double perimetroTriangulo(double ladoA, double ladoB, double ladoC);

int main()
    {
        int opcion;
        double lado, largo, ancho, ladoA, ladoB, ladoC;

        mostrarMenu();
        
        cin >> opcion;
        cout << endl;

        if(opcion == 1)
            {
                cout << "Perimetro de un Cuadrado" << endl;
                cout << "------------------------" << endl;
                cout << "Ingrese Valor de Lado: ";
                cin >> lado;
                cout << endl;

                cout << "EL PERIMETRO DEL CUADRADO ES: " << perimetroCuadrado(lado) << endl;
                cout << endl;

            } else if(opcion == 2)
                {
                    cout << "Perimetro de un Rectangulo" << endl;
                    cout << "--------------------------" << endl;
                    cout << "Ingrese Valor de Ancho: ";
                    cin >> ancho;
                    cout << "Ingrese Valor de Largo: ";
                    cin >> largo;
                    cout << endl;

                    cout << "EL PERIMETRO DEL RECTANGULO ES: " << perimetroRectangulo(largo, ancho) << endl;

                } else if(opcion == 3)
                    {
                        cout << "Perimetro de un Triangulo" << endl;
                        cout << "-------------------------" << endl;
                        cout << "Ingrese Valor de Lado A: ";
                        cin >> ladoA;
                        cout << "Ingrese Valor de Lado B: ";
                        cin >> ladoB;
                        cout << "Ingrese Valor de Lado C: ";
                        cin >> ladoC;
                        cout << endl;

                        cout << "EL PERIMETRO DEL TRIANGULO ES: " << perimetroTriangulo(ladoA, ladoB, ladoC) << endl;

                    }

        return 0;
    }

    // Función para mostrar menú.
    void mostrarMenu()
        {
            cout << "***************************************" << endl;
            cout << "ELEGI EL PERIMETRO QUE QUERES AVERIGUAR" << endl;
            cout << "***************************************" << endl;
            cout << endl;
            cout << "1. Cuadrado" << endl;
            cout << "2. Rectangulo" << endl;
            cout << "3. Triangulo" << endl;
            cout << endl;
            cout << "Opcion: ";
        }
    
    // Funcion que calcula el perímetro de un Cuadrado.
    double perimetroCuadrado(double lado)
        {
            return 4 * lado;
        }

    // Función que calcula el perímetro de un Rectángulo.
    double perimetroRectangulo(double largo, double ancho)
        {
            return (2 * largo) + (2 * ancho);
        }

    // Función que calcula el perímetro de un Triángulo.
    double perimetroTriangulo(double ladoA, double ladoB, double ladoC)
        {
            return ladoA + ladoB + ladoC;
        }
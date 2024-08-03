/* Realice un programa que lea de la entrada estándar los siguientes datos de una persona: 
Edad: dato de tipo entero. Sexo: dato de tipo carácter. Altura en metros: dato de tipo real. 
Tras leer los datos, el programa debe mostrarlos en la salida estándar.
*/

#include <iostream>
#include <string>
using namespace std;

string leerNombre();
int leerEdad();
char leerSexo();
double leerAltura();
void mostrarDatos(string nombre, int edad, char sexo, double altura);

int main()
    {   
        cout << "****************" << endl;
        cout << "DATOS PERSONALES" << endl;
        cout << "****************" << endl;
        cout << endl;

        string nombreCompleto = leerNombre();
        int edad = leerEdad();
        char sexo = leerSexo();
        double altura = leerAltura();
        cout << endl;

        cout << "Los Datos ingresados son: " << endl;
        cout << "-------------------------" << endl;

        mostrarDatos(nombreCompleto, edad, sexo, altura);
        cout << endl;

        return 0;
    }

    // Función para leer el nombre.
    string leerNombre() 
        {
            string nombreCompleto;
            cout << "Ingresa el nombre completo: ";
            getline(cin, nombreCompleto);
            return nombreCompleto;
        }
    
    // Función para leer la edad
    int leerEdad() 
        {
            int edad;
            cout << "Ingresa la edad: ";
            cin >> edad;
            return edad;
        }

    // Función para leer el sexo
    char leerSexo() 
        {
            char sexo;
            cout << "Ingresa el sexo (M/F): ";
            cin >> sexo;
            return sexo;
        }

    // Función para leer la altura
    double leerAltura() 
        {
            float altura;
            cout << "Ingresa la altura en metros: ";
            cin >> altura;
            return altura;
        }

    // Función para mostrar los datos
    void mostrarDatos(string nombre, int edad, char sexo, double altura) 
        {
            cout << "Nombre: " << nombre << endl;
            cout << "Edad: " << edad << endl;
            cout << "Sexo: " << sexo << endl;
            cout << "Altura: " << altura << " metros" << endl;
        }
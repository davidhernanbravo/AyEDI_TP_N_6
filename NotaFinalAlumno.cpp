/* La Nota final de un estudiante es el promedio de tres notas: la nota de
laboratorio que cuenta un 30% del total, la nota teórica que cuenta un 60% y
la nota de Práctica que cuenta el 10% restante. Escriba un programa que lea
de la entrada estándar las tres notas de un alumno y escriba en la salida
estándar su nota final.
*/

#include <iostream>
#include <string>
using namespace std;

string leerNombre();
double leerNota();
void mostrarPromedio(string nombre, double nota1, double nota2, double nota3);

int main()
    {
        cout << "*************************************************" << endl;
        cout << "DIME CUAN DEDICADO ERES Y TE DIRE QUE NOTA TIENES" << endl;
        cout << "*************************************************" << endl;
        cout << endl;

        cout << "Ingreso de Datos: " << endl;
        cout << "-----------------" << endl;

        string nombreAlumno = leerNombre();
        cout << "Nota de Teoria: ";
        double notaTeoria = leerNota();
        cout << "Nota de Laboratorio: ";
        double notaLaboratorio = leerNota();
        cout << "Nota de Practicas: ";
        double notaPracticas = leerNota();
        cout << endl;

        mostrarPromedio(nombreAlumno, notaTeoria, notaLaboratorio, notaPracticas);

        return 0;
    }

    // Función para leer el nombre del alumno.
    string leerNombre() 
        {
            string nombreAlumno;
            cout << "Nombre y apellido del alumno: ";
            getline(cin, nombreAlumno);
            return nombreAlumno;
        }

    // Función para leer las notas.
    double leerNota()
        {
            double nota;
            cin >> nota;
            return nota;
        }

    // Función para mostrar el promedio.
    void mostrarPromedio(string nombre, double nota1, double nota2, double nota3)
        {
            double notaPromedio = ((nota1 * 0.6) + (nota2 * 0.3) + (nota3 * 0.1));

            cout << "************************************************" << endl;
            cout << "La Nota Promedio de " << nombre << " es: " << notaPromedio << endl;
            cout << "************************************************" << endl;
            cout << endl;
        }
#include <iostream>
#include <iomanip>

#include "Seccion.h"

using namespace std;
int main() {
    unsigned int size=0;
    cout << "Ingrese el tamaño de alumnos de la seccion" << endl;
    cin >> size;
    Seccion s(size);

    for (int i=0; i< size; i++){
        cout << "ingrese notas del alumno (" << i << ") \n";

        double dc=0, teo=0;
        double py1=0, py2=0;
        double sp1=0, sp2=0, sp3=0, sp4=0;
        cout << "Ingrese nota de teoria: ";
        cin >> teo;
        cout << "\n";
        cout << "Ingrese nota de Participacion en clase: ";
        cin >> dc;
        cout << "Ingrese nota de Proyectos: ";
        cin >> py1 >> py2;
        cout << "\n";
        cout << "Ingrese nota de practicas: ";
        cin >> sp1 >> sp2 >> sp3 >> sp4;
        cout << "\n";
        s.setNotasAlumno(dc, teo, sp1, sp2, sp3, sp4, py1, py2);

    }

    cout << "El numero de aprobados es: " << setprecision(3) << s.getAprobados() << "\n";
    cout << "El numero de desaprobados es: " << setprecision(3) << s.getDesAprobados() << "\n";

    return 0;
}
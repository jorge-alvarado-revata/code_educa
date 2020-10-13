#include <iostream>

using namespace std;

int main()
{
    float alumnos[4][3];

    // alumno 1
    alumnos[0][0] = 62.5;
    alumnos[1][0] = 18.0;
    alumnos[2][0] = 1.67;
    alumnos[3][0] = 1;

    // alumna 2
    alumnos[0][1] = 55.5;
    alumnos[1][1] = 16.0;
    alumnos[2][1] = 1.75;
    alumnos[3][1] = 0;

    // alumno 3
    alumnos[0][2] = 56.5;
    alumnos[1][2] = 19.0;
    alumnos[2][2] = 1.65;
    alumnos[3][2] = 1;

    for(int i=0; i<3; i++){

        cout << "El alumno: " << i << " peso: "
             << alumnos[0][i] << " edad: "
             << alumnos[1][i] << " estatura: "
             << alumnos[2][i] << " sexo: "
             << alumnos[3][i] << "\n";
    }

    return 0;
}

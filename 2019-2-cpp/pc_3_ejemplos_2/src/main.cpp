#include <iostream>
#include "CAlumno.h"
#include "CAula.h"
int main() {
    std::cout << "Hola, ejemplo de agregacion" << std::endl;
    CAula lab1("lab1");
    CAlumno alumno1("juan", "perez");
    alumno1.setNota(12);
    CAlumno *ptrAlu2 = new CAlumno("Gabriela", "Fernandez");
    ptrAlu2->setNota(16);
    lab1.AsignarAlumnos(&alumno1);
    lab1.AsignarAlumnos(ptrAlu2);
    std::cout << "El promedio del aula es:" << lab1.PromedioAula();
}
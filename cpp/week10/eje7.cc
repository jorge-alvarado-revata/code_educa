#include <iostream>

/*
El ejemplo anterior nos permite organizar mejor la información.

Pero igual las funciones son independientes de las estructuras, para modificar
información de una estructuras tenemos que pasarla a una función.
La función solo hace cambios si pasamos por referencia la estructura.
Veamos ahora con una nueva palabra reservada.
*/

using namespace std;

class Point {
    public:
        double x, y;
    void print() {
        cout << "(" << x << ", " << y << ")\n";
    }
    
    void setX(double x){
        this->x = x;
    }
    
    void setY(double y){
        this->y = y;
    }
};

class Vector{
  public:
  Point inicio, fin;
  
  void print(){
      inicio.print();
      fin.print();
  }
  
  void setInicio(Point inicio){
      this->inicio = inicio;
  }
  
  void setFin(Point fin){
      this->fin = fin;
  }
};


int main() {
    
    Vector myvector;
    
    Point p;
    
    p.setX(3.4);
    p.setY(2.1);
    
    myvector.setInicio(p);
    
    p.setX(2.2);
    p.setY(4.3);
    
    myvector.setFin(p);
    
    myvector.print();    
    return 0;
}
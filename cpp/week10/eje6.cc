#include <iostream>

/*
Organicemos ahora el problema anterior con estructuras.
*/
using namespace std;

struct Point {
    double x,y;
};

struct Vector {
    Point inicio, fin;
};

void printVector(Vector v);

void printPoint(Point p);

void cambiaPoint(Point &, double, double);

int main() {
    
    Vector myvector;
    
    myvector.inicio.x = 1.3;
    myvector.inicio.y = 2.1;
    myvector.fin.x = 3.2;
    myvector.fin.y = 4.3;
    
    printVector(myvector);
    
    cambiaPoint(myvector.inicio, 2.0, 5.6);
    
    printVector(myvector);
    
    return 0;
}

void printVector(Vector v){
    printPoint(v.inicio);
    printPoint(v.fin);
}

void printPoint(Point p){
    
    cout << "*********************\n";
    cout << "Point(" << p.x << ", " << p.y << ")" << "\n";
    cout << "---------------------\n";
}

void cambiaPoint(Point &p, double x, double y){
    
    p.x +=x;
    p.y +=y;
}
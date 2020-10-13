#include <iostream>
using namespace std;

int main()
{
    int numero1, numero2, opcion;
    char operacion;
    float resultado;
    cout << "Ingrese primer numero: ";
    cin >> numero1;
    cout << "Ingrese segundo numero: ";
    cin >> numero2;
    if (numero2 == 0)
       cout << "Error: segundo operando no puede ser cero";
    else
    {
        cout << "S o s -> Suma\nR o r -> Resta\nM o m -> Multiplicacion\nD o d -> Division\n"; 
        cout << "Ingrese Operacion:"; 
        cin >> operacion;
        if (operacion =='S' || operacion=='s')
            opcion =1;
        if (operacion =='R' || operacion =='r')
            opcion =2;
        if (operacion =='M' || operacion =='m')
            opcion =3;
        if (operacion =='D' || operacion =='d')
            opcion =4;
         
        switch (opcion)
        {
          case 1:  cout << "Eligio SUMA\n";
                   resultado = numero1 + numero2;
                   break;
          case 2:  cout << "Eligio RESTA\n";
                   resultado = numero1 - numero2;
                   break;
          case 3:  cout << "Eligio MULTIPLICACION\n";
                   resultado = numero1 * numero2;
                   break;
          case 4:  cout << "Eligio DIVISION\n";
                   resultado = numero1 / numero2;
                   break;                   
        }
        cout << "El resultado es: " << resultado;
    }
}


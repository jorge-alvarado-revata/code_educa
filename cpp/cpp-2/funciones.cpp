#include <iostream>
using namespace std;

int leernumero();
int potenciaados(int n);
int sumaimpares(int n);
double inversofact(int n);
void imprimeresultados(int p, int s, double i);

int main()
{
    int n = leernumero();
    int potencia = potenciaados(n);
    int suma = sumaimpares(n);
    double inverso = inversofact(n);
    imprimeresultados(potencia, suma, inverso);
}



int leernumero(){
    int n;
    cin >> n;
    return n;
}
int potenciaados(int n){
    int i=2;
    while (i<=n/2)
        i*=2;
    return i;
}

int sumaimpares(int n){
    int suma =0;
    for (int i=1; i<=n; i+=2)
        suma +=i;
    return suma;        
}
double inversofact(int n){
    int producto =1;
    for (int i=1;i<=n;i++)
        producto *=i;
    return 1.0/producto;
}
void imprimeresultados(int p, int s, double i){
    cout << "potencia: " << p << " suma: " << s << " inverso: " << i;    
}

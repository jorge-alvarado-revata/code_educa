#include <iostream>
using namespace std;


string devuelveMes(int m){
    string nombreMes;
    switch(m)
    {
       case 0: nombreMes = "Enero";
               break;
       case 1: nombreMes = "Febrero";
               break;
       case 2: nombreMes = "Marzo";
               break;     
       case 3: nombreMes = "Abril";       
               break;
       case 4: nombreMes = "Mayo";
               break;
       case 5: nombreMes = "Junio";
               break;    
       case 6: nombreMes = "Julio";
               break;       
       case 7: nombreMes = "Agosto";
               break;       
       case 8: nombreMes = "Setiembre";       
               break;       
       case 9: nombreMes = "Octubre";       
               break;       
       case 10: nombreMes = "Noviembre";              
               break;       
       case 11: nombreMes = "Diciembre";      
               break;
    }   
       return nombreMes;
}

int main() {
    int suma = 0;
    float promedio;
    int mayor;
    float promedioMayor;
    int estacion = 0;
    float promedioMenor;
    int mes;
    int temperaturaMasBaja;
    int T[8][12]={ 
                  {28,30,25,23,20,18,15,14,16,17,19,20},
                  {29,31,27,23,21,19,16,13,17,18,18,22},
                  {26,33,25,25,22,17,15,15,18,19,19,23},
                  {25,29,23,26,19,19,17,15,17,17,18,21},
                  {24,28,28,25,18,20,18,15,16,18,20,20},
                  {30,27,25,22,20,16,11,16,16,18,19,21},
                  {31,29,26,23,21,17,16,16,15,17,18,22},
                  {27,29,26,24,20,17,15,16,16,17,17,23}
                 };
    
    //Pregunta 1- La temperatura promedio del mes de setiembre 
    for (int i=0;i<8;i++)
       suma = suma + T[i][8];
    promedio = (float)suma /8;
    cout<<"\nPregunta 1- La temperatura promedio del mes de setiembre"<<"\n"; 
    cout <<"      Temperatura promedio en setiembre: "<<promedio;
    
    // Pregunta 2 - Cuál fue la mayor temperatura que se registró
    //              en la estación meteoreológica número 3.
    
    mayor = T[3][0];
    for (int j =0;j<12;j++)
       if (T[3][j] > mayor)
           mayor = T[3][j];
    cout<<"\nPregunta 2 - Cuál fue la mayor temperatura que se registró ";
    cout<<"en la estación meteoreológica número 3"<<"\n";
    cout<<"      Mayor temperatura estación 3: " << mayor;
    
    // Pregunta 3 - Considerando las temperaturas registradas
    //en todo el año, cuál fue la estación metereológica 
    //que registró la mayor temperatura promedio de todo el año.
    
 
    promedio =0;
    promedioMayor = 0;
    for (int i=0;i<8;i++)
    {
       suma = 0;    
       for (int j=0;j<12;j++)
       {
           suma = suma + T[i][j];
           
       }
       promedio = (float)suma / 12;
       if (promedio > promedioMayor)
       {
           promedioMayor = promedio;
           estacion = i; 
       }
    }
    
    cout<<" \nPregunta 3 - Considerando las temperaturas registradas ";
    cout<<" en todo el año, cuál fue la estación metereológica "<<"\n";
    cout<<" que registró la mayor temperatura promedio de todo el año."<<"\n";
    
    cout <<"      El promedio mayor es: "<<promedioMayor<<"\n";
    cout <<"      Este promedio se registró en la estación: "<<estacion<<"\n";
    
    // \nPregunta 4 - Considerando las temperaturas registradas 
    // en todas las estaciones metereológicas, cuál fue el nombre 
    //del mes en el cuál hubo la MENOR temperaratura promedio. (rpta: Agosto).
    promedio =0;
    mes= 0;
    for (int i=0;i<12;i++){
       suma = 0;    
       for (int j=0;j<8;j++)
           suma = suma + T[j][i];
       promedio = (float)suma / 8;
       if (i==0)
           promedioMenor = promedio;
       else{
           if (promedio < promedioMenor){
               promedioMenor = promedio;
               mes = i;
           }
       }
    }
    
    cout<<"\n Pregunta 4 - Considerando las temperaturas registradas ";
    cout<<"\n en todas las estaciones metereológicas, cuál fue el nombre"; 
    cout<<" \ndel mes en el cuál hubo la MENOR temperaratura promedio. "<<"\n";
    cout <<"      El promedio menor es: "<<promedioMenor<<"\n";
    cout <<"      Este promedio se registró";
    cout <<" en el mes de: "<<devuelveMes(mes)<<"\n";
    
    
    //Pregunta 5 - Que estación metereológica y en que mes
    // se registró la temperatura mas baja 
    // (rpta:  estacion  número 5 y el mes fue en Julio. 
 
    mes= 0;
    estacion=0;
    temperaturaMasBaja=0;
    for (int i=0;i<8;i++){
       for (int j=0;j<12;j++)
          if ((i==0) && (j==0)){
             temperaturaMasBaja = T[i][j];
             estacion=0;
             mes=0;
          }
           else{
               if ( T[i][j]< temperaturaMasBaja){
                   temperaturaMasBaja = T[i][j];
                   estacion=i;
                   mes = j;
               }
       }
    }
    cout<<"\nPregunta 5 - Que estación metereológica y en que mes";
    cout<<" se registró la temperatura mas baja "<<"\n";
    cout <<"\n      La temperatura más baja fue: "<<temperaturaMasBaja<<"\n";
    cout <<"      Se registró en la  estación: "<< estacion;
    cout <<"      en el mes de: "<<devuelveMes(mes)<<"\n";
    
}

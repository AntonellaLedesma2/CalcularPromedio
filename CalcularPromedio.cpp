#include <iostream>
#include <string>
using namespace std;
int CalcularPromedio(int n1, int n2,int n3);
int main(){
    string nombre;
    int nota1, nota2, nota3;
    
    cout<<"ingrese el nombre del alumno"<<endl;
    cin>>nombre;
    cout<<"ingrese la primer nota"<<endl;
    cin>>nota1;
    cout<<"ingrese la segunda nota"<<endl;
    cin>>nota2;
    cout<<"ingrese la tercer nota"<<endl;
    cin>>nota3;
    cout<<"el promedio del alumno "<<nombre<<" es de:"<<CalcularPromedio(nota1,nota2,nota3);
    return 0;
}
int CalcularPromedio(int n1,int n2,int n3){
int promedio,suma;
suma=n1+n2+n3;
promedio=suma/3;
if(promedio<7){
cout<<"desaprobó"<<endl;
}
if(promedio==7){
cout<<"aprobó"<<endl;
}
if(promedio>7){
cout<<"excelente"<<endl;
}
return promedio;
}

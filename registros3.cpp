#include <iostream>
#include <string>
using namespace std;
//ESTRUCTURA
struct Personas{
    string nombre;
    int dia;
    int mes;
    int anho;
};
//FUNCION PARA LEER
void Leer (Personas F[], unsigned &n){
    cin.ignore(); //Limpieza
    for (int i=0; i<n; i++){
        cout<<"Nombre del No"<<(i+1)<<": ";
        getline(cin,F[i].nombre);
        cout<<"Dia del No"<<(i+1)<<": ";
        cin>>F[i].dia;
        cout<<"Mes del No"<<(i+1)<<": ";
        cin>>F[i].mes;
        cout<<"Anho del No"<<(i+1)<<": ";
        cin>>F[i].anho;
        cin.ignore(); //Limpieza
    }
}
//FUNCION PARA ESCRIBIR
void Escribir (Personas F[], unsigned n){
    int ID;
    cout<<"Ingrese el mes a identificar"<<endl;
    do {
        cin>>ID;
        for (int i=0; i<n; i++){
                if ((ID)==(F[i].mes)){
                    cout<<"Nombre: "<<F[i].nombre<<endl;
                    cout<<"Dia: "<<F[i].dia<<endl;
                    cout<<"Mes: "<<F[i].mes<<endl;
                    cout<<"Anho: "<<F[i].anho<<endl;
            }
        }
    } while (ID!=0);
}
//FUNCION PRINCIPAL
int main(){
    unsigned n;
    cout<<"Ingrese la cantidad de personas: ";
    cin>>n;
    Personas Fecha[n];
    Leer (Fecha, n);
    Escribir (Fecha, n);
    return 0;
}
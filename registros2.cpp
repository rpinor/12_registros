#include <iostream>
#include <string>
using namespace std;
//ESTRUCTURA
struct persona{
    string nombre1;
    string nombre2;
    int dni;
    int edad;
};
//FUNCION PARA LEER Y ESCRIBIR CANTIDAD DE PERSONAS MAYORES A 50, PROMEDIO y DATOS
void Leer (persona personas[], unsigned &n){ //No se porque no me funciona con Int, asi que probe unsigned
    int p50=0, prom=0;
    cin.ignore(); //Limpieza
    for (int i=0; i<n; i++){
        cout<<"Primer nombre No"<<(i+1)<<": ";
        getline(cin,personas[i].nombre1);
        cout<<"Segundo nombre No"<<(i+1)<<": ";
        getline(cin,personas[i].nombre2);
        cout<<"DNI No"<<(i+1)<<": ";
        cin>>personas[i].dni;
        cout<<"Edad No"<<(i+1)<<": ";
        cin>>personas[i].edad;
        cin.ignore(); //Limpieza
        prom=prom+personas[i].edad;
        if (50<personas[i].edad){
            p50++;
        }
    }
    cout<<p50<<" personas son mayores a 50"<<endl;
    cout<<prom/n<<" es el promedio de edades"<<endl;
}
//FUNCION PARA ESCRIBIR
void Escribir (persona personas[], unsigned n){
    for (int i=0; i<n; i++){
        cout<<"Primer nombre: "<<personas[i].nombre1<<endl;
        cout<<"Segundo nombre: "<<personas[i].nombre2<<endl;
        cout<<"DNI: "<<personas[i].dni<<endl;
        cout<<"Edad: "<<personas[i].edad<<endl;
    }
}
//FUNCION PRINCIPAL
int main(){
    unsigned n;
    cout<<"Ingrese la cantidad de personas: ";
    cin>>n;
    persona Grupo[n];
    Leer (Grupo, n);
    Escribir (Grupo, n);
    return 0;
}
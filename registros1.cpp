#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
	struct empleado{
    char nombre[60];
    char sexo[60];
    int sueldo[60];
    };
    empleado emp;
    for(int i=0; i<n; i++){
        cout<<"Nombre del empleado:";
        cin>>emp.nombre[i];
        cout<<"Sexo del empleado:";
        cin>>emp.sexo[i];
        cout<<"Sueldo del empleado:";
        cin>>emp.sueldo[i];
    }
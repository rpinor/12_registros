#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
	struct empleado{
    string nombre[60];
    char sexo[60];
    int sueldo[60];
    };
    int SueldoMin=0;
    int SueldoMax=1000000;
    empleado emp;
    for(int i=0; i<n; i++){
        cout<<"Nombre del empleado:"<<endl;
        cin>>emp.nombre[i];
        cout<<"Sexo del empleado:"<<endl;
        cin>>emp.sexo[i];
        cout<<"Sueldo del empleado:"<<endl;
        cin>>emp.sueldo[i];
        if(emp.sueldo[i]>SueldoMin){
            SueldoMin=emp.sueldo[i];
        }
        if(emp.sueldo[i]<SueldoMax){
            SueldoMax=emp.sueldo[i];
        }
    }
    for(int i=0; i<n; i++){
        if(emp.sueldo[i]==SueldoMin){
            cout<<emp.nombre[i]<<endl;
            cout<<emp.sexo[i]<<endl;
            cout<<emp.sueldo[i]<<endl;
        }
        if(emp.sueldo[i]==SueldoMax){
            cout<<emp.nombre[i]<<endl;
            cout<<emp.sexo[i]<<endl;
            cout<<emp.sueldo[i]<<endl;
        }
    }
    return 0;
}

#include <iostream>
#include <stdlib.h>
#define tama 20
using namespace std;

int main(int argc, char** argv) {
	
	double estudiantes[tama]={0,0,0,0,0};
	double suma=0.0,grupo=0.0,alta=0.0,baja=0.0;
	
	cout<<"promedio y lasalificaciones del grupo\n";
	cout<<"ingresar las calificaciones\n";
	for(int i=1;i<=5;i++){
		cout<<"ingresar la calificacion del alumno numero "<<i<<" : ";
		cin>>estudiantes[i];
	}
	baja=estudiantes[1];
		for(int i=1;i<=tama;i++){
			suma+=estudiantes[i];
			if(estudiantes[i]>=alta){
				alta=estudiantes[i];
			}
		
			if(estudiantes[i]<=baja){
			baja=estudiantes[i];
			}			
		}
	for(int i=1;i<=tama;i++){
		cout<<" "<<estudiantes[i]<<",";
	}
	grupo=suma/5;
	cout<<"\nEl promedio del grupo es=: "<<grupo<<"\n";
	cout<<"La calificacion mas alta es=: "<<alta<<" Bien hecho \n";
	cout<<"La calificacion mas baja es=: "<<baja<<" Mal hecho \n\n";
}//Llave final

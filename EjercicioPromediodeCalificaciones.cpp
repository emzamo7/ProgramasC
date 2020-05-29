//Ejercicio 2.20 de diagramas de flujo. Promedio de 3 calificaciones

#include<iostream>
using namespace std;
main(){
	float Cal1=0, Cal2=0, Cal3=0, Promedio_Total=0;
	cout<<"Este programa hace el promedio de calificaciones.";
	cout<<"\nDame tu primera calificacion: ";
	cin>>Cal1;
	cout<<"Dame tu segunda calificacion: ";
	cin>>Cal2;
	cout<<"Dame tu Tercera calificacion: ";
	cin>>Cal3;
	
	Promedio_Total = (Cal1 + Cal2 + Cal3)/3;
	
	cout<<"\nEl promedio total de tus calificaciones es: "<<Promedio_Total<<endl;	
	
	
	return 0;
}

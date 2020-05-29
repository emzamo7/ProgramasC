//programa que saca la cantidad ahorrada en funcion del porcentaje que deseemos y el numero de semanas
#include<iostream>
using namespace std;
int main(){
	float sueldo = 0, Porcentaje_Deseado= 0, Cant_Ahorrado = 0, Num_Semanas = 0, Total=0;
	cout<<"\nDime tu sueldo semanal: ";
	cin>>sueldo;
	cout<<"Que porcentaje deseas ahorrar?: ";
	cin>>Porcentaje_Deseado;
	cout<<"De cuantas semanas deseas la estimacion?: ";
	cin>>Num_Semanas;
	
	Cant_Ahorrado = sueldo * (Porcentaje_Deseado/100);
	
	
	
	Total =Cant_Ahorrado*Num_Semanas;
	
	cout<<"\nTotal aprox ahorrado en las semanas que me diste si no tocaste ese dinero: " << Total<<endl;
	return 0;
	
	
	
	
}

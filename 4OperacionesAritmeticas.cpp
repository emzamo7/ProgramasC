/*Escribe un programa que lea de la entreda estandar dos numeros y muestre
en la salida estandar su suma, resta, multiplicacion y division.*/

#include<iostream>
using namespace std;

int main(){
	float n1,n2, suma = 0, resta = 0, multiplicacion = 0, division=0;
	cout<<"Digite un numero: ";
	cin>>n1;
	cout<<"Digite otro numero: " ; 
	cin>>n2;
	
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division = n1/ n2;
	
	cout<<"\nla suma es: "<<suma<<endl; // endl = salto de linea
	cout<<"la resta es: "<<resta<<endl;
	cout<<"la multiplicacion es: "<<multiplicacion<<endl;
	cout<<"la division es: "<<division<<endl;
	return 0;
}

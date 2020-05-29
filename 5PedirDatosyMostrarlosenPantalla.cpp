/*Realice un programa que lea de la entrada estandar los siguientes datos de una persona:
Edad: dato de tipo Entero
Sexo: Dato de tipo Caracter
Estatura en Metros: Dato de Tipo REal

Tras leer los datos, el programa debe mostrarlos en la salida estandar. */

#include<iostream>
using namespace std;
int main(){
	int Edad=0;
	char Sexo[10];//con los corchetes, le estoy dando un tamanio para escribir una palabra completa
	float Estatura=0;
	
	cout<<"Dame por favor tu Edad: ";
	cin>>Edad;
	cout<<"Dame por favor tu Sexo: ";
	cin>>Sexo;
	cout<<"Dame por favor tu Estatura: ";
	cin>>Estatura;
	
	cout<<"\nTu Edad es: "<<Edad<<endl;//\n es salto de linea
	cout<<"tu Sexo es: "<<Sexo<<endl;
	cout<<"tu Estatura es: "<<Estatura<<endl;
	
		
	return 0;
}

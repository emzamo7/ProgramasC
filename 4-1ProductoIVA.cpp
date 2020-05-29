//Escribe un programa que lea de la entrada estandar el precio de un producto y muestre en la salida estandar el precio del producto al aplicarle el IVA
#include<iostream>
using namespace std;
int main(){
	float Precio_Producto=0, Precio_IVA=0, IVA_Vigente=0, Porcentaje_IVA=0, IVA_Vigente1=0;
	
	cout<<"Pedir precio del producto: ";
	cin>>Precio_Producto;
	cout<<"Cual es el IVA Vigente?: " ;
	cin>>IVA_Vigente;
	
	 IVA_Vigente1 = IVA_Vigente/100 ;
	 Porcentaje_IVA = Precio_Producto * IVA_Vigente1;
	 Precio_IVA = Precio_Producto + Porcentaje_IVA;
	
	cout<<"\nEl precio con IVA es: "<<Precio_IVA<<endl;
	
	
	
	
	
	
	return 0;
}

//Programa que calcula la potencia electrica en Watts 
#include<iostream>
using namespace std;
int main(){
float P = 0, I = 0, V = 0, R = 0;
cout<<"Dame el valor de la resistencia en Ohms";
cin>>R;
cout<<"Dame el valor de la corriente en Amperes";
cin>>I;

V = I * R;
P = V * I;

cout<<"\nLa potencia electrica en Watts son: "<< P<<endl;
return 0;


}

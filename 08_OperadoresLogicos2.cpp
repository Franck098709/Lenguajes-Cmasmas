//08_OperadoresLogicos2.c++
//Ejercicio pedir un numero entre 10 y 20, si cumple con la condicion imprimir: Tu numero si está dentro del rango, en caso contrario que imprima: Tu numero no está dentro del rango

#include <iostream>
using namespace std;

int main ()
{
	int a;
	cout<<"Por favor, ingresa un numero del 1 al 20: ";
	cin>>a;
	
	string v = "Tu numero si esta dentro del rango", f = "Tu numero no esta dentro del rango";
	cout<<endl;
	bool V = a >= 10 and a <=20;
	cout<<(V?v:f)<<endl;
	
	return 0;
}

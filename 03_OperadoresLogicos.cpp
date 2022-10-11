/* 03_operadoresLogicos3
pedir dos palabras, si son iguales imprimir "Coinciden"
si no, imprimir "Error de lectura*/
#include <iostream>
using namespace std;

int main ()
{
	string a, b;
	cout<< "Por favor, ingrese una palabra: ";
	cin>> a;
	cout<< "Por favor, ingrese otra palabra: ";
	cin>> b;
	string v = "Coinciden", f = "Error de captura";
	cout<<endl<<((a==b)?v:f)<<endl;
	
	return 0;
}


/*funciones con declaracion de prototipo
19_funciones2.cpp
*/

#include <iostream>
using namespace std;

float suma (float a, float b); // Prototipo de la funcion (Declarar la funcion)

int main ()
{
	float n1,n2,n3;
	cout << "Escribe 2 valores: ";
	cin>>n1>>n2;
	n3=suma (n1,n2);
	cout << endl;
	cout << "El resultado de la suma es: " << n3 << endl; 
	
	return 0;
}

float suma (float a, float b)
{
	float c=a+b;
	return c;
}

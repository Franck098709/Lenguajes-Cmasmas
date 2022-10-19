/*Manejo de funciones en c++
18_funciones1.cpp
*/

#include <iostream>
using namespace std;
/*Si una funcion se declara antes del main, no necesita prototipo y solo si es una sola funcion*/

float suma (float a, float b)
{
	float c = a + b;
	return c;
}

int main ()
{
	float n1,n2,n3;
	cout << "Escribe un numero: ";
	cin >> n1;
	cout << "Escribe otro numero: ";
	cin >> n2;
	n3 = suma (n1,n2);
	cout<<endl;
	cout << "La suma es: " << n3 <<endl;
	
	
	
	
	return 0;
}

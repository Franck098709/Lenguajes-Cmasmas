/* Retorno por referencia
Es cuando se modificann los valores ubicados en memoria (&) por lo que no es necesario regresar nada, ya que los valores se actualizan automaticamente.
23_funciones6.cpp
*/

#include <iostream>
using namespace std;
void operador(int x, int y, int& s, int& r, int& m);

int main ()
{
	int a, b, mult, resta, suma;
	cout << "Escribe un numero: ";
	cin >> a;
	cout << "Escribe otro numero: ";
	cin >> b;
	operador(a, b, suma, resta, mult);
	cout <<endl;
	cout << "Los numeros iniciales son: "<< a << " y " << b <<endl<<endl;
	cout << "La suma de estos valores es: " << suma <<endl<<endl;
	cout << "La resta de estos valores es: " << resta <<endl<<endl;
	cout << "La multiplicacion de estos valores es: "<< mult <<endl;
	
}

void operador(int x, int y, int& s, int& r, int& m)
{
	m= x * y;
	r= x - y;
	s= x + y;
}

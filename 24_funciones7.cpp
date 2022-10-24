/* Sobrecarga de funciones
Es el hecho de poder tener varias funciones con el mismo nombre
y con distinto numero de parametros de entrada.
24_funciones7.cpp
*/

#include <iostream>
using namespace std;
// aquí está declarada la sobrecarga de la funcion suma, mismo nombre, diferente numero de parametros
int suma (int a, int b);
int suma (int a, int b, int c);
int suma (int a, int b, int c, int d);

int main ()
{
	int n1 = 1, n2 = 2, n3 = 3, n4 = 4;
	cout << "Trabajamos con los numeros : " << n1 << ", " << n2 << ", " << n3 << " y " << n4 <<endl<<endl;
	cout <<"La suma de los dos primeros: "<<suma(n1,n2)<<endl;
	cout <<"La suma de los tres primeros: "<<suma (n1,n2,n3)<<endl;
	cout <<"La suma de todos los valores "<<suma (n1,n2,n3,n4)<<endl;
}

int suma (int a, int b)
{
	return a + b;
}
int suma (int a, int b, int c)
{
	return a + b + c;
}
int suma (int a, int b, int c, int d)
{
	return a + b + c + d;
}

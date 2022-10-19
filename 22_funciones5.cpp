/* funciones con pase de argumentos por defecto
22_funciones5.cpp
*/

#include <iostream>
using namespace std;
int multiplica (int n1=1, int n2=1);

int main ()
{
	int a=3, b=5;
	cout << "Valores iniciales: " << a <<", "<< b <<endl;
	cout << "Funcion sin argumentos: " << multiplica() << endl;
	cout << "Funcion con 1 argumento: " << multiplica(a) << endl;
	cout << "Funcion con dos argumentos: " << multiplica (a,b) <<endl;
}
int multiplica (int n1, int n2)
{
	return n1*n2;
}

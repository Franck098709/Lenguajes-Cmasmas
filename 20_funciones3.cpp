/*funciones recursivas
20_funciones3.cpp
*/

#include <iostream>
using namespace std;

float factorial (float n); //Prototipo de la funcion

int main ()
{
	float n,r;
	cout << "Factorial: Escribe un numero para obtener su factorial: ";
	cin>>n;
	r=factorial(n);
	cout<<endl;
	cout<< n << "! = " << r <<endl;
}

float factorial(float n)
{
	if (n<0) return 0;
	else if (n>1)
	{
		return n*factorial(n-1); //Recursividad mientras n>1
	}
	return 1; //Condicion para n==1 y n==0
}

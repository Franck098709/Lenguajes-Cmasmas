/*funciones sin retorno del tipo void
21_funciones4.cpp
*/

#include <iostream>
using namespace std;
float multiplica (void);

int main ()
{
	float x = multiplica();
	cout<<endl;
	cout<< "Resultado: " << x <<endl;
}

float multiplica (void)
{
	int a,b;
	cout<<"Escribe un numero ";
	cin>>a;
	cout<<"Escribe el segundo valor ";
	cin>>b;
	cout<<endl;
	cout << a << " x " << b << " = " <<a*b<<endl;
	return a * b;
}

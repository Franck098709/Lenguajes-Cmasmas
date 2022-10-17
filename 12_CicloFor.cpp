/*Ciclo for
12_CicloFor.cpp
*/

#include <iostream>
using namespace std;

int main()
{
	cout<<"Tablas de multiplicar"<<endl;
	int i, t;
	cout<<"¿Que tabla de multiplicar quieres ver? (Del 1 al 10): ";
	cin>>t;
	cout<<endl;
	if (t>1 and t<=10)
	{
		for (int i=1; i<=10; i++)
		{
			cout<< t << " x " << i << " = " << t*i << endl;
		}
	}
		else
		{
			cout<<"Error: Tu numero no esta dentro del rango";
		}
	
}

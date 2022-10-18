/* Comando Continue
14_Continue.cpp
Permite continuar con la secuencia de un ciclo omitiendo un paso del mismo
*/
#include <iostream>
using namespace std;

int main ()
{
	int n;
	cout<<"Escribe un numero ";
	cin>>n;
	for (int i=1; i<=n; i++)
	{
		if (i%2==1) continue;
		cout << i << " - "; 
	}
	
	
	return 0;
}

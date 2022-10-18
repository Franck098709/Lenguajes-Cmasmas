/* goto permite saltar a diferentes lineas del codigo, no es muy recomendable su uso, pero existe y se puede utilizar de ser necesario
15_goto.cpp
*/
#include <iostream>
using namespace std;

int main ()
{
	cout << "Uso del Goto: Escribe s para salir" << endl;
	char c= 'a';
	salto1:
		cin>>c;
		if (c=='s') goto salto2;
	cout << "Esto es una s. Escribe s para salir "<<endl;
	goto salto1;
	salto2:
		cout<< "Perfecto, has escrito una s. Programa terminado. "<< endl;
	
	return 0;
}    

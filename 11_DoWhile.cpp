/*Manejo del do while para que al menos se ejecute una vez
11_dowhile.cpp
*/

#include <iostream>
using namespace std;
int main (void)
{
	int i = 0, r;
	cout<<"Escribe un numero para repetir la frase: ";
	cin>>r;
	cout<<endl;
	cout<<"La frase se escribira al menos una vez aun y ";
	cout<<"cuando el numero sea 0 o negativo."<<endl;
	cout<<endl;
	do{
		i++;
		cout<<i<<": Esta es una frase a repetir"<<endl;
	}while(i<r);
	
	
	return 0;
}



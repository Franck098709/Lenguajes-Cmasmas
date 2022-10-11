//07 operadioresLogicos.c++
#include <iostream>
using namespace std;
int main ()
{
	bool p, s;
	cout<<"OPERADORES LOGICOS"<<endl;
	cout<<endl;
	cout<<"Escribe un primer valor booleano (0-1): ";
	cin>> p;
	cout<<"Escribe un segundo valor booleano (0-1): ";
	cin>> s;
	cout<<endl;
	cout<< "Los operandos capturados son: "<<endl; 
	cout<< "p = "<< p <<endl; 
	cout<< "s = "<< s <<endl<<endl;
	cout<< "OPERACIONES BASICAS: "<<endl<<endl;
	cout<< p <<" and " << s << " = " <<(p and s)<<endl;
	cout<< p <<" or " << s << " = " <<(p or s)<<endl;
	cout<< p <<" xor " << s << " = " <<(p xor s)<<endl;
	cout<< "NOT s = "<< !s <<endl;
	cout<< "NOT p = "<< !p <<endl;
	string v= "Verdadero", f= "Falso";
	cout<<endl;
	cout<< "Primer operando: "<<(p?v:f)<<endl;
	cout<< "Segundo operando: "<<(s?v:f)<<endl;
	
	return 0;
}

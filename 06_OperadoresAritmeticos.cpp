// 06 operadores aritmeticos

#include <iostream>
using namespace std;
int main ()
{
cout<<"OPERADORES ARITMETICOS"<<endl;
int a, b, c;
cout<<"escribe un numero entero: ";
cin>>a;
cout<<"Escribe otro numero entero: ";
cin>>b;

//operaciones basicas en c++
cout<<"Suma: "<< a <<" + "<< b <<" = "<< a+b <<endl;
cout<<"Resta: "<< a <<" - "<< b <<" = "<< a-b <<endl;
cout<<"Multiplicacion: "<< a <<" * "<< b <<" = "<< a*b <<endl;
cout<<"Division: "<< a <<" / "<< b <<" = "<< a/b <<endl;
cout<<"Modulo: "<< a <<" % "<< b <<" = "<< a%b <<endl;

//operadores de Asginacion compuesta o contraccion para no perder el valor de los valores iniciales los copiamos en una nueva variable */
c=a; c+=b; cout<< " a +=b ; a= "<< c <<endl;
c=a; c-=b; cout<< " a -=b ; a= "<< c <<endl;
c=a; c*=b; cout<< " a *=b ; a= "<< c <<endl;
c=a; c/=b; cout<< " a /=b ; a= "<< c <<endl;
c=a; c%=b; cout<< " a %=b ; a= "<< c <<endl;

//*Incremento y decremento */
cout<< <<endl;
c=a; cout<< "++a * b= "<< ++c * b<<" ;a = " << c << endl; //preincremento
c=a; cout<< "a++ * b= "<< c++ * b<<" ;a = " << c << endl; //pos incremento
c=a; cout<< "--a * b= "<< --c * b<<" ;a = " << c << endl; // pre incremento
c=a; cout<< "a-- * b= "<< c-- * b<<" ;a = " << c << endl; // pos incremento
return 0;
}


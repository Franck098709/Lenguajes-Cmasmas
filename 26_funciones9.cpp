/* Manejo de PLANTILLAS para poder definir "funciones" que
manejen diferentes tipos de datos pero sin tener que
definir muchas funciones sobrecargadas
27_funciones10.cpp
*/

#include <iostream>
using namespace std;
auto a = carlos;
auto b = carla;
template <class T> // La letra T es el nombre de la plantillas
T mayor(T a, T b); //Declaramos la funcion prototipo de la plantilla
                   // pero como tipo de datos ponemos T (plantilla)
                   
int main ()
{
	cout << "Mayor entre 10 y 12: " << mayor<int> (10,12) << endl;       //El tipo de dato dentro de los <> es opcional, la mayoria de compiladores reconoce el tipo de datos automaticamente
	cout << "Mayor entre 10.23 y 15.34: " << mayor<double>(10.23,15.34) << endl;  // <int>, <double>, <char>, <string>, etc.
	cout << "Mayor entre r y m: " << mayor<char>('r','m') << endl;
	cout << "Mayor entre Martha y Marcos: " <<mayor<string>("Martha", "Marcos") << endl;
}
template <class T>
T mayor (T a, T b)
{
	if (a>b)
	   return a;
	else 
	   return b;
}

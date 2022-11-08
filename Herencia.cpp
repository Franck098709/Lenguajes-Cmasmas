// Herencia de clases
// herencia.cpp

#include <iostream>
using namespace std;

class Operacion {
	protected: //permite que sus atributos sean accesibles por una subclase
	    int valor1;
	    int valor2;
	    int resultado;
	public: //existen 3 metodos de la clase Operacion 
		void cargar1();
		void cargar2();
		void mostrarResultado();
};
//Una clase puede heredar los atributos de otra clase (padre) convirtiendose automaticamente en subclase, por lo tanto todos los metodos de la clase Operacion serán metodos de la clase suma.

class Suma: public Operacion{ //es una subclase
	public:
		void operar();
};

class Resta: public Operacion{ //otra subclase con 4 metodos (3 heredados y 1 propio)
	public:
		void operar();
};

//definir los metodos para que tengan una funcionalidad
void Operacion::cargar1() //definicion del primer metodo de la clase Operacion
{
	cout <<"Ingrese el primer valor: ";
	cin >> valor1;
}

void Operacion::cargar2()
{
	cout <<"Ingrese el segundo valor: ";
	cin >> valor2;
}

void Operacion::mostrarResultado()
{
	cout << endl << "El resultado de la Operacion es: " << resultado <<endl<<endl;
}

void Suma::operar()
{
	resultado = valor1 + valor2; //Esta caracteristica la agrega la clase suma junto con lo que heredo de la clase padre
}

void Resta::operar()
{
	resultado = valor1 - valor2; 
}

int main()
{
	Suma suma1;
	suma1.cargar1();
	suma1.cargar2();
	suma1.operar();
	suma1.mostrarResultado();
	Resta resta1;
	resta1.cargar1();
	resta1.cargar2();
	resta1.operar();
	resta1.mostrarResultado();
}



#include <iostream>
using namespace std;

class Persona {
	protected:
		char nombre [40];
		int edad;
	public:
		void cargarDatosPersonales();
		void imprimirDatosPersonales();
};

class Empleado: public Persona{
	private:
		float sueldo;
	public: 
	    void cargarSueldo();
	    void imprimirSueldo();
};

void Persona::cargarDatosPersonales()
{
	cout << endl << "Ingrese el nombre del empleado: ";
	cin.getline(nombre,40);
	cout << "Ingrese la edad del empleado: ";
	cin >> edad;
	cin.get();
}

void Persona::imprimirDatosPersonales()
{
	cout << endl << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
}

void Empleado::cargarSueldo()
{
	cout << "Ingrese el sueldo del empleado: ";
	cin >> sueldo;
}

void Empleado::imprimirSueldo()
{
	cout << "Sueldo: " << sueldo << endl;
}

int main(){
	Persona persona1;
	persona1.cargarDatosPersonales();
	persona1.imprimirDatosPersonales();
	
	Empleado empleado1;
	empleado1.cargarDatosPersonales();
	empleado1.cargarSueldo();
	empleado1.imprimirDatosPersonales();
	empleado1.imprimirSueldo();
}

#include <iostream>
#include <stdlib.h>
using namespace std;

int num1, num2, opcion;

char letra (char n, char L);

template <class F>
F Suma(F a, F b);

int main ()
{
	do{
	    cout << "Teclee la opcion del menu de su preferencia" << endl<<endl;
		cout << "1- Capturar letras en minusculas e imprimirlas en mayuscula" << endl;
		cout << "2- Capturar caracteres hasta que aparezca un numero" << endl;
		cout << "3- Capturar nombres de personas e imprimirlos desde el programa" << endl;
		cout << "4- Capturar dos valores (0-1), aplicar or e indicar si el resultado es verdadero o falso" << endl;
		cout << "5- Capturar 10 valores e imprimirlos en forma de traingulo" <<endl;
		cout << "6- Capturar dos caracteres, mediante una plantilla sumarlos, como enteros y como caracteres" << endl;
		cout << "7- Salir" << endl<<endl;
		cin >> opcion;
		if (opcion == 1)
		{
			system ("cls");
			char n, L;
			cout << "Capturar letras en minusculas e imprimirlas en mayuscula" << endl<<endl;
			cout << "Capture la letra de su preferencia en minusculas" << endl;
			cin >> L;
			if (L<97 or L>122)
	        {
	        cout << endl;
		    cout << "No es una letra minuscula" << endl<<endl;
        	}
        	else if (L>97 or L<122){
			n=letra(n, L);
			cout << endl;
			cout << L << " = " << n << endl<<endl;	
			system ("pause");
			system ("cls");
		    }
		}
		else if (opcion == 2)
		{
			system ("cls");
			char n, L;
			cout << "Capturar caracteres hasta que aparezca un numero"<<endl<<endl;
			do {
			cout << "Ingrese una letra, el programa terminara hasta que ingrese un numero" << endl;
			cin >> L;
			cout << endl;
		      } while (L<47 or L>57);	
		      system ("pause");
		      system ("cls");
	 	}
	 	else if (opcion == 3)
	 	{
	 	system ("cls");
	 	int i = 0;
	 	int num;
	 	string nombres [1000];
		cout << "Capturar nombres de personas e imprimirlos desde el programa principal"<<endl<<endl;
		cout << "¿Cuantos nombres quiere ingresar?: ";
		cin >> num;
		cout <<endl;
		cout << "Ingrese " << num << " nombres: " <<endl<<endl;
		while (i<num)
		{

			cin >> nombres[i];
			i++;
		}
		cout << endl << "Los nombres son: "<<endl<<endl;
		for (i=0;i<num; i++)
		{
			cout << nombres[i]<<endl;
		}
			system ("pause");
			system ("cls");
	 	
		}
	 	else if (opcion == 4)
	 	{
	 		 system ("cls");
	 	     int a, b;
	 	     cout << "Capturar 2 valores, aplicar or y comprobar si la operacion es falsa o verdadera"<<endl<<endl;
	 	     do{
	 	     	cout << "Ingrese el primer valor entre 1 y 0: ";
	 	        cin >> a; 
	 	     if (a!=1 and a!= 0)
	 	        {
	 	         cout <<endl<< "Valor incorrecto, intente de nuevo"<<endl<<endl;	
			    }
			 }while (a!=1 and a!=0);
			 do{
			 	cout << endl <<"Ingrese el segundo valor entre 1 y 0: ";
	 	        cin >> b; 
	 	        cout <<endl;
	 	     if (b!=1 and b!= 0)
	 	        {
	 	         cout <<endl<< "Valor incorrecto, intente de nuevo"<<endl<<endl;	
			    }
			 }while (b!=1 and b!=0);
			 cout << "Los valores ingresados son " << a << " y " << b <<endl;
		     cout << "Segun la tabla de verdad de or: " << a <<" or " << b << " = " <<(a or b)<<endl<<endl;
		     system ("pause");
		     system ("cls");
		}
		else if (opcion == 5)
		{
		system ("cls");
		string numeros [10];
		int i = 0;
		cout << "Capturar 10 numeros e imprimirlos en forma de triangulo"<<endl<<endl;
		cout << "Ingrese los 10 valores: "<<endl<<endl;
		while (i<10)
		{
		cin >> numeros [i];
		i++;
	    }
	    cout << endl;
	    for (i=0; i < 10; i++)
	    {
	    	cout << " ";
	    	if (i==1)
	    	{
	    		cout << endl<<endl;
			}
			cout << " ";
			if (i==3)
			{
				cout <<endl<<endl;
			}
			cout << " ";
			if (i==6)
			{
				cout <<endl<<endl;
			}
	    	cout << numeros [i]<< "";	
		}
		cout <<endl;	
		system ("pause");
		system ("cls");
		}
		else if (opcion == 6)
		{
			system ("cls");
			char a, b;
			cout << "Capturar 2 caracteres, mediante una plantilla sumarlos, como enteros de su codigo ascii y como caracter"<<endl<<endl;
			cout << "Unicamente seran tomados en cuenta los primeros caracteres que usted ingrese, ya sea en el mismo renglon o en el siguiente"<<endl<<endl;
			cout << "Ingrese el valor de A: ";
			cin  >> a;
			if (a > 255)
			cout << "Valor incorrecto, intente de nuevo";
			cout << "Ingrese el valor de B: ";
			cin >> b;
			cout << endl;
			cout << "Suma de a + b como caracter: " <<Suma<char> (a,b) << endl;	
			cout << "Suma de a + b como entero: " <<Suma<int> (a,b) << endl<<endl;
			system ("pause");
		    system ("cls");
		}
		else if (opcion == 7)
		{
			cout << endl<< "Gracias por usar el programa :D"<<endl<<endl;
			system ("pause");
		}
	} while (opcion !=7);
}

char letra (char n, char L)
{	
      	n = L - 32;
	    return n;
}

template <class F>
F Suma(F a, F b)
{
	return a + b;
}

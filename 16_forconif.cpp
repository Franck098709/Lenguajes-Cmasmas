/* estructura for dentro de if´s
16_forenIF.cpp
*/

#include <iostream>
using namespace std;

int main ()
{
	char c;
	int j = 1;
	cout << "Pulsa S para MAYUSCULAS o N para minusculas: ";
	cin>>c;
	if (c=='s' or c== 'S')
	{
		for (int i=65; i<=90; i++)
		{
			cout << char (i);
			if (i==90) continue;
			cout << ", ";
			if (j%5==0)
			cout<<endl;
			j++;
		}
	}
	else if (c=='N' or c=='n')
	{
		for (int i=97; i<=122;i++)
		{
			cout << char (i);
			if (i==122) continue;
			cout << ", ";
			if (j%5==0)
			cout<<endl;
			j++;
		}
	}
	else
	{
		cout << "No has ingresado ni S ni N";
	}
	cout<<endl;
	return 0;
}

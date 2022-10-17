/*Uso del break
13_usoBreak.cpp
*/

#include <iostream>
using namespace std;

int main()
{
	int n=6, i=1;
	while (i<=10)
	{
		cout<< n << " x "<< i << " = " << n*i <<endl;
		if (i==5) 
		break;
		i++;
	}
	return 0;
}

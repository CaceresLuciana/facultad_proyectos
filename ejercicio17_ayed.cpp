//============================================================================
// Name        : ejercicio17_ayed.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Ingrese tres valores numericos" << endl;

	int a,b,n;
	cin >> a >> b >> n;


   int i=0;
   int e=0;

   while (i<=n)
   {
      e=e+a;
      if (e%b!=0)
      {
        i=i+1;
      }
   }

   cout << "El n-esimo m�ltiplo de " << a << " que no es m�ltiplo de " << b << " es " << e << endl;

	return 0;
}

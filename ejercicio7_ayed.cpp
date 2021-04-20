//============================================================================
// Name        : ejercicio7_ayed.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {



  cout<<"Ingrese 3 numeros, que represente una longitud : ";
   int a,b,c;
   cin>>a>>b>>c;

   if(  a == b && b!=c )
   {     cout<<"Es un triangulo Isósceles "<<endl; }
   if(  a == c && c!=b )
     {     cout<<"Es un triangulo Isósceles "<<endl; }
   if(  b == c && c!=a )
       {     cout<<"Es un triangulo Isósceles "<<endl; }


   if(  a!=c and a!=b)

       { if(b!=c)
       {
          cout<<"Es un triangulo Escaleno "<<endl;
       }
      }


 if(  a == b && b==c )
        {     cout<<"Es un triangulo Equilatero "<<endl; }
	return 0;
}

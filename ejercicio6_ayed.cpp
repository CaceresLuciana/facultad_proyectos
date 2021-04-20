//============================================================================
// Name        : ejercicio6_ayed.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
//int a,b,c;
//        cout<< "Ingrese un valor numerico entero "<< endl;
//       cin>>a;
//       cout<< "Ingrese un segundo valor numerico entero "<< endl;
//       cin>>b;
//       cout<< "Ingrese un tercer valor numerico entero "<< endl;
//       cin>>c;
//       if ( (a>b) & (a>c) )
//             {
//               if (b>c)
//               cout<< "El numero mayor es " <<a<< "," <<b<< " es el numero del medio " << " y " <<c<< " es el numero mas chico."<<endl;
//               if (c>b)
//               cout<< "El numero mayor es " <<a<< "," <<c<< " es el numero del medio " << " y " <<b<< " es el numero mas chico."<<endl;
//             }
//        if ( (b>a) & (b>c) )
//        {
//           if (a>c)
//           cout<< "El numero mayor es " <<b<< "," <<a<< " es el numero del medio " << " y " <<c<< " es el numero mas chico."<<endl;
//           if (c>a)
//           cout<< "El numero mayor es " <<b<< "," <<c<< " es el numero del medio " << " y " <<a<< " es el numero mas chico."<<endl;
//        }
//
//        if ( (c>a) & (c>b))
//        {
//           if (a>b)
//              cout<< "El numero mayor es: " <<c<< "," <<a<< " es el numero del medio " << " y " <<b<< " es el numero mas chico."<<endl;
//           if (b>a)
//           cout<< "El numero mayor es: " <<c<< "," <<b<< " es el numero del medio " << " y " <<a<< " es el numero mas chico."<<endl;
//
//        }
int main() {

   cout << " --  Ingresar tres valores numericos enteros diferentes -- " ;
   int num1;
   int num2;
   int num3;
   cin >> num1 >> num2 >> num3 ;

   if( num1 > num2 && num1 > num3)
   {
      if (num2 > num3)
      {
      cout << "Numero mayor " << num1 << endl;
      cout << "Numero medio " << num2 << endl;
      cout << "Numero menor " << num3 << endl;
      }
      else
      {
         cout << "Numero mayor " << num1 << endl;
         cout << "Numero medio " << num3 << endl;
         cout << "Numero menor " << num2 << endl;

      }
   }
   if( num2 > num1 && num2 > num3)
     {
        if (num1 > num3)
        {
        cout << "Numero mayor " << num2 << endl;
        cout << "Numero medio " << num1 << endl;
        cout << "Numero menor " << num3 << endl;
        }
        else
        {
           cout << "Numero mayor " << num2 << endl;
           cout << "Numero medio " << num3 << endl;
           cout << "Numero menor " << num1 << endl;

        }
     }
   if( num3 > num1 && num3 > num2)
     {
        if (num1 > num2)
        {
        cout << "Numero mayor " << num3 << endl;
        cout << "Numero medio " << num1 << endl;
        cout << "Numero menor " << num2 << endl;
        }
        else
        {
           cout << "Numero mayor " << num3 << endl;
           cout << "Numero medio " << num2 << endl;
           cout << "Numero menor " << num1 << endl;

        }
     }

	return 0;
}

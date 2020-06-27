#include "iostream"
#include "cmath"
#include "math.h"
#include "string"
#include "stdlib.h"
using namespace std;



char palabra[100];

void clavemurcielago()
{

int i;

cout << "Introduzca la palabra o palabras a codificar" << endl;

cin.getline (palabra, 100);


for (i=0; i<=100; i++)
{
switch (palabra[i])
{
    case 'm':
   palabra[i] = 49;
    break;
    case 'u':
   palabra[i] = 50;
    break;
    case 'r':
   palabra[i] = 51;
    break;
    case 'c':
   palabra[i] = 52;
    break;
    case 'e':
   palabra[i] = 53;
    break;
    case 'l':
   palabra[i] = 54;
    break;
    case 'a':
   palabra[i] = 55;
    break;
    case 'g':
   palabra[i] = 56;
    break;
    case 'o':
   palabra[i] = 57;
    break;

    default:
    palabra[i]=palabra[i];
}   
cout << palabra;
}
}


int main ()
{
 
clavemurcielago();
return 0;
}




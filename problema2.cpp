#include "iostream"
#include "cmath"
#include "math.h"
#include "string"
#include "stdlib.h"
using namespace std;

int main()
{

int  i;
float alturas[25], prom, suma = 0 , com, a = 0, b = 0;


cout << "Introduzca las alturas de los 25 alumnos: " << endl;

for (i=0; i<25; i++)
{

cin >> alturas[i];

suma = suma + alturas[i];

}

prom = suma / 25;

for (i=0; i<25; i++)
{

com = alturas[i] > prom? 0: 1;

if (com == 0)
{

a++;

}

else
{

b++;

}

}

cout << "El promedio es de: " << prom << ", hay " << a << " alturas mayores al promedio y " << b << " menores al promedio";

}

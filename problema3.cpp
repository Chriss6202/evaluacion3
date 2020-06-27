#include "iostream"
#include "cmath"
#include "math.h"
#include "string"
#include "stdlib.h"
using namespace std;

int main()
{
float alumnos, notas[5], prom, apro;
int i, n, j;
n = 0;
cout << "Introduzca el numero de alumnos a los que se les calculara la nota: " << endl;
cin >> alumnos;

for (j=0; j < alumnos; j++)
{
n = n + 1;
cout << "Introduzca las notas del alumno numero " << n << endl;
for (i=0; i<5; i++)   
{
cin >> notas[i];
prom = prom+(notas[i]*0.2);
}
apro = prom>6? 1:0;
if (apro == 1)
{
cout << "El alumno numero " << n << " aprobo con una nota de " << prom << endl << endl;
}
if (apro == 0)
{cout << "El alumno numero " << n << " reprobo con una nota de " << prom << endl << endl;
}
prom = 0;
}

}
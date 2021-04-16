#include <iostream>

using namespace std;
int main() {
  float base=0; /*Variable en la cual se tomara el valor de la base 
                  del triangulo, se elegio el uso de la variable tipo float por si tamaño de la base lleva punto decimal 
                 */
  float altura=0; /*  Variable en la cual se tomara el valor de la                    altura del triangulo, se elegio el uso de la                        variable tipo float por si tamaño de la alura
                  lleva punto decimal
                  */ 
  float area=0; /* Variable donde se guardara el resultado de la                      operación del area. Es de tipo float debido a que                   se guardara el resultado de una división.
                  */

  cout <<"Digite el valor de la base del triangulo\n";
  cin >>base;
  
  cout <<"Digite el valor de la altura del triangulo\n";
  cin >>altura;

  area=(base*altura)/2;

  cout << "El area del triangulo es: "<<area;
  

  
 
}
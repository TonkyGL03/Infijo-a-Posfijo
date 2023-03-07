#include <iostream>
#include "Cola.hpp"
#include "stack.hpp"
#include <string>

#include "Convertidor_de_notacion_postfija.hpp"
using namespace std;
int main(){

    string notacion;
    cout << "Bienvenido al convertidor de notacion infija a posfija" << endl;
    cout << "Ingrese su notacion en infijo: ";
    cin>>notacion;
    PostfixNotation a(notacion);
    cout<<a.initialize();


return 0;
}

#include <iostream>
#include "Definiciones.h"
#include "CJunior.h"
#include "CSenior.h"

using namespace std;

int main(){
  TipoNumerico tarifa_horas, num_acciones, precio_accion; 
  EnteroSinSigno opcion, horas_extra;
  EnteroLargo codigo; 
  TipoCadena nombre, apellido; 
  CAnalista *pUnAnalista = nullptr;

 do
  {
    cout << "Seleccione el tipo de analista a evaluar:\n";
    cout << "1. Analista Senior\n";
    cout << "2. Analista Junior\n";
      cout << ">> Ingresa el tipo: ";
      cin >> opcion;
  }while( opcion<1 || opcion>2);

  switch(opcion){
    case 1:
      cout << "****DATOS REQUERIDOS****\n\n";
      cout << "- Código de empleado: ";
      cin >> codigo;
      cout << "- Nombre (solo primer nombre): ";
      cin >> nombre; 
      cout << "- Apellido (solo primer apellido): ";
      cin >> apellido; 
      cout << "- Horas extra: ";
      cin >> horas_extra;
      cout << "- Tarifa por horas extra: ";
      cin >> tarifa_horas; 
      cout << "- Número de acciones: ";
      cin >> num_acciones;
      cout << "- Precio por acción: ";
      cin >> precio_accion; 
      cout << "*************************";
      pUnAnalista = new CSenior(codigo, nombre, apellido, horas_extra, tarifa_horas, num_acciones, precio_accion);
      break;
    case 2:
      cout << "****DATOS REQUERIDOS****\n\n";
      cout << "- Código de empleado: ";
      cin >> codigo;
      cout << "- Nombre (solo primer nombre): ";
      cin >> nombre; 
      cout << "- Apellido (solo primer apellido): ";
      cin >> apellido; 
      cout << "- Horas extra: ";
      cin >> horas_extra;
      cout << "- Tarifa por horas extra: ";
      cin >> tarifa_horas; 
      cout << "*************************";
      pUnAnalista = new CJunior(codigo, nombre, apellido, horas_extra, tarifa_horas);
      break;
  }

cout << "\n>>> El sueldo a pagar será: " << pUnAnalista->SueldoNeto() << "\n";

return 0; 
}

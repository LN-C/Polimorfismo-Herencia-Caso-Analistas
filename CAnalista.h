#include "Definiciones.h"

using namespace std; 

class CAnalista
{
  protected: 
    EnteroLargo n_codigo;
    TipoCadena n_nombre, n_apellido;
    TipoNumerico n_sueldo_b = 930.00;
    TipoNumerico n_tarifa_horas;
    EnteroSinSigno n_horas_extra;
  public: 
    CAnalista(){}
    CAnalista(EnteroLargo n_codigo, TipoCadena n_nombre, TipoCadena n_apellido, EnteroSinSigno n_horas_extra, TipoNumerico n_tarifa_horas);
    virtual ~CAnalista(){}

    EnteroLargo getCodigo(){return n_codigo;}
    TipoCadena getNombre(){return n_nombre;}
    TipoCadena getApellido(){return n_apellido;}
    TipoNumerico getSueldoB(){return n_sueldo_b;}
    TipoNumerico getTarifaHoras(){return n_tarifa_horas;}
    EnteroSinSigno getHorasExtra(){return n_horas_extra;}

    TipoNumerico SueldoNeto();
    virtual TipoNumerico Bonificacion()=0;
    virtual TipoNumerico Descuento()=0;
};

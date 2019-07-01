#include "Definiciones.h"
#include "CAnalista.h"

class CSenior:public CAnalista
{
  private:
    EnteroSinSigno n_num_acciones; 
    TipoNumerico n_precio_accion; 
  public: 
    CSenior() {};
    CSenior(EnteroLargo codigo, TipoCadena nombre, TipoCadena apellido, EnteroSinSigno horas_extra, TipoNumerico tarifa_horas, EnteroSinSigno num_acciones, TipoNumerico precio_accion);
    virtual ~CSenior(){};

    EnteroSinSigno getNumAcciones(){return n_num_acciones;}
    TipoNumerico getPrecioAccion(){return n_precio_accion;}

    TipoNumerico Bonificacion() override;
    TipoNumerico Descuento() override; 
};

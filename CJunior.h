#include "Definiciones.h"
#include "CAnalista.h"

class CJunior:public CAnalista
{
  public: 
    CJunior() {};
    CJunior(EnteroLargo codigo, TipoCadena nombre, TipoCadena apellido, EnteroSinSigno horas_extra, TipoNumerico tarifa_horas);
    virtual ~CJunior(){};

    TipoNumerico Bonificacion() override;
    TipoNumerico Descuento() override; 
};

#include "CJunior.h"

CJunior::CJunior(EnteroLargo codigo, TipoCadena nombre, TipoCadena apellido, EnteroSinSigno horas_extra, TipoNumerico tarifa_horas):CAnalista(codigo, nombre, apellido, horas_extra, tarifa_horas)
{
}

TipoNumerico CJunior::Bonificacion()
{
  return (n_tarifa_horas*n_horas_extra);
}

TipoNumerico CJunior::Descuento()
{
  return ((0.1*n_sueldo_b)+(0.05*n_sueldo_b));
}

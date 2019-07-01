#include "CAnalista.h"

CAnalista::CAnalista(EnteroLargo codigo, TipoCadena nombre, TipoCadena apellido, EnteroSinSigno horas_extra, TipoNumerico tarifa_horas)
{
  n_codigo = codigo;
  n_nombre = nombre;
  n_apellido = apellido;
  n_tarifa_horas = tarifa_horas;
  n_horas_extra = horas_extra;
}

TipoNumerico CAnalista::SueldoNeto()
{
  return (n_sueldo_b + Bonificacion() - Descuento());
}

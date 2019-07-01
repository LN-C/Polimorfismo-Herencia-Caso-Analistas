#include "CSenior.h"

CSenior::CSenior(EnteroLargo codigo, TipoCadena nombre, TipoCadena apellido, EnteroSinSigno horas_extra, TipoNumerico tarifa_horas, EnteroSinSigno num_acciones, TipoNumerico precio_accion):CAnalista(codigo, nombre, apellido, horas_extra, tarifa_horas)
{
  n_num_acciones = num_acciones;
  n_precio_accion = precio_accion;
}

TipoNumerico CSenior::Bonificacion()
{
  return ((n_tarifa_horas*n_horas_extra)+(n_num_acciones*n_precio_accion));
}

TipoNumerico CSenior::Descuento()
{
  return (0.1*n_sueldo_b);
}

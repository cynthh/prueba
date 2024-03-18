#include "DTFecha.h"

DTFecha::DTFecha(int dia, int mes, int anio){
    this->dia=dia;
    this->mes=mes; 
    this->anio = anio;
}
int DTFecha::compararDTFechas(DTFecha fecha1, DTFecha fecha2){
	int res = 0;
    if ((fecha1 -> anio != fecha2 -> anio) || (fecha1 -> mes != fecha2 -> mes) || (fecha1 -> dia != fecha2 -> dia)){
        if ((fecha1 -> anio < fecha2 -> anio) || ((fecha1 -> anio == fecha2 -> anio) && (fecha1 -> mes < fecha2-> mes ))||
        ((fecha1 -> anio == fecha2 -> anio) && (fecha1 -> mes == fecha2 -> mes) && (fecha1 -> dia < fecha2 -> dia))){
            res = -1;
        } else 
            res = 1;
    }
    return res;
}

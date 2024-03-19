#pragma once
class DTFecha{
    private:
	    int dia, mes, anio;
    public:
        DTFecha(int dia, int mes, int anio);
        string toString();
        int compararDTFechas(DTFecha fecha1, DTFecha fecha2);
};


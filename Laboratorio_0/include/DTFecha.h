#pragma once
class DTFecha{
    private:
	    int dia, mes, anio;
    public:
        DTFecha(int dia, int mes, int anio);
        int getDia();
        void setDia(int dia);
        int getMes();
        void setMes(int mes);
        int getAnio();
        void setAnio(int anio);
};


// Autor:     Antonio Carrillo Ledesma.
// R.F.C.:    CAAN-691229-TV5
// Direcci�n: Amsterdam 312 col. Hip�dromo Condesa
// Tel�fono:  5-74-43-53

// Propiedad intelectual, todos los derechos reservados conforme a la ley, registro en tr�mite
// Revisi�n  1.0-A


#ifndef __FECHORA_HPP__
#define __FECHORA_HPP__

#include "..\libreria\fechas.hpp"
#include "..\libreria\tiempo.hpp"


class Fechas_Horas: public Fechas, public Tiempo
{

    private:
    

    public:

            // Retorna la fecha y hora actuales escrita con el sigiente formato:
            // Si T_P es (0) el formato es:
            //    Si ID es (1) el formato es [DD DE MMMMMMMM DE CCAA HH:MM:SS P.M.] en espa�ol
            //    Si ID es (0) el formato es [DD OF MMMMMMMM OF CCAA HH:MM:SS P.M.] en ingles
            // Si T_P es (1) el formato es:
            //    Si ID es (1) el formato es [DDDDDDDD DD DE MMMMMMMM DE CCAA HH:MM:SS P.M.] en espa�ol
            //    Si ID es (0) el formato es [DDDDDDDD DD OF MMMMMMMM OF CCAA HH:MM:SS P.M.] en ingles
       void Fecha_y_hora(char *cad, const unsigned int t_p, const unsigned int id);
    

};


#endif 


/*
  @file queries.c
  @brief Consultas sobre tablas de datos climáticos.
*/
#include <limits.h>
#include "queries.h"

/**
 * @brief Dado un año, calcula para cada mes de ese año la máxima precipitación
 * en un día.
 *
 * @param a Tabla de datos climáticos
 * @param year Año, entre FST_YEAR (1980) y LST_YEAR (2016)
 * @param output Arreglo de salida
 */
void max_daily_rainfall(WeatherTable a, int year, int output[MONTHS]) {
    
    for (int month = 0; month<MONTHS;month++) {
        unsigned int max_rain = 0;
        for (int day = 0; day<DAYS; day++){
            if (a[year-FST_YEAR][month][day]._rainfall>max_rain) {
                max_rain = a[year-FST_YEAR][month][day]._rainfall;
                }
            }
        output[month] = max_rain;
    }

}

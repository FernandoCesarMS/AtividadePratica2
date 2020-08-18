#include <iostream>

class Tempo
{
private:
    int dia;  // Numero de dias
    int hora; // Numero de horas
    int min;  // Numero de minutos
    int seg;  // Numero de segundos

public:
    // Contrutores
    Tempo();
    Tempo(int dia);
    Tempo(int dia, int horas);
    Tempo(int dia, int horas, int min);
    Tempo(int dia, int horas, int min, int seg);
    // Destrutor
    ~Tempo();

    // Outros metodos
};
#include <iostream>

using namespace std;
class Tempo
{
private:
    int dia;  // Numero de dias
    int hora; // Numero de horas
    int min;  // Numero de minutos
    int seg;  // Numero de segundos

public:
    // Contrutores, resposta da b)
    Tempo();
    Tempo(int);
    Tempo(int, int);
    Tempo(int, int, int);
    Tempo(int, int, int, int);

    // basic getters, respostas da d)
    int getDia() const;
    int getHora() const;
    int getMin() const;
    int getSeg() const;
    void getTempo();

    //basic setters, respostas da d)
    void setDia(int);
    void setHora(int);
    void setMin(int);
    void setSeg(int);

    // Outros metodos
    void verifyAttributes(); // Função referente a letra a)
    void sumTempo(Tempo); // Função referente a letra c)
    void increaseSecond();
};
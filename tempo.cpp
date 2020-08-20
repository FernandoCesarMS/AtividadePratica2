#include "tempo.h"

//Construtor default - iniciar tudo com 0
Tempo::Tempo()
{
    dia = 0;
    hora = 0;
    min = 0;
    seg = 0;
}

//Construtor com um parametro - inicia dia e o resto tudo 0
Tempo::Tempo(int Dia)
{
    dia = Dia;
    hora = 0;
    min = 0;
    seg = 0;
}

//Construtor com dois parametros - inicia dia e horas e o resto tudo 0
Tempo::Tempo(int Dia, int Hora)
{
    dia = Dia;
    hora = Hora;
    min = 0;
    seg = 0;
    this->verifyAttributes();
}

//Construtor com tres parametros - inicia dia, horas e min, o resto tudo 0
Tempo::Tempo(int Dia, int Hora, int Min)
{
    dia = Dia;
    hora = Hora;
    min = Min;
    seg = 0;
    this->verifyAttributes();
}

// Construtor com quatro parametros - inicia todas as variaveis
Tempo::Tempo(int Dia, int Hora, int Min, int Seg)
{
    dia = Dia;
    hora = Hora;
    min = Min;
    seg = Seg;
    this->verifyAttributes();
}
void Tempo::verifyAttributes()
{
    if (this->seg >= 60)
    {
        this->min += this->seg / 60;
        this->seg = this->seg % 60;
    }
    if (this->min >= 60)
    {
        this->hora += this->min / 60;
        this->min = this->min % 60;
    }
    if (this->hora >= 24)
    {
        this->dia += this->hora / 24;
        this->hora = this->hora % 24;
    }
}
void Tempo::sumTempo(Tempo Tempo){
    this->dia += Tempo.getDia();
    this->hora += Tempo.getHora();
    this->min += Tempo.getMin();
    this->seg += Tempo.getSeg();
    this->verifyAttributes();
}
void Tempo::increaseSecond(){
    this->seg++;
    this->verifyAttributes();
}
int Tempo::getDia() const
{
    return dia;
}
int Tempo::getHora() const
{
    return hora;
}
int Tempo::getMin() const
{
    return min;
}
int Tempo::getSeg() const
{
    return seg;
}
void Tempo::getTempo()
{
    cout << "\nDias: " << this->getDia();
    cout << "\nHoras: " << this->getHora();
    cout << "\nMinutos: " << this->getMin();
    cout << "\nSegundos: " << this->getSeg();
}
void Tempo::setDia(int Dia)
{
    dia = Dia;
}
void Tempo::setHora(int Hora)
{
    hora = Hora;
    this->verifyAttributes();
}
void Tempo::setMin(int Min)
{
    min = Min;
    this->verifyAttributes();
}
void Tempo::setSeg(int Seg)
{
    seg = Seg;
    this->verifyAttributes();
}
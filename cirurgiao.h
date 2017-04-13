#ifndef CIRURGIAO_H_INCLUDED
#define CIRURGIAO_H_INCLUDED
#include "medico.h"

class Cirurgiao: public Medico {
private:
   string nome, espec, atend = "O cirurgiao atende as SEGUNDAS e QUARTAS, das 10h as 17h.";
   float altura, peso;

public:
    Cirurgiao (string n, float a, float p, string e);
    void setEspec (string e);
    string getEspec();
    string getAtend();

};
#endif // CIRURGIAO_H_INCLUDED

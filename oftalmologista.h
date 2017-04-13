#ifndef OFTALMOLOGISTA_H_INCLUDED
#define OFTALMOLOGISTA_H_INCLUDED
#include "cirurgiao.h"

class Oftalmo: public Cirurgiao {
private:
   string nome, espec, atend = "O oftalmo atende as TERCAS e QUARTAS, das 09h as 15h.";
   float altura, peso;

public:
    Oftalmo (string n, float a, float p, string e);
    /*void setEspec (string e);
    string getEspec();
    string getAtend();*/
};
#endif // OFTALMOLOGISTA_H_INCLUDED

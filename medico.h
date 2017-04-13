#ifndef MEDICO_H_INCLUDED
#define MEDICO_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

class Medico {
private:
    string nome;
    float altura, peso;

public:
    Medico(){}
    Medico(string n, float a, float p);
    void setNome(string n);
    void setAltura(float a);
    void setPeso(float p);
    string getNome();
    float getAltura();
    float getPeso();
};
#endif // MEDICO_H_INCLUDED

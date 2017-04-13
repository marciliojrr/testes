#include "medico.h"

Medico::Medico(string n, float a, float p) {
    /*cout << "Digite o nome do medico:" << endl << ">> ";
    cin >> n;
    cout << "Digite a altura do medico:" << endl << ">> ";
    cin >> a;
    cout << "Digite o peso do medico:" << endl << ">> ";
    cin >> p;*/
    setNome(n);
    setAltura(a);
    setPeso(p);
}
void Medico::setNome(string n) {
    nome = n;
}
void Medico::setAltura(float a) {
    altura = a;
}
void Medico::setPeso(float p) {
    peso = p;
}
string Medico::getNome() {
    return nome;
}
float Medico::getAltura() {
    return altura;
}
float Medico::getPeso() {
    return peso;
}

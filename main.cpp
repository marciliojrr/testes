#include "medico.h"
#include "cirurgiao.h"
#include "oftalmologista.h"

int main () {
    string n, e;
    float a, p;
    int opcao;

    while (opcao != 3) {
        cout << "Digite a opcao correspondente a informacao que deseja inserir:" <<
        endl << "Medico          [1]" <<
        endl << "Cirurgiao       [2]" <<
        endl << "Oftalmologista  [3]" <<
        endl << "Sair            [4]" <<
        endl << ">> ";
        cin >> opcao;
    switch (opcao) {
        case 1:
            cout << "Nome: ";
            cin >> n;
            cout << "Altura: ";
            cin >> a;
            cout << "Peso: ";
            cin >> p;
            /*Não se pode chamar o construtor dentro de um switch se houver mais de 1 case

            Medico med(n, a, p);
            cout << endl << endl;
            cout << "Nome: " << med.getNome() <<
            endl << "Altura: " << med.getAltura() <<
            endl << "Peso: " << med.getPeso() << endl << endl;*/
            break;
        case 2:
            cout << "Nome: ";
            cin >> n;
            cout << "Altura: ";
            cin >> a;
            cout << "Peso: ";
            cin >> p;
            cout << "Especializacao: ";
            cin >> e;
            /*Cirurgiao ciru(n, a, p, e);
            cout << endl << endl;
            cout << "Nome: " << ciru.getNome() <<
            endl << "Altura: " << ciru.getAltura() <<
            endl << "Peso: " << ciru.getPeso() <<
            endl << "Especializacao: " << ciru.getEspec() << endl << endl;*/
            break;
        case 3:
            cout << "Nome: ";
            cin >> n;
            cout << "Altura: ";
            cin >> a;
            cout << "Peso: ";
            cin >> p;
            cout << "Especializacao: ";
            cin >> e;
            break;
    }
    if (opcao == 1) {
        Medico med(n, a, p);
        cout << endl << endl;
        cout << "Nome: " << med.getNome() <<
        endl << "Altura: " << med.getAltura() <<
        endl << "Peso: " << med.getPeso() << endl << endl;
        return main();
    }
    if (opcao == 2) {
        Cirurgiao ciru(n, a, p, e);
        cout << endl << endl;
        cout << "Nome: " << ciru.getNome() <<
        endl << "Altura: " << ciru.getAltura() <<
        endl << "Peso: " << ciru.getPeso() <<
        endl << "Especializacao: " << ciru.getEspec() <<
        endl << ciru.getAtend() << endl << endl;
        return main();
    }
    if (opcao == 3) {
        Oftalmo ofta(n, a, p, e);
        cout << endl << endl;
        cout << "Nome: " << ofta.getNome() <<
        endl << "Altura: " << ofta.getAltura() <<
        endl << "Peso: " << ofta.getPeso();
//        endl << "Especializacao: " << ofta.getEspec() <<
//        endl << ofta.getAtend() << endl << endl;
    }
    if (opcao == 4) {
            return 0;
    }
    }
}

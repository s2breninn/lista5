#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    int metrica1, metrica2, metrica3, soma12, soma23, soma13;

    cout << "Digite a primeira metrica: ";
    cin >> metrica1;
    cout << "Digite a segunda metrica: ";
    cin >> metrica2;
    cout << "Digite a terceira metrica: ";
    cin >> metrica3;

    soma12 = metrica1+metrica2;
    soma23 = metrica2+metrica3;
    soma13 = metrica1+metrica3;

    if (metrica1<soma23 && metrica2<soma13 && metrica3<soma12){
        cout << endl << "Tri�ngulo." << endl;

        if(metrica1 == metrica2 && metrica1 != metrica3 &&  metrica2 != metrica3 ){
            cout << "Is�sceles (Dois lados iguais e um diferente)." << endl;
        } else if(metrica1 == metrica2 && metrica2 == metrica3 && metrica1 == metrica3){
            cout << "Equil�tero (Todos os lados iguais)." << endl;
        } else if (metrica1 != metrica2 != metrica3) {
            cout << "Escaleno (Todos os lados diferente)." << endl;
        }
    } else {
        cout << endl << "Os valores fornecidos n�o correspondem a um tri�ngulo" << endl;
    }

    return 0;
}

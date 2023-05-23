#include <iostream>

using namespace std;

int main()
{
    float nota1, nota2, nota3, me, ma;

    cout << "Informe a primeira nota: ";
    cin >> nota1;
    cout << "Informe a segunda nota: ";
    cin >> nota2;
    cout << "Informe a terceira nota: ";
    cin >> nota3;
    cout << endl;

    me = (nota1+nota2+nota3)/3;
    ma = (nota1 + (nota2*2) + (nota3*3) + me)/7.0;

    if(ma>=9){
        cout << "Conceito: A.";
    } else if (7.5<=ma && ma<9){
        cout << "Conceito: B.";
    } else if (6.0<=ma && ma<7.5){
        cout << "Conceito: C.";
    } else if (4.0<= ma && ma<6.0){
        cout << "Conceito: D.";
    } else if (ma<4){
        cout << "Conceito: E.";
    }

    cout << endl << endl << "**************************" << endl;
    cout<< endl << "Media ARITMETICA: " << me;
    cout<< endl << "Media de APROVEITAMENTO: " << ma << endl;

    return 0;
}

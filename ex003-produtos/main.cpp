#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    int cod, qtd ,prazo;
    char formaPag;
    float feijao=5.36, arroz=17.38, alface=0.99, leite=4.69, pagVista, total, pagPrazo60, pagPrazo90;

    cout << "Informe o código do produto: ";
    cin >> cod;

    if(cod == 1){
        cout << endl << "+---------+" << endl;
        cout << "| Feijão  |" << endl;
        cout << "+---------+" << endl << endl;

        cout << "Qual a quantidade: ";
        cin >> qtd;

        cout << "Forma de pagamento(V - a vista / P - a Prazo): ";
        cin >> formaPag;

        if(formaPag == 'V' || formaPag == 'v'){
            cout << endl << "Forma de pagamento à vista..." << endl;
            pagVista = feijao - ((5/100.0)*feijao);
            total = pagVista * qtd;
            cout << endl << "Preço unitário: R$" << feijao;
            cout << endl << "Total com desconto: R$" << total;
        } else if (formaPag == 'P' || formaPag == 'p'){
            cout << endl << "Forma de pagamento a prazo..." << endl;
            cout << "Qual vai ser o prazo? (30 dias, 60 dias ou 90 dias): ";
            cin >> prazo;

            if(prazo == 30){
                cout << endl << "O valor permanecerá o mesmo: R$" << feijao;
            } else if (prazo == 60){
                pagPrazo60 = feijao + (4.75/100.0)*feijao;
                total = pagPrazo60 * qtd;
                cout << endl << "Preço unitário com juros: R$" << pagPrazo60;
                cout << endl << "Total com juros de 60 dias: R$" << total;
            } else if (prazo == 90){
                pagPrazo90 = feijao + (8.75/100.0)*feijao;
                total = pagPrazo90 * qtd;
                cout << endl << "Preço unitário com juros: R$" << pagPrazo90;
                cout << endl << "Total com juros de 90 dias: R$" << total;
            }
        }
    } else if (cod == 2){
        cout << endl << "+---------+" << endl;
        cout << "|  Arroz  |" << endl;
        cout << "+---------+" << endl << endl;

        cout << "Qual a quantidade: ";
        cin >> qtd;

        cout << "Forma de pagamento(V - a vista / P - a Prazo): ";
        cin >> formaPag;

        if(formaPag == 'V' || formaPag == 'v'){
            cout << endl << "Forma de pagamento à vista..." << endl;
            pagVista = arroz - ((5/100.0)*arroz);
            total = pagVista * qtd;
            cout << endl << "Preço unitário: R$" << arroz;
            cout << endl << "Total com desconto: R$" << total;
        } else if (formaPag == 'P' || formaPag == 'p'){
            cout << endl << "Forma de pagamento a prazo..." << endl;
            cout << "Qual vai ser o prazo? (30 dias, 60 dias ou 90 dias): ";
            cin >> prazo;

            if(prazo == 30){
                cout << endl << "O valor permanecerá o mesmo: R$" << arroz;
            } else if (prazo == 60){
                pagPrazo60 = arroz + (4.75/100.0)*arroz;
                total = pagPrazo60 * qtd;
                cout << endl << "Preço unitário com juros: R$" << pagPrazo60;
                cout << endl << "Total com juros de 60 dias: R$" << total;
            } else if (prazo == 90){
                pagPrazo90 = arroz + (8.75/100.0)*arroz;
                total = pagPrazo90 * qtd;
                cout << endl << "Preço unitário com juros: R$" << pagPrazo90;
                cout << endl << "Total com juros de 90 dias: R$" << total;
            }
        }
    } else if (cod == 3){
        cout << endl << "+---------+" << endl;
        cout << "| Alface  |" << endl;
        cout << "+---------+" << endl << endl;

        cout << "Qual a quantidade: ";
        cin >> qtd;

        cout << "Forma de pagamento(V - a vista / P - a Prazo): ";
        cin >> formaPag;

        if(formaPag == 'V' || formaPag == 'v'){
            cout << endl << "Forma de pagamento à vista..." << endl;
            pagVista = alface - ((5/100.0)*alface);
            total = pagVista * qtd;
            cout << endl << "Preço unitário: R$" << alface;
            cout << endl << "Total com desconto: R$" << total;
        } else if (formaPag == 'P' || formaPag == 'p'){
            cout << endl << "Forma de pagamento a prazo..." << endl;
            cout << "Qual vai ser o prazo? (30 dias, 60 dias ou 90 dias): ";
            cin >> prazo;

            if(prazo == 30){
                cout << endl << "O valor permanecerá o mesmo: R$" << alface;
            } else if (prazo == 60){
                pagPrazo60 = alface + (4.75/100.0)*alface;
                total = pagPrazo60 * qtd;
                cout << endl << "Preço unitário com juros: R$" << pagPrazo60;
                cout << endl << "Total com juros de 60 dias: R$" << total;
            } else if (prazo == 90){
                pagPrazo90 = alface + (8.75/100.0)*alface;
                total = pagPrazo90 * qtd;
                cout << endl << "Preço unitário com juros: R$" << pagPrazo90;
                cout << endl << "Total com juros de 90 dias: R$" << total;
            }
        }
    } else if (cod == 4){
        cout << endl << "+---------+" << endl;
        cout << "|  Leite  |" << endl;
        cout << "+---------+" << endl << endl;

        cout << "Qual a quantidade: ";
        cin >> qtd;

        cout << "Forma de pagamento(V - a vista / P - a Prazo): ";
        cin >> formaPag;

        if(formaPag == 'V' || formaPag == 'v'){
            cout << endl << "Forma de pagamento à vista..." << endl;
            pagVista = leite - ((5/100.0)*leite);
            total = pagVista * qtd;
            cout << endl << "Preço unitário: R$" << leite;
            cout << endl << "Total com desconto: R$" << total;
        } else if (formaPag == 'P' || formaPag == 'p'){
            cout << endl << "Forma de pagamento a prazo..." << endl;
            cout << "Qual vai ser o prazo? (30 dias, 60 dias ou 90 dias): ";
            cin >> prazo;

            if(prazo == 30){
                cout << endl << "O valor permanecerá o mesmo: R$" << leite;
            } else if (prazo == 60){
                pagPrazo60 = leite + (4.75/100.0)*leite;
                total = pagPrazo60 * qtd;
                cout << endl << "Preço unitário com juros: R$" << pagPrazo60;
                cout << endl << "Total com juros de 60 dias: R$" << total;
            } else if (prazo == 90){
                pagPrazo90 = leite + (8.75/100.0)*leite;
                total = pagPrazo90 * qtd;
                cout << endl << "Preço unitário com juros: R$" << pagPrazo90;
                cout << endl << "Total com juros de 90 dias: R$" << total;
            }
        }
    } else if (cod != 1, 2, 3, 4){
        cout << "Produto não encontrado!";
    }



    return 0;
}

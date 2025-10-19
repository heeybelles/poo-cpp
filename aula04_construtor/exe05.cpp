/*Construtor - Exercicio 05*/

#include <iostream>
using namespace std;

class Calendario {
private:
    int dia;
    int mes;
    int ano;

public:
    // Construtor
    Calendario(int d, int m, int a) {
        dia = d;
        mes = m;
        ano = a;
    }


    void setData(int d, int m, int a) {
        dia = d;
        mes = m;
        ano = a;
    }


    void avancarDia() {
        dia++;

      
        if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && dia > 31) {
            dia = 1;
            mes++;
        } else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
            dia = 1;
            mes++;
        } else if (mes == 2) { // ano bissexto simplificado
            int limite = (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0) ? 29 : 28;
            if (dia > limite) {
                dia = 1;
                mes++;
            }
        }

        if (mes > 12) {
            mes = 1;
            ano++;
        }
    }

//Imprimir a data
    void imprimir() {
        cout << (dia < 10 ? "0" : "") << dia << "/"
             << (mes < 10 ? "0" : "") << mes << "/"
             << ano << endl;
    }
};

int main() {
    
    Calendario c(18, 10, 2025);

    cout << "Data inicial: ";
    c.imprimir();

    c.avancarDia();
    cout << "Depois de avançar 1 dia: ";
    c.imprimir();

    c.setData(25, 12, 2025);
    cout << "Depois de alterar a data: ";
    c.imprimir();

    return 0;
}


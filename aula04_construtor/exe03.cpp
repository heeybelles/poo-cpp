/*Construtor - Exercicio 03*/

#include <iostream>
#include <string>
using namespace std;

class Data {
public:
    int dia, mes, ano;

    Data(int d = 1, int m = 1, int a = 2000) {
        dia = d;
        mes = m;
        ano = a;
    }

    int calcularIdade(int anoAtual) {
        return anoAtual - ano;
    }
};

class EntradaDeCinema {
private:
    int diaFilme;
    float horario;
    int sala;
    float valor;

public:
    EntradaDeCinema(int dia, float hora, int s, float v) {
        this->diaFilme = dia;
        this->horario = hora;
        this->sala = s;
        this->valor = v;
    }

    float calculaDesconto(Data nascimento, int anoAtual) {
        int idade = nascimento.calcularIdade(anoAtual);
        float valorFinal = valor;

        if (idade < 12) {
            valorFinal *= 0.5; // 50% de desconto
        }

        return valorFinal;
    }

    float calculaDesconto(Data nascimento, int anoAtual, int carteiraEstudante) {
        int idade = nascimento.calcularIdade(anoAtual);
        float valorFinal = valor;

        if (idade >= 12 && idade <= 15)
            valorFinal *= 0.6; // 40% de desconto
        else if (idade >= 16 && idade <= 20)
            valorFinal *= 0.7; // 30% de desconto
        else if (idade > 20)
            valorFinal *= 0.8; // 20% de desconto

        return valorFinal;
    }

    float calculaDescontoHorario(float valorComDesconto) {
        if (horario < 16.0) {
            valorComDesconto *= 0.9; // 10% de desconto adicional
        }
        return valorComDesconto;
    }

    void toString() {
        cout << "Dia do Filme: " << diaFilme << endl;
        cout << "Horário: " << horario << "h" << endl;
        cout << "Sala: " << sala << endl;
        cout << "Valor: R$" << valor << endl;
    }
};

int main() {

    Data nascimento(15, 8, 2014); // cliente com 11 anos (em 2025)
    EntradaDeCinema ingresso(19, 14.5, 3, 40.0);

    cout << "--- Dados do ingresso ---" << endl;
    ingresso.toString();

    float valorBase = ingresso.calculaDesconto(nascimento, 2025);
    float valorFinal = ingresso.calculaDescontoHorario(valorBase);

    cout << "\nValor final com descontos: R$" << valorFinal << endl;

    return 0;
}

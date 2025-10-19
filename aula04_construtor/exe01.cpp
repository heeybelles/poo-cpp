/*Construtor - Exercicio 01*/

#include <iostream>
#include <string>
using namespace std;

class Conta {
public:
    int numero;
    double saldo, limite;
    string nome;

    // Construtor
    Conta(int n, double s, double l, string nm) {
        this->numero = n;
        this->saldo = s;
        this->limite = l;
        this->nome = nm;
    }

   
    bool saca(double valor) {
        if (valor <= saldo + limite) {
            saldo -= valor;
            cout << "Saque de R$" << valor << " realizado com sucesso.\n";
            return true;
        } else {
            cout << "Saldo insuficiente.\n";
            return false;
        }
    }

  
    void deposita(double valor) {
        saldo += valor;
        cout << "Depósito de R$" << valor << " realizado com sucesso.\n";
    }

    
    bool transfere(Conta &destino, double valor) {
        if (saca(valor)) {
            destino.deposita(valor);
            cout << "Transferência de R$" << valor << " para " << destino.nome << " realizada.\n";
            return true;
        } else {
            cout << "Transferência não realizada.\n";
            return false;
        }
    }
};

int main() {
    Conta c1(101, 500.0, 200.0, "Duda");
    Conta c2(102, 300.0, 150.0, "Eduarda");

    cout << "\n--- Dados da conta 1 ---\n";
    cout << "Conta de: " << c1.nome
         << "\nNúmero: " << c1.numero
         << "\nSaldo: R$" << c1.saldo
         << "\nLimite: R$" << c1.limite << "\n";

    cout << "\n--- Operações ---\n";
    c1.saca(100);
    c1.deposita(50);
    c1.transfere(c2, 200);

    cout << "\n--- Situação final ---\n";
    cout << "Saldo de " << c1.nome << ": R$" << c1.saldo << endl;
    cout << "Saldo de " << c2.nome << ": R$" << c2.saldo << endl;

    return 0;
}


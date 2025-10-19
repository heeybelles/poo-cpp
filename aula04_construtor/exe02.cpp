/*Construtor - Exercicio 02*/

#include <iostream>
#include <string>
using namespace std;

class Comparavel {
private:
    int valor;

public:
    Comparavel(int vl) {
        this->valor = vl;
    }

    bool ehMaiorOuIgual(int valor2) {
        return valor >= valor2;
    }

    bool ehMenorOuIgual(int valor2) {
        return valor <= valor2;
    }

    bool ehDiferenteDe(int valor2) {
        return valor != valor2;
    }
};

int main() {
    Comparavel c(10);

    cout << boolalpha;

    cout << "Valor encapsulado: 10\n";
    cout << "É maior ou igual a 8? " << c.ehMaiorOuIgual(8) << endl;
    cout << "É menor ou igual a 15? " << c.ehMenorOuIgual(15) << endl;
    cout << "É diferente de 10? " << c.ehDiferenteDe(10) << endl;

    return 0;
}


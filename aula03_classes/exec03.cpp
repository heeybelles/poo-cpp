/*Classes-Exercicio 3*/

#include <iostream>
using namespace std;

class Estacionamento {
public:
    int dia, horaEntrada, horaSaida;

    void dados() {
        cout << "Insira o dia, hora de entrada e hora de saída:\n";
        cin >> dia >> horaEntrada >> horaSaida;
    }

    void valorFinalCalcular() {
        int tempo = horaSaida - horaEntrada;
        int resultado = tempo * 5;
        cout << "Tempo de Permanência: " << tempo << " horas" << endl;
        cout << "Valor Final: R$ " << resultado << endl;
    }
};

int main() {
    Estacionamento obj;
    obj.dados();
    obj.valorFinalCalcular();

    return 0;
}

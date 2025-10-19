/*Construtor - Exercicio 04*/

#include <iostream>
#include <string>
using namespace std;

class Aluno {
private:
    string nome;
    string matricula;
    string telefone;

public:
    // Construtor 1: inicializa valores "vazios"
    Aluno() {
        nome = "";
        matricula = "";
        telefone = "";
    }

    // Construtor 2: inicializa valores digitados pelo usuário
    Aluno(bool lerDoTeclado) {
        if (lerDoTeclado) {
            cout << "Digite o nome do aluno: ";
            getline(cin, nome);
            cout << "Digite a matrícula do aluno: ";
            getline(cin, matricula);
            cout << "Digite o telefone do aluno: ";
            getline(cin, telefone);
        }
    }

 
    static void imprimirDoisAlunos(const Aluno& a1, const Aluno& a2) {
        cout << "\n--- Aluno 1 ---\n";
        cout << "Nome: " << a1.nome << endl;
        cout << "Matrícula: " << a1.matricula << endl;
        cout << "Telefone: " << a1.telefone << endl;

        cout << "\n--- Aluno 2 ---\n";
        cout << "Nome: " << a2.nome << endl;
        cout << "Matrícula: " << a2.matricula << endl;
        cout << "Telefone: " << a2.telefone << endl;
    }
};

int main() {
    cout << "Aluno 1:\n";
    Aluno aluno1(true); 

    cin.ignore(); // limpa buffer antes de ler o próximo aluno
    cout << "\nAluno 2:\n";
    Aluno aluno2(true);

    Aluno::imprimirDoisAlunos(aluno1, aluno2);

    return 0;
}

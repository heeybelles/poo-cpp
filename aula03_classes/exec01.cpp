/*Classes - Exercicio 1*/

#include <iostream> 
using namespace std;
 
 
#include <iostream>
#include <string>
 
using namespace std;
 
class Matematica {
public:
    int a, b;
 
    void dados() {
        cout << "Digite valores para a e b: ";
        cin >> a >> b;
    }
 
    int soma() {
        return a + b;
    }
 
    int multiplicacao() {
        return a * b;
    }
 
    int sub() {
        return a - b;
    }
 
    int divisao() {
        if (b == 0) {
            cout << "Erro: Divisao por zero!\n";
            return 0; 
        }
        return a / b;
    }
};
 
int main(int argc, char** argv) {
    Matematica obj;
    
    obj.dados();
    
   
    cout << "Soma: " << obj.soma() << "\n";
    cout << "Subtracao: " << obj.sub() << "\n";
    cout << "Multiplicacao: " << obj.multiplicacao() << "\n";
    cout << "Divisao: " << obj.divisao() << "\n";
    
    return 0;
}

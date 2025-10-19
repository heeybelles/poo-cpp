//Eduarda & Luana
#include <iostream>
using namespace std;

// ===== EXEMPLO =====
float soma(float a, float b) {
    return a + b;
}
void exemplo() {
    float x, y;
    cout << "Digite dois numeros: ";
    cin >> x >> y;
    cout << "Soma = " << soma(x, y) << "\n";
    if (soma(x, y) < 0) {
        cout << "Valores negativos\n";
    }
}

// ===== EXERCICIO 1 =====
float fahrenheit(float c) {
    return ((c * 9) / 5) + 32;
}
float celsius(float f) {
    return ((f - 32) * 5) / 9;
}
void exercicio1() {
    float x;
    cout << "Digite um numero: ";
    cin >> x;
    cout << "Celsius -> Fahrenheit: " << fahrenheit(x) << "\n";
    cout << "Fahrenheit -> Celsius: " << celsius(x) << "\n";
}

// ===== EXERCICIO 2 =====
double quadrado(double n) {
    return n * n;
}
double somar(double a, double b) {
    return a + b;
}
double calcular(double x, double y) {
    return somar(quadrado(x), quadrado(y));
}
void exercicio2() {
    double vl1, vl2;
    cout << "Digite o 1° valor: ";
    cin >> vl1;
    cout << "Digite o 2° valor: ";
    cin >> vl2;
    cout << "A soma dos quadrados = " << calcular(vl1, vl2) << "\n";
}

// ===== EXERCICIO 3 =====
int calcularPrimo(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
void exercicio3() {
    int x;
    cout << "Digite um numero: ";
    cin >> x;
    if (calcularPrimo(x))
        cout << x << " eh primo\n";
    else
        cout << x << " nao eh primo\n";
}

// ===== EXERCICIO 4 =====
int bissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        return 1;
    }
    return 0;
}
void exercicio4() {
    int x;
    cout << "Digite um ano: ";
    cin >> x;
    if (bissexto(x))
        cout << x << " eh bissexto\n";
    else
        cout << x << " nao eh bissexto\n";
}

// ===== EXERCICIO 5 =====
double subtrair(double a, double b) {
    return a - b;
}
double multiplicar(double a, double b) {
    return a * b;
}
double dividir(double a, double b) {
    if (b == 0) {
        cout << "Erro: divisao por zero!\n";
        return 0;
    }
    return a / b;
}
void exercicio5() {
    double vl1, vl2;
    cout << "Digite o 1° valor: ";
    cin >> vl1;
    cout << "Digite o 2° valor: ";
    cin >> vl2;

    int opcao;
    do {
        cout << "\n-------- MENU CALCULADORA --------\n";
        cout << "1 - Soma\n";
        cout << "2 - Subtracao\n";
        cout << "3 - Multiplicacao\n";
        cout << "4 - Divisao\n";
        cout << "5 - Sair da calculadora\n";
        cout << "Opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1: cout << "Resultado: " << somar(vl1, vl2) << endl; break;
            case 2: cout << "Resultado: " << subtrair(vl1, vl2) << endl; break;
            case 3: cout << "Resultado: " << multiplicar(vl1, vl2) << endl; break;
            case 4: cout << "Resultado: " << dividir(vl1, vl2) << endl; break;
            case 5: cout << "Saindo da calculadora...\n"; break;
            default: cout << "Opcao invalida!\n";
        }
    } while (opcao != 5);
}

// ===== EXERCICIO 6 =====
int fatorial(int n) {
    int fat = 1;
    for (int i = n; i >= 1; i--) {
        fat *= i;
    }
    return fat;
}
void exercicio6() {
    int x;
    cout << "Digite um numero: ";
    cin >> x;
    cout << "Fatorial de " << x << " = " << fatorial(x) << "\n";
}

// ===== PROGRAMA PRINCIPAL =====
int main() {
    int escolha;
    do {
        cout << "\n======= MENU PRINCIPAL =======\n";
        cout << "0 - Exemplo\n";
        cout << "1 - Conversao Celsius/Fahrenheit\n";
        cout << "2 - Soma dos quadrados\n";
        cout << "3 - Numero primo\n";
        cout << "4 - Ano bissexto\n";
        cout << "5 - Calculadora (soma, sub, mult, div)\n";
        cout << "6 - Fatorial\n";
        cout << "7 - Sair\n";
        cout << "Escolha: ";
        cin >> escolha;

        switch (escolha) {
            case 0: exemplo(); break;
            case 1: exercicio1(); break;
            case 2: exercicio2(); break;
            case 3: exercicio3(); break;
            case 4: exercicio4(); break;
            case 5: exercicio5(); break;
            case 6: exercicio6(); break;
            case 7: cout << "Encerrando...\n"; break;
            default: cout << "Opcao invalida!\n";
        }
    } while (escolha != 7);

    return 0;
}

#include <bits/stdc++.h>

// Projeto Feito por Robson Ferreira

// Aluno: Robson Ferreira;
// Curso: Analise e Desenvolvimento de Sistemas;
// 1º Periodo;

using namespace std;

int main ()

{

    double num1, num2, resultado;
    string opera;

    cout << "\t\tCalculadora em C++" << endl;

    cout << endl;

    cout << "Digite o primeiro numero " << endl;
    cin >> num1;

    cout << "Digite o segundo numero " << endl;
    cin >> num2;

    cout << "Qual Operacao voce vai usar ? + - * / ? ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, opera);

    if (opera == "+")
    {
        resultado = num1 + num2;
    }
    else if (opera == "-")
    {
        resultado = num1 - num2;
    }
    else if (opera == "*")
    {
        resultado = num1 * num2;
    }
    else if (opera == "/")
    {
        resultado = num1 / num2;
    }

    cout << endl;

    cout << " O resultado da sua operacao = " << resultado;

    return 0;
}

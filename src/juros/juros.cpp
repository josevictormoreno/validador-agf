#include <iostream>
//#include <bits/stdc++.h>
#include "juros.hh"

void juros()
{
    int tempo;
    float juros;
    float capital;
    float montante;

    std::cout << '\n';
    std::cout << "_-¨-_-¨-_-¨-_-¨-_-¨-_-¨-_- Juros Compostos -_-¨-_-¨-_-¨-_-¨-_-¨-_-¨-_-¨-\n";
    std::cout << "Informe o tempo em meses: ";
    std::cin >> tempo;
    std::cout << "Informe a porcentagem de juros mensais: ";
    std::cin >> juros;
    std::cout << "Informe o capital investido: ";
    std::cin >> capital;
    montante = capital * (pow(1 + (juros / 100), tempo));
    std::cout << "\nMontante: " << montante << "\n\n\n";
    std::cout << "Digite 0 para voltar ao menu principal!";
    std::cin >> tempo;
    return;
}

void jurosComAportes()
{
    int tempo;
    float juros;
    float capital;
    float montante;

    std::cout << '\n';
    std::cout << "_-¨-_-¨-_-¨-_-¨ Juros Compostos - com aportes mensais -_-¨-_-¨-_-¨-_-¨-_\n";
    std::cout << "Informe o tempo em meses: ";
    std::cin >> tempo;
    std::cout << "Informe a porcentagem de juros mensais: ";
    std::cin >> juros;
    std::cout << "Informe o capital mensal investido: ";
    std::cin >> capital;
    montante = capital * ((pow(1 + (juros / 100), tempo)) - 1) / (juros / 100);
    std::cout << "\nMontante: " << montante << "\n\n\n";
    std::cout << "Digite 0 para voltar ao menu principal!";
    std::cin >> tempo;
    return;
}

void jurosAlterado()
{
    int tempo[3];
    float juros[3];
    float capital[3];
    float montante = 0;

    std::cout << '\n';
    std::cout << "_-¨-_-¨-_-¨-_-¨ Juros Compostos - com alteração na renda ¨-_-¨-_-¨-_-¨-_\n";
    for (int i = 0; i < 3; i++)
    {
        std::cout << "informe o " << i + 1 << "º tempo em meses: ";
        std::cin >> tempo[i];
        std::cout << "informe o " << i + 1 << "º juros: ";
        std::cin >> juros[i];
        std::cout << "informe o " << i + 1 << "º capital: ";
        std::cin >> capital[i];
        montante += capital[i] * ((pow(1 + (juros[i] / 100), tempo[i])) - 1) / (juros[i] / 100);
    }

    std::cout << "\nMontante: " << montante << "\n\n\n";
    std::cout << "Digite 0 para voltar ao menu principal!";
    std::cin >> tempo[1];
    return;
}

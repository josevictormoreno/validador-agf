#include <iostream>
#include <bits/stdc++.h>
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
    montante =  capital * (pow(1 + (juros/100), tempo));
    std::cout << "\nMontante: " << montante << "\n\n\n";
    std::cout << "Digite 0 para voltar ao menu principal!";
    std::cin >> tempo;
    return;
}

void jurosComAportes()
{
    // M = C × (((1 +(i / 100)) ^ n − 1) ÷ (i / 100));
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
    montante = capital * ((pow(1+(juros/100), tempo)) - 1) / (juros/100);
    std::cout << "\nMontante: " << montante << "\n\n\n";
    std::cout << "Digite 0 para voltar ao menu principal!";
    std::cin >> tempo;
    return;
}

void jurosAlterado()
{
    return;
}
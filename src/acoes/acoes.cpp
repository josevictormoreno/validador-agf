#include <iostream>
#include <cmath>

void fairValue()
{

  return;
}

void graham()
{
  float valorJusto;
  float lucroAcao;
  float valorPatrimonial;
  std::cout << '\n';
  std::cout << "_-¨-_-¨-_-¨-_-¨-_-¨-_-¨-_- Formula de Graham -_-¨-_-¨-_-¨-_-¨-_-¨-_-¨-_-¨-\n";
  std::cout << "Lucro por ação: ";
  std::cin >> lucroAcao;
  std::cout << "Valor patrimonial: ";
  std::cin >> valorPatrimonial;
  valorJusto = sqrt(22.5 * valorPatrimonial * lucroAcao);
  std::cout << "\nPreço justo:  " << valorJusto << "\n\n\n";
  std::cout << "Digite 0 para voltar ao menu principal!";
  std::cin >> lucroAcao;
  return;
}

void precoLucro()
{
  float preco;
  float lucro;
  std::cout << '\n';
  std::cout << "_-¨-_-¨-_-¨-_-¨-_-¨-_-¨-_-¨ Preço por Lucro ¨-_-¨-_-¨-_-¨-_-¨-_-¨-_-¨-_-¨-\n";
  std::cout << "Preço da ação: ";
  std::cin >> preco;
  std::cout << "Lucro por ação: ";
  std::cin >> lucro;
  return;
}

void valorPatrimonial()
{
  float valorPatrimonial;
  float qtdAcoes;
  std::cout << '\n';
  std::cout << "_-¨-_-¨-_-¨-_-¨-_-¨-_-¨-_- Valor Patrimonial -_-¨-_-¨-_-¨-_-¨-_-¨-_-¨-_-¨-\n";
  std::cout << "Quantidade de ações da empresa: ";
  std::cin >> qtdAcoes;
  std::cout << "Capitalização de mercado: ";
  std::cin >> valorPatrimonial;
  std::cout << "\nVpa: " << valorPatrimonial / qtdAcoes << "\n\n\n";
  std::cout << "Digite 0 para voltar ao menu principal!";
  std::cin >> qtdAcoes;
  return;
}
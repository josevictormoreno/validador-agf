#include <iostream>
#include <cmath>

void dividendos()
{
  float dividendo;
  float provento;
  float valorAtual;
  float precoMedio;
  float resultado;
  std::cout << "Informe o valor atual da ação: ";
  std::cin >> valorAtual;
  std::cout << "Informe o preço medio: ";
  std::cin >> precoMedio;
  std::cout << "Informe o valor do dividendo: ";
  std::cin >> dividendo;
  provento = valorAtual * dividendo;
  resultado = (provento * 100) / precoMedio*100;
  std::cout << "\nDividend yield: " << resultado << "\n\n\n";
  std::cout << "Digite 0 para voltar ao menu principal!";
  std::cin >> resultado;
  return;
}

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

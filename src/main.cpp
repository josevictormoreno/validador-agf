#include <iostream>
#include <cstdlib>
#include "menu/menu.hh"
#include "juros/juros.hh"
#include "acoes/acoes.hh"

int main()
{
    int option;

    while (true)
    {
        option = 0;
        system("clear");
        menu();
        std::cin >> option;
        system("clear");

        if (option == 1) // juros compostos
        {
            menuJuros();
            std::cin >> option;
            system("clear");

            if (option == 1)
                juros();
            else if (option == 2)
                jurosComAportes();
            else if (option == 3)
                jurosAlterado();
            else
                continue;
        }
        else if (option == 2) // analise de ação
        {
            system("clear");
            menuAnalises();
            std::cin >> option;
            system("clear");

            if (option == 1)
                fairValue();
            else if (option == 2)
                graham();
            else if (option == 3)
                precoLucro();
            else if (option == 4)
                valorPatrimonial();
            else if (option == 5)
                dividendos();
            else
                continue;
        }
        else
            break;
    }

    return 0;
}

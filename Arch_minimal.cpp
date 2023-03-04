#include <iostream>
#include <cstring>
#include <locale.h>


using namespace std;

void red () {
  printf("\033[1;31m");
}

void BlueF () {
  printf("\e[1;34m");
}
void yellow () {
  printf("\033[1;33m");
}

void reset () {
  printf("\033[0m");
}

int main() {
    int opcao;

    do { setlocale(LC_ALL,""); // Idioma em português

        BlueF();

        cout << "============================ ARCH MINIMAL ==============================" << endl;
        yellow();
        cout << "1. Ver pacotes que não fazem parte dos repositórios oficiais" << endl;
        cout << "2. Removendo pacotes que não fazem parte dos repositórios oficiais" << endl;
        cout << "3. Visualizar pacotes órfãos" << endl;
        cout << "4. Sair" << endl;
        BlueF();
        cout << "=======================================================================" << endl;
        reset();
        cout << "Digite sua opção: ";
        cin >> opcao;
    
        reset();

        switch(opcao) {
            case 1:
                system ("pacman -Qm");
                system ("pacman -Qqm > pkgs.txt");
                break;
            case 2:
                system("pacman -Rscn $(cat pkgs.text)");
                break;

            case 3:
                system("pacman -Qdt");

            case 4:
                cout << "Saindo do programa..." << endl;
                break;


            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    } while(opcao != 4);

    return 0;
}

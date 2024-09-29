#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];  // N_ELEMENTS név helyett NELEMENTS
    std::cout << '1-100 ertekek duplazasa';

    for (int i = 0;)  //  hiányzik a feltétel és az inkrementálás
    {
        b[i] = i * 2;
    }

    for (int i = 0; i; i++)  // Rossz feltetel lett megadva, igy sosem fog lefutni
    {
        std::cout << "Ertek:";
    }

    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;

    for (int i = 0; i < N_ELEMENTS, i++)  // Vesszõ helyett pontosvesszõt kell hasznalni
    {
        atlag += b[i];
    }

    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
    // b nevezetu pointer nem kerult torlesre -> memoria szivargas
}

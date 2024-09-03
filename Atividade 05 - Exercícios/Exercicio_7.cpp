// Exercício 7: Passagem por referência com vetores
// Neste cenário, você será desafiado a criar uma função que aceite um vetor por referência e inverta a ordem de seus elementos.

#include <iostream>
using namespace std;

void inverter(int[]);
int vet[6] = {1, 2, 3, 4, 5, 6};
int main()
{

    inverter(vet);

    for (int i = 0; i < 6; i++)
    {
        cout << vet[i] << " ";
    }
    return(0);
}

void inverter(int vet[])
{
    int temp;
    for (int i = 0; i < 3; i++)
    {
        temp = vet[i];
        vet[i] = vet[5 - i];
        vet[5 - i] = temp;
    }
}
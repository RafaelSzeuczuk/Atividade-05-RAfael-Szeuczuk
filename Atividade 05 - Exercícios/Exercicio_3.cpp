//Exercício 3: Passagem por valor
//Neste caso, desenvolva uma função que receba um número inteiro por valor, some 10 a ele e retorne o resultado.

#include<iostream>
using namespace std;

int soma_10(int);

int main(){
    int num1;
    cin>>num1;
    cout<<soma_10(num1)<<endl;
    return(0);
}

int soma_10(int n1){
    return(n1+10);
}


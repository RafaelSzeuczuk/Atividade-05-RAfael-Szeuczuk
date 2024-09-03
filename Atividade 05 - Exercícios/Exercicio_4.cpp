//Exercício 4: Passagem por referência
//Neste desafio, você deve criar uma função que receba um número inteiro por referência, some 10 a ele e retorne o resultado.
#include<iostream>
using namespace std;

int soma_10(int*);
int main(){
    int num1;
    cin>>num1;
    cout<<soma_10(&num1)<<endl;
    return(0);
}

int soma_10(int *p1){
    int soma=(*p1+10);
    return(soma);
}



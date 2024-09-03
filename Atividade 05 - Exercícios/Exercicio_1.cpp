//Exercício 1: Passagem por valor
//Neste desafio, crie uma função que tome dois números inteiros como argumento, multiplique-os e retorne o resultado.


#include<iostream>
using namespace std;

int multiplicacao(int, int);

int main(){
    int num1, num2;
    cin>>num1>>num2;
    cout<<multiplicacao(num1, num2)<<endl;
    return(0);
}

int multiplicacao(int n1, int n2){
    return(n1*n2);
}
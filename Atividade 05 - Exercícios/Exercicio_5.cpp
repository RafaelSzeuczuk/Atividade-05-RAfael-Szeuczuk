//Exercício 5: Passagem por valor
//Aqui, a tarefa é criar uma função que receba um número inteiro por valor, subtraia 5 dele e retorne o resultado.

#include<iostream>
using namespace std;

int subtrai_5(int);

int main(){
    int num1;
    cin>>num1;
    cout<<subtrai_5(num1)<<endl;
    return(0);
}

int subtrai_5(int n1){
    return(n1-5);
}


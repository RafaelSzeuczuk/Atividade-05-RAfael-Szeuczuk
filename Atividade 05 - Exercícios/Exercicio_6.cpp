//Exercício 6: Passagem por referência
//Neste exercício, você vai criar uma função que aceite um número inteiro por referência, subtraia 5 dele e retorne o resultado.
#include<iostream>
using namespace std;

int subtrai_5(int*);
int main(){
    int num1;
    cin>>num1;
    cout<<subtrai_5(&num1)<<endl;
    return(0);
}

int subtrai_5(int *p1){
    int soma=(*p1-5);
    return(soma);
}



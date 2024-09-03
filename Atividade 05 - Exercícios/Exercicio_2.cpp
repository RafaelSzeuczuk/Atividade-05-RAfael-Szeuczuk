//Exercício 2: Passagem por referência
//Aqui, você está encarregado de criar uma função que aceite dois inteiros como parâmetros por referência, multiplique-os e retorne o resultado.
#include<iostream>
using namespace std;

int multiplicacao(int*, int*);
int main(){
    int num1, num2;
    cin>>num1>>num2;
    cout<<multiplicacao(&num1,&num2)<<endl;
    return(0);
}

int multiplicacao(int *p1, int *p2){
    int multi=(*p1**p2);
    return(multi);
}



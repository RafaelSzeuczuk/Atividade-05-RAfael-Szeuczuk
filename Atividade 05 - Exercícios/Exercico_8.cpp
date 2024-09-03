//Exercício 8: Passagem por referência com strings
//Neste desafio, crie uma função que tome uma string por referência e a converta em letras maiúsculas.
#include<iostream>
using namespace std;

string to_uper (string);

int main(){
    string nome;
    getline(cin,nome);
    nome=to_uper(nome);
    cout<<nome;
    return(0);
}

string to_uper (string name){
    for (int i=0; i<=name.length();i++){
        name[i]=toupper(name[i]);
    }
    return(name);
}
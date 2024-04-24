#include <iostream>
using namespace std;

bool verificaFibonacci(int numero){

    int fibonacci1 = 0;
    int fibonacci2 = 1;

    if(numero == fibonacci1 || numero == fibonacci2){
        return true;
    }

    while(fibonacci2 < numero){
        int proximo =  fibonacci1 + fibonacci2;
        fibonacci1 = fibonacci2;
        fibonacci2 = proximo;

        if (proximo == numero){
            return true;
        }
    }

    return false;
}

int main(){
    int num;

    cout << "Digite um numero para verificar se existe na sequencia fibonacci: ";
    cin >> num;

    if(verificaFibonacci(num)){
        cout << "Pertence a sequencia fibonacci!";
    }else{
        cout << "Nao pertence a sequencia fibonacci!";
    }
}
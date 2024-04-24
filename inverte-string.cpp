#include <iostream>
#include <string>
using namespace std;

void inverterString(string& str) {
    int tamanho = str.length();

    for(int i=0; i<tamanho/2; i++){
        char temp = str[i];
        str[i] = str[tamanho-1-i];
        str[tamanho-1-i] = temp;
    }
}

int main(){
    string palavra;

    cout << "Digite a palavra a ser invertida: ";
    getline(cin, palavra);

    inverterString(palavra);

    cout << "Palavra invertida: " << palavra;

    return 0;
}
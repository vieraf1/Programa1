/*
Teste do Github
*/
#include "iostream"
#include "cstdlib"
#include "math.h"
#include "string.h"
#include "conio.h"
using namespace std;

int main(){
    setlocale (LC_ALL, "portuguese");
    
    float peso,altura,IMC;
    string clas;
	
	char tecla = '0';
	
	while(tecla != 27)
	
	{
                system("cls");
                cout << "\n1 - Ler Peso e Altura\
                         \n2 - Efetuar Cálculos\
                         \n3 - Resultados\
                         \nESC - Sair";
                tecla = getch();
 
	
	if (tecla =='1')
	{
	system("cls");
	cout << "Digite a altura: "; cin >> altura;
	cout << "\n";
	cout << "Digite seu peso: "; cin >> peso;
	cout << "\n";
    }
    
    else if (tecla == '2')
    {
	
	IMC = peso / pow(altura, 2);
	
	if (IMC <= 18.4) {
        clas = "Abaixo do peso";
    }
	
	else if(IMC >= 18.5 && IMC <= 24.9) {
		clas = "Peso normal";
	}
	else if(IMC >= 25.0 && IMC <= 29.9) {
		clas = "Sobrepeso";
	}
	else if(IMC >= 30.0 && IMC <= 34.9) {
		clas = "Obesidade grau 1";
	}
	else if(IMC >= 35.0 && IMC <= 39.9) {
		clas = "Obesidade grau 2";
	}
	else if(IMC > 40.0) {
		clas = "Obesidade grau 3";
	}
	
	system("pause");
    }
    
    else if (tecla == '3') {
        system("cls");
        cout << "\nTela de Saída\n";
        cout.precision(3);
        cout << "\nIMC: " << IMC ;
        cout << "\nClassificação: " << clas;             
        cout << "\nFim da saída\n";
        system("pause");
 
         }
	
    }

	system("pause");
		
return 0; }

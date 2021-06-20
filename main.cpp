//LANCEI O DESAFIO
//CADA ERRO É 1 SHOT DE CACHAÇA
//"Let the game begin!" - Jigsaw
//Total de perdas: 5 shots

#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <iomanip>
#include "investimento.h"

using namespace std;

void FirstWindow(){
    char option = ' ';
    system("cls");
    for (int i=0; i<3; i++){cout << endl;}
    cout << "\t +-----------------------------------------+" << endl;
    cout << "\t |                                         |" << endl;
    cout << "\t |    TO EXPERIENCE BETTER PERFORMANCE     |" << endl;
    cout << "\t |     I RECOMMEND USING CODE BLOCKS       |" << endl;
    cout << "\t |                                         |" << endl;
    cout << "\t |                                         |" << endl;
    cout << "\t |    commands like system(cls) may not    |" << endl;
    cout << "\t |        work correctly elsewhere         |" << endl;
    cout << "\t |                                         |" << endl;
    cout << "\t |                                         |" << endl;
    cout << "\t +-----------------------------------------+" << endl;
    cout << "\t |                 Samuel Ribeiro - 05/21  |" << endl;
    cout << "\t +-----------------------------------------+" << endl;
    for (int i=0; i<3; i++){cout << endl;}
    cout << "\t Please enter Y to continue or N to exit: ";
    cin >> option;
    if (toupper(option) == 'Y'){
    }else{exit(EXIT_FAILURE);}

}

//-----------------------------------------------------------------------------------------------------------------

void Codeblocks(){
    system("cls");
    for (int i=0; i<3; i++){cout << endl;}
    cout << "\t +------------------------------------------------+" << endl;
    cout << "\t |                                                |" << endl;
    cout << "\t |            IMPORTANT INFORMATIONS              |" << endl;
    cout << "\t |                                                |" << endl;
    cout << "\t +------------------------------------------------+" << endl;
    cout << "\t |                                                |" << endl;
    cout << "\t |   - I will show you how much your              |" << endl;
    cout << "\t |     money will yield.                          |" << endl;
    cout << "\t |   - I will need you tell me some important     |" << endl;
    cout << "\t |     informations like value and time.          |" << endl;
    cout << "\t |   - Use dot, not comma.                        |" << endl;
    cout << "\t |   - Let's go.                                  |" << endl;
    cout << "\t |                                                |" << endl;
    cout << "\t +------------------------------------------------+" << endl;
    for (int i=0; i<1; i++){cout << endl;}
    cout << "\t" << system("pause");
}

//-----------------------------------------------------------------------------------------------------------------

//consulta realizada dia 20/06/2021 no site do tesouro direto e nubank;
const float cdb = 0.0439; //rendimento de 2019;
const float cdi = 0.0275; //rendimento acumulado dos ultimos 12 meses;
const float TPF2026 = 0.0877; //tesouro prefixado 2026;
const float TS2024 = 0.0562; //tesouro selic 2024;
const float poupanca = 0.0444; //rendimento médio;

int main() {
    cout << fixed << setprecision(2);
    //FirstWindow();

    //Codeblocks();

    tInvestimento object;

    float startingCapital = object.DefiningCapital();
    float rate = object.DefiningRate() / 100;
    float time = object.DefiningTime();

    if ((time >= 0) && (time <= 1)){ //ate um ano

    }else if ((time > 1) && (time <= 10)){ //de um a dez anos

    }else if (time > 10){ //mais de dez anos

    }

    cout << startingCapital << endl;
    cout << rate << endl;
    cout << time << endl;
    cout << object.ConvertRate(rate, 1);

}

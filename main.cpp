//LANCEI O DESAFIO
//CADA ERRO É 1 SHOT DE CACHAÇA
//"Let the game begin!" - Jigsaw
//Total de perdas: 1 shots
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include "investimento.h"

using namespace std;

void FirstWindow(){
    for (int i=0; i<30; i++){cout<<endl;}
    char option = ' ';
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
    cout << "\t +----------------------------------------------+" << endl;
    cout << "\t |                                              |" << endl;
    cout << "\t |            IMPORTANT INFORMATIONS            |" << endl;
    cout << "\t |                                              |" << endl;
    cout << "\t +----------------------------------------------+" << endl;
    cout << "\t |                                              |" << endl;
    cout << "\t |   - Enter C to encode the string             |" << endl;
    cout << "\t |   - Enter D to decode the string             |" << endl;
    cout << "\t |   - Enter the string to be processed         |" << endl;
    cout << "\t |   - The string must be less than 1K char     |" << endl;
    cout << "\t |   - Any char after 1K will be disregarded    |" << endl;
    cout << "\t |                                              |" << endl;
    cout << "\t +----------------------------------------------+" << endl;
    for (int i=0; i<1; i++){cout << endl;}
    cout << "\t" << system("pause");

}

//-----------------------------------------------------------------------------------------------------------------

int main() {
  FirstWindow();
  Codeblocks();
}
#ifndef tInvestimento_h
#define tInvestimento_h
#include <math.h>

using namespace std;

typedef struct{
    float startingCapital=0;
    float rate=0;
    float time=0;
    int type=0;
}DefValues;

typedef struct{
    DefValues value;

    float DefiningCapital(){

        system("cls");
        for (int i=0; i<3; i++){cout << endl;}
        cout << "\t +------------------------------------------------+" << endl;
        cout << "\t |                                                |" << endl;
        cout << "\t |          PLEASE TELL ME HOW MUCH YOU           |" << endl;
        cout << "\t |           HAVE TO INVEST HIGH NOW              |" << endl;
        cout << "\t |                                                |" << endl;
        cout << "\t +------------------------------------------------+" << endl;
        cout << "\t   I have: R$ "; cin >> value.startingCapital;
        return (value.startingCapital);
    }

    float DefiningRate(){

        system("cls");
        for (int i=0; i<3; i++){cout << endl;}
        cout << "\t +------------------------------------------------+" << endl;
        cout << "\t |                                                |" << endl;
        cout << "\t |        PLEASE TELL ME, IN PERCENTAGE,          |" << endl;
        cout << "\t |          WHAT IS THE INTEREST RATE             |" << endl;
        cout << "\t |                                                |" << endl;
        cout << "\t +------------------------------------------------+" << endl;
        cout << "\t   The rate is: "; cin >> value.rate;
        value.rate = value.rate / 100;
        return (value.rate);
    }

    float DefiningTime(){

        system("cls");
        for (int i=0; i<3; i++){cout << endl;}
        cout << "\t +------------------------------------------------+" << endl;
        cout << "\t |                                                |" << endl;
        cout << "\t |      PLEASE TELL ME WHAT IS                    |" << endl;
        cout << "\t |      THE TIME OF THE APLICATION                |" << endl;
        cout << "\t |                                                |" << endl;
        cout << "\t +------------------------------------------------+" << endl;
        cout << "\t |                                                |" << endl;
        cout << "\t |    - FIRST YOU TELL ME THE TIME.               |" << endl;
        cout << "\t |    - THEN YOU TELL ME IF THE NUMBER IS         |" << endl;
        cout << "\t |      IN YEARS (enter 1) OR MONTHS (enter 2).   |" << endl;
        cout << "\t |                                                |" << endl;
        cout << "\t +------------------------------------------------+" << endl;
        cout << "\t   Time: "; cin >> value.time;
        cout << "\t   Type: "; cin >> value.type;

        if (value.type == 1){
            return (value.time);
        }else if (value.type == 2){
            return (value.time/12);
        }
    }

    float ConvertRate(){
        float convertedRate;
        if (value.type == 1){
            convertedRate = pow((1+value.rate), 1.0/12) - 1;
        }else if(value.type == 2){
            convertedRate = pow((1+value.rate), 12) - 1;
        }
        return (convertedRate*100);
    }
}tInvestimento;

#endif

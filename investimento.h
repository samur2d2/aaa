#ifndef tInvestimento_h
#define tInvestimento_h
#include <math.h>
#include <iomanip>
#include <iostream>

using namespace std;

typedef struct{
    float startingCapital=0;
    float rate[3]={0}; //mensal[0], semestral[1] and anual[2];
    float time=0;
    float simpleInterest=0; //simple interest income
    float simpleAmount=0; //amount applied to simple interest
    float compoundInterest=0;
    float compoundAmount=0;
    int type=0;
}DefValues;

typedef struct{
    DefValues value;
//----------------------------------------------------------------------------------------------------
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
//----------------------------------------------------------------------------------------------------
    float DefiningRate(){
        system("cls");
        for (int i=0; i<3; i++){cout << endl;}
        cout << "\t +------------------------------------------------+" << endl;
        cout << "\t |                                                |" << endl;
        cout << "\t |        PLEASE TELL ME, IN PERCENTAGE,          |" << endl;
        cout << "\t |       WHAT IS THE ANUAL INTEREST RATE          |" << endl;
        cout << "\t |                                                |" << endl;
        cout << "\t +------------------------------------------------+" << endl;
        cout << "\t   The rate is: "; cin >> value.rate[2];
        value.rate[2] = value.rate[2] / 100;
        return (value.rate[2]);
    }
//----------------------------------------------------------------------------------------------------
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

        if (value.type == 2){
            value.time = value.time/12;
        }
        return (value.time);
    }
//----------------------------------------------------------------------------------------------------
    void ConvertRate(){
        value.rate[0] = pow((1+value.rate[2]), 1.0/12) - 1;//to convert to mensal rate
        value.rate[1] = pow((1+value.rate[2]), 1.0/2) - 1; //to convert to semestral rate
    }
//----------------------------------------------------------------------------------------------------
    void SimpleInterest(){
        system("cls");
        cout << "\t +---------------------------------------------+" << endl;
        cout << "\t |                                             |" << endl;
        cout << "\t |               SIMPLE INTEREST               |" << endl;
        cout << "\t |                                             |" << endl;
        cout << "\t +---------------------------------------------+" << endl;
        if ((value.time >= 0) && (value.time <= 2)){ //ate um ano calcula cada mes
            cout << "\t |      MONTH       INTEREST       AMOUNT      |" << endl;
            cout << "\t +---------------------------------------------+" << endl;
            for (int t=1; t<=(value.time*12); t++){
                value.simpleInterest = value.startingCapital * (value.rate[2]/12) * t;
                value.simpleAmount = value.startingCapital + value.simpleInterest;
                cout << "\t |" << setw(11) << t;
                cout << setw(15) << value.simpleInterest;
                cout << setw(13) << value.simpleAmount << "      |" << endl;
            }
        }else if ((value.time > 2) && (value.time <= 10)){ //de um a dez anos calcula cada 6 meses
            cout << "\t |     SEMESTER      INTEREST      AMOUNT      |" << endl;
            cout << "\t +---------------------------------------------+" << endl;
            for (int t=1; t<=(value.time*2); t++){
                value.simpleInterest = value.startingCapital * (value.rate[2]/2) * t;
                value.simpleAmount = value.startingCapital + value.simpleInterest;
                cout << "\t |" << setw(13) << t;
                cout << setw(14) << value.simpleInterest;
                cout << setw(12) << value.simpleAmount << "      |" << endl;
            }
        }else if (value.time > 10){ //mais de dez anos calcula cada ano
            cout << "\t |      ANUAL       INTEREST       AMOUNT      |" << endl;
            cout << "\t +---------------------------------------------+" << endl;
            for (int t=1; t<=(value.time); t++){
                value.simpleInterest = value.startingCapital * value.rate[2] * t;
                value.simpleAmount = value.startingCapital + value.simpleInterest;
                cout << "\t |" << setw(11) << t;
                cout << setw(15) << value.simpleInterest;
                cout << setw(13) << value.simpleAmount << "      |" << endl;
            }
        }
        cout << "\t +---------------------------------------------+" << endl;
    }
//----------------------------------------------------------------------------------------------------
    void CompoundInterest(){
        system("pause");
        system("cls");
        cout << "\t +---------------------------------------------+" << endl;
        cout << "\t |                                             |" << endl;
        cout << "\t |              COMPOUND INTEREST              |" << endl;
        cout << "\t |                                             |" << endl;
        cout << "\t +---------------------------------------------+" << endl;
        if ((value.time >= 0) && (value.time <= 2)){ //ate um ano calcula cada mes
            cout << "\t |      MONTH       INTEREST       AMOUNT      |" << endl;
            cout << "\t +---------------------------------------------+" << endl;
            for (int t=1; t<=(value.time*12); t++){
                value.compoundInterest = value.startingCapital * (pow((1+value.rate[0]),t) - 1);
                value.compoundAmount = value.startingCapital + value.compoundInterest;
                cout << "\t |" << setw(11) << t;
                cout << setw(15) << value.compoundInterest;
                cout << setw(13) << value.compoundAmount << "      |" << endl;
            }
        }else if ((value.time > 2) && (value.time <= 10)){ //de um a dez anos calcula cada 6 meses
            cout << "\t |     SEMESTER      INTEREST      AMOUNT      |" << endl;
            cout << "\t +---------------------------------------------+" << endl;
            for (int t=1; t<=(value.time*2); t++){
                value.simpleInterest = value.startingCapital * (value.rate[1]) * t;
                value.simpleAmount = value.startingCapital + value.simpleInterest;
                cout << "\t |" << setw(13) << t;
                cout << setw(14) << value.simpleInterest;
                cout << setw(12) << value.simpleAmount << "      |" << endl;
            }
        }else if (value.time > 10){ //mais de dez anos calcula cada ano
            cout << "\t |      ANUAL       INTEREST       AMOUNT      |" << endl;
            cout << "\t +---------------------------------------------+" << endl;
            for (int t=1; t<=(value.time); t++){
                value.simpleInterest = value.startingCapital * value.rate[2] * t;
                value.simpleAmount = value.startingCapital + value.simpleInterest;
                cout << "\t |" << setw(11) << t;
                cout << setw(15) << value.simpleInterest;
                cout << setw(13) << value.simpleAmount << "      |" << endl;
            }
        }
        cout << "\t +---------------------------------------------+" << endl;
    }
//----------------------------------------------------------------------------------------------------
}tInvestimento;

#endif

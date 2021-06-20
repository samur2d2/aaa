#ifndef tInvestimento_h
#define tInvestimento_h

using namespace std;

typedef struct{

    float ChoosingAction(){
        float startingCapital=0;
        system("cls");
        for (int i=0; i<3; i++){cout << endl;}
        cout << "\t +------------------------------------------------+" << endl;
        cout << "\t |                                                |" << endl;
        cout << "\t |         PLEASE, TELL ME HOW MUCH YOU           |" << endl;
        cout << "\t |           HAVE TO INVEST HIGH NOW              |" << endl;
        cout << "\t |                                                |" << endl;
        cout << "\t +------------------------------------------------+" << endl;
        cout << "\t   I have: R$ "; cin >> startingCapital;
        return (startingCapital);
    }
}tInvestimento;

#endif

#ifndef tInvestimento_h
#define tInvestimento_h

using namespace std;

typedef struct{

    float DefiningCapital(){
        float startingCapital=0;
        system("cls");
        for (int i=0; i<3; i++){cout << endl;}
        cout << "\t +------------------------------------------------+" << endl;
        cout << "\t |                                                |" << endl;
        cout << "\t |          PLEASE TELL ME HOW MUCH YOU           |" << endl;
        cout << "\t |           HAVE TO INVEST HIGH NOW              |" << endl;
        cout << "\t |                                                |" << endl;
        cout << "\t +------------------------------------------------+" << endl;
        cout << "\t   I have: R$ "; cin >> startingCapital;
        return (startingCapital);
    }

    float DefiningRate(){
        float rate=0;
        system("cls");
        for (int i=0; i<3; i++){cout << endl;}
        cout << "\t +------------------------------------------------+" << endl;
        cout << "\t |                                                |" << endl;
        cout << "\t |        PLEASE TELL ME, IN PERCENTAGE,          |" << endl;
        cout << "\t |          WHAT IS THE INTEREST RATE             |" << endl;
        cout << "\t |                                                |" << endl;
        cout << "\t +------------------------------------------------+" << endl;
        cout << "\t   The rate is: "; cin >> rate;
        return (rate);
    }

    float DefiningTime(){
        float time=0;
        int type=0;
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
        cout << "\t   Time: "; cin >> time;
        cout << "\t   Type: "; cin >> type;

        if (type == 1){
            return (time);
        }else if (type == 2){
            return (time/12);
        }
    }
}tInvestimento;

#endif

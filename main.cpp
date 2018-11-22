#include <iostream>
#include <cstdlib> // dla system("cls")
#include <stdio.h>  // dla getchar()
#include <conio.h>  // menu na reagujace klawisze wyboru dzialania
using namespace std;

int main()
{
    float x, y;       // zmienne dla liczb.
    char wybor;        // zmienna dla wyboru dzialania. Char potrzebny dla wyboru z klawisza.


    cout << "Witamy w kalkulatorze" << endl;

    for(;;)              // nieskonczona petla. Mozna tez napisac "While (true)".
    {
      cout << "Wprowadz pierwsza liczbe: ";
      cin >> x;
      cout << "Wprowadz druga liczbe: ";
      cin >> y;

    cout << "Menu glowne:\n__________\n1.Dodawanie\n2.Odejmowanie\n3.Mnozenie\n4.Dzielenie\n5.Wyjscie" << endl;
    cout << "Wybierz typ dzialania klikajac odpowiednia liczbe na klawiaturze:"<<endl;
    wybor=getch();

    switch(wybor)
    {
    case '1':
        {
            cout << "Suma = "<<x+y;
        }
    break;
      case '2': //robiac wybor z klawiatury musimy case'y dac w cudzyslowiach. Staja sie one charakterami.
        {
            cout << "Roznica = "<<x-y;
        }
    break;
      case '3':
        {
            cout << "Mnozenie = "<<x*y;
        }
    break;
      case '4':
        {   if(y==0) cout << "Nie dzielimy przez 0";
            else cout << "Dzielenie = "<<x/y;
        }
    break;
    case '5':
        {
            cout << "Dziekujemy!";
            exit(0);
        }
    break;
    default: cout << "Nie ma takiej opcji w menu!";
    }
    getchar();getchar();    // zamyka program na ENETER
    system("cls");         // czyszczenie programu



    }
    return 0;
}

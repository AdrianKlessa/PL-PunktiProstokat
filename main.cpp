#include <iostream>
#include "przyjaciele.h"
using namespace std;


void sedzia(Punkt pkt, Prostokat p)
{
    if((pkt.x>=p.x)&&(pkt.x<=p.x+p.szerokosc)&&(pkt.y>=p.y)&&(pkt.y<=p.y+p.wysokosc))
    {
      cout << "Punkt " <<pkt.nazwa <<  " nalezy do prostokata " <<p.nazwa ;
    }
    else
    {
        cout << "Punkt " <<pkt.nazwa <<  " nie nalezy do prostokata " <<p.nazwa ;
    }

}

int main()
{


    string nazwa_punkt;
    float punktx,punkty;
    string nazwa_prostokat;
    float prostokatx,prostokaty,prostokatszerokosc,prostokatwysokosc;
    prostokatszerokosc=-1;
    prostokatwysokosc=-1;


    cout << "Podaj nazwe punktu " << endl;
    cin >> nazwa_punkt;
    cout << endl << "Podaj X punktu " << endl;
    cin>>punktx;
    cout << endl << "Podaj Y punktu " << endl;
    cin>>punkty;


    Punkt pkt1(nazwa_punkt,punktx,punkty);

    cout << "Podaj nazwe prostokata " << endl;
    cin >> nazwa_prostokat;
    cout << endl << "Podaj X dolnego lewego kata prostokata " << endl;
    cin>>prostokatx;
    cout << endl << "Podaj Y dolnego lewego kata prostokata " << endl;
    cin>>prostokaty;
    cout << endl << "Podaj szerokosc prostokata " << endl;
    cin>>prostokatszerokosc;
    while(prostokatszerokosc<=0)
    {
        cout << endl << "Podaj poprawna szerokosc (dodatnia)";
        cin >> prostokatszerokosc;
    }
    cout << endl << "Podaj wysokosc prostokata " << endl;
    cin>>prostokatwysokosc;
    while(prostokatwysokosc<=0)
    {
        cout << endl << "Podaj poprawna szerokosc (dodatnia)";
        cin >> prostokatwysokosc;
    }





    Prostokat p1(nazwa_prostokat,prostokatx,prostokaty,prostokatszerokosc,prostokatwysokosc);

    sedzia(pkt1,p1);

    return 0;
}

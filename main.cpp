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
    Punkt pkt1("A",99,100);
    // pkt1.wczytaj();
    Prostokat p1("Prostokat",0,0,6,4);
    // p1.wczytaj();

    sedzia(pkt1,p1);

    return 0;
}
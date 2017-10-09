#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

struct Probka
{
    double t;
    double x;
    Probka(double _t, double _x)
    {
        t = _t;
        x = _x;
    }
};

vector <Probka> wczytaj(string nazwa)
{
    vector <Probka> tab;
    ifstream plik(nazwa);

    string linia;
    while(getline(plik,linia))
    {
        cout << linia << endl;
    }
    plik.close();
    return tab;
}

int main(int argc, char*argv[])
{
    if(argc!=2)
    {
        return -1;
    }
    cout << argv[1] << endl;
    string nazwa_pliku = argv[1];
    vector <Probka> dane = wczytaj(nazwa_pliku);
    return 0;
}

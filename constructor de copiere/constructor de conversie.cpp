#include <iostream>
using namespace std;

class Autobuz
{
private:
	int _linieHarta;
	int _coloanaHarta;

public:
	Autobuz(int lH, int cH):_linieHarta(lH),_coloanaHarta(cH)
	{
	}

	int DaLinieHarta() const {return _linieHarta;}

	int DaColoanaHarta() const {return _coloanaHarta;}

};

class Sector
{
private:
	int _linie;
	int _coloana;

public:
	Sector(const Autobuz& autobuz);

	void Afisare()
	{
		cout << "Linia: " <<_linie << "Coloana: " << _coloana<< endl;

	}

};

Sector::Sector(const Autobuz& autobuz)
{
	cout << "Constructor conversie" << endl;
	_linie= autobuz.DaLinieHarta();
	_coloana= autobuz.DaColoanaHarta();
}

void AfisareSectorPeHarta(Sector sect)
{
	cout << "Afisare harta" << endl;
	sect.Afisare();

}

int main()
{
	Autobuz unAuto(3,4);
	AfisareSectorPeHarta(unAuto);
	getchar();
	return 0;

}

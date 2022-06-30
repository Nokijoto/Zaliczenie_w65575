// Zaliczenie.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "Paczka.h"
using namespace std;
template <class T,int ilosc>
class Pudelko
{
	string nazwa;
	T* array = new T[ilosc];
public:
	void dodaj(int index, T wartosc)
	{
		array[index] = wartosc;
	};
	T pobierz(int index)
	{
		return array[index];
	}

};



int main()
{
	Paczka p1("2022-07-07", "ul. Sucharskiego 2, Rzeszow", 15), p2("2022-07-07", "ul. Sucharskiego 2, Rzeszow", 0);
	p1.zmienAdresNadania("ul. Strzyzowska 12, Rzeszow");
	cout << "Koszt nadania paczki wynosi:" << p1.podaj_koszt_ndania();
	p2.piszDane();
	Paczka p3;
	cin >> p3;
	if (p1 == p2)
	{
		cout << "Paczki maja taki sam adres nadania i wage";
	}
	else
	{
		cout << "Paczki sa rozne";
	}




	// Na 4

	vector<Paczka> lista_paczek;
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		Paczka ptem("2022-07-07","ul. Sucharskiego 12,Rzeszow", (rand() % 100 + 1));
		lista_paczek.push_back(ptem);
	}
	
	
	for (auto i:lista_paczek)
	{
		i.piszDane();
		cout << "\n";
	}

	Pudelko<string, 5> pudelko;
	pudelko.dodaj(0, "mleko");
	cout << pudelko.pobierz(9) << endl;
}
	
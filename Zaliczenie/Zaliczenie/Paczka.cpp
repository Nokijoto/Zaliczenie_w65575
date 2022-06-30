#include "Paczka.h"
Paczka::Paczka()
{
	waga = 0;
	adres_nadania = "----";
	data_nadania = "----";
};

Paczka::Paczka(string _data_nadania, string _adres_nadania, int _waga)
{
	waga = _waga;
	adres_nadania = _adres_nadania;
	data_nadania = _data_nadania;
};

int Paczka::podaj_koszt_ndania()
{
	
	if (this->waga < 10 && this->waga >= 0)
	{
		return 20;
	}
	else if (this->waga >= 10 && this->waga <= 50)
	{
		return 30;
	}
	else if (this->waga > 50)
	{
		return 50;
	}
	else
	{
		return -1;
	}
}
void Paczka::zmienAdresNadania(string _adres_nadania)
{
	this->adres_nadania = adres_nadania;
}
void Paczka::piszDane()
{
	cout << "\nPaczka nadana dnia: " << data_nadania<< "\nAdres Nadania : " << adres_nadania<< "\nWaga: " << waga<< "\nKwota nadania: "<< podaj_koszt_ndania()<<"\n";

};
void Paczka::ustawWage(int _waga)
{
	this->waga = _waga;
};
bool  Paczka::operator==(Paczka& obj)
{
	if (this->waga == obj.waga && this->adres_nadania == obj.adres_nadania)
	{
		return 1;
	}
	else { return 0; }
}

istream& operator>>(istream& in, Paczka& obj)
{
	cout << "Podaj date nadania paczki: \n";
	in >> obj.data_nadania;
	cout << "Podaj adres nadania paczki: \n";
	in >> obj.data_nadania;
	cout << " Podaj wage paczki\n";
	in >> obj.waga;
	return in;
}

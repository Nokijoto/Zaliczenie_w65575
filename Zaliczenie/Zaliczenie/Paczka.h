#pragma once
#include <iostream>
using namespace std;
class Paczka
{
private:
	int waga;
	string adres_nadania;
	string data_nadania;
public:
	Paczka();
	Paczka(string _data_nadania,string _adres_nadania, int _waga);
	int podaj_koszt_ndania();
	void zmienAdresNadania(string _adres_nadania);
	void piszDane();
	void ustawWage(int _waga);
	bool  operator==(Paczka& obj);
	friend  istream& operator>>(istream& in, Paczka& obj);

};
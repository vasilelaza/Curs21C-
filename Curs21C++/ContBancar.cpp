#include "ContBancar.h"

ContBancar::ContBancar(std::string nume, std::string prenume, std::string iban)
{
	this->nume = nume;        //operatorul'->'un pointer catre propria clasa,folosit ptr tipuri de ambiguitati
	this->prenume = prenume;
	IBAN = iban;
	sold = 0;
	eTipCont = TIP_CONT::CONT_RON;
}


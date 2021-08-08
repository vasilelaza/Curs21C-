#pragma once
#include<string>
enum class TIP_CONT
{
     CONT_RON,
	 CONT_EURO,
	 CONT_DOLAR
};
class ContBancar
{
private:
	//nume,prenume,sold,tip de cont(valuta sau lei)IBAN
	std::string nume;
	std::string prenume;
	int sold;
	TIP_CONT eTipCont;
	std::string IBAN;

public:  //1                          (2)                            1-Constructor;2-parametri
	ContBancar(std::string nume,std::string prenume,std::string iban);
	inline std::string getNume(){ return nume; }
	inline std::string getPreume() { return prenume; }
	inline int getSold() { return sold; }
	inline std::string getIban() { return IBAN; }
	inline void setSoldValue(int value) { sold = value; }
	~ContBancar();   //Destructor
};


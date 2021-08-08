#include "Bank.h"

std::string Bank::createIban()
{
    //trebuie sa fie un "iban" UNIC
	std::string iban = "123";
	return iban;
}

Bank::Bank()
{
}

Bank::~Bank()
{
	m_ConturiBancare.clear();
}
	
void Bank::adaugareCont()
{
	system("CLS");
	std::cout << "Introduceti numele utilizatorului:" << std::endl;
	std::string nume;
	std::cin >> nume;
	std::cout << "Introduceti Prenumele utilizatorului:" << std::endl;
	std::string prenume;
	std::cin >> prenume;
	std::string iban = createIban();
	ContBancar*cont = new ContBancar(nume, prenume, iban);//Instantiem un cont bancar:creem un pointer de tip_ContBancar
	m_ConturiBancare.push_back(cont);//Introducem contul in lista de conturi cu ajutorul lui push_back
	std::cout << "1->pentru crearea unui cont\n";
	std::cout << "2->pentru meniul principal\n";
	char optiune;
	std::cin >> optiune;
	switch(optiune)
	{
	case'1':
		adaugareCont();
		break;
	default:
		break;
	}
}
void Bank::vizualizareConturi()
{
	std::cout << "Nr. de conturi in banca este:" << m_ConturiBancare.size() << std::endl;//"size" ne da dimensiunea din vectorul de conturi(cite elemente se afla acolo)
	for(int i=0;i<m_ConturiBancare.size();i++)
	{
		std::cout << "Contul" << i+1 << " " << m_ConturiBancare[i]->getNume();
	}
}



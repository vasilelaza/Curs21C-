// Curs21C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Bank.h"
/*
1.O clasa cont bancar ce trebuie sa aibe atribute precum;nume,prenume,sold,tip de cont(valuta sau ron)IBAN
Un cont trebuie neaparat sa aibe un nume,prenume si un IBAN care trebuie sa fie unic

2.In "main"se afla terminalul principal al bancii in care trebuie sa avem urmatoarele optiuni:
  2.1 numar conturi-->ce ne da nr. de conturi inregistrate in banca
  2.2 creare cont-->cu aceasta optiune se poate crea un cont nou
      2.2.1--> ar trebui un screen diferit siun set de optiuni in care operatorul bancii sa introduca datele 
      ptr. crearea contului(trebuie ca aceasta procedura sa verifice daca exista deja contul ce se doreste creat iar daca da,sa anunte operatorul)
      2.2.2-->o optiune de return la "main screen"(ecranul cu optiuni principale)
  2.3 O optiune de modificare cont--> in care operatorul poate sa modifice date despre cont(ex:schimbare nume,schimbare sume etc.)
  2.4 O optiune prin care un cont se poate sterge din sistemul bancii
  2.5 O optiune prin care un cont poate sa extraga sume--> vrei sa adaugi sau sa stergi o suma de bani
  2.6 O optiune prin care un cont sa vada care este suma din cont.
      Trebuie cautat contul introdus iar daca exista se poate vizualiza.
      Daca nu exista putem incepe o procedura de creare cont.

3.Un sistem in care putem sa salvam datele acestea intr-un fisier local(CSV file)
       
*/
int main()
{
    //instantam o banka
    Bank* itSchoolBank = new Bank();
    bool isRuning = true;

    do
    {
        system("CLS");
        std::cout << "Meniu Principal\n";
        std::cout << "1->Adaugare cont\n";
        std::cout << "2->Vizualizare Conturi\n";
        std::cout << "3->Modificare Conturi\n";
        std::cout << "9->Exit\n";
        std::cout << "Introduceti optiuni\n";
        char optiuni;
        std::cin >> optiuni;
        switch (optiuni)
        {
        case '1':
            system("CLS");
            itSchoolBank->adaugareCont();
            break;
        case'2':
            system("CLS");
            itSchoolBank->vizualizareConturi();
            break;
        case '9':
            std::cout << "Thank you\n";
            isRuning = false;
            break;
        default:
            system("CLS");
            std::cout << "Optiunea nu este valida\n";
            break;
        }
    } while (isRuning);
  
    
    delete itSchoolBank;
   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

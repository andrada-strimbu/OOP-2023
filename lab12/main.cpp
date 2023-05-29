
#include <iostream>
#include "Prieten.h"
#include "Cunoscut.h"
#include "Agenda.h"
#include "Coleg.h"
#include<vector>

using namespace std;

int main()
{    Prieten prieten ("Cristina", "06iulie2002", "0740620101", "Iasi");
     Cunoscut cunoscut ("Bianca", "0753124869");
     Coleg coleg("Andrada","ABC Firm", "1234567890", "123 Main Street");
     Agenda agenda1;
     agenda1.addContact(&prieten);
     agenda1.addContact(&coleg);
     agenda1.addContact(&cunoscut);

    agenda1.searchContactByName("Cristina");
  //  agenda1.deleteContactByName("Ana");
   //agenda1.Print();
    return 0;
}
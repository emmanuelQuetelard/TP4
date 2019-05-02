#include <iostream>
#include <iomanip>
#include "InterfaceDeSaisie.h"                  
#include "Chrono.h"
using namespace std;


void nsDigicode::InterfaceDeSaisie::statut (string s)
{
    cout << endl     << "VERT"  << setw (4)  << myVoyantVert.getStatut ()
         << setw (7) << "ROUGE" << setw (4)  << myVoyantRouge.getStatut ()
         << setw (24) << s << flush;
} //statut

namespace nsDigicode
{
InterfaceDeSaisie::InterfaceDeSaisie(Chrono* pChrono, int delais, int nbChiffres) : ObjetTempo(pChrono, delais),
    myNbChiffresAttendus(nbChiffres), myVoyantVert(vert, eteint), myVoyantRouge(rouge, eteint)
{

}

int InterfaceDeSaisie::saisieCode()
{
    int code, chiffreLu = 0, nbChiffresLus;
    do {
        myVoyantVert.eteindre();
        myVoyantRouge.allumer();
        statut("Entrez votre code : ");
        cin.clear();
        code = 0;
        while((code = myClavier.saisirChiffre()) == -1);
        nbChiffresLus = 1;
        myVoyantVert.allumer();
        statut("continuez la saisie : ");
        myAttente = true;
        mypChrono->demarrer(this);
        while(myAttente && nbChiffresLus < myNbChiffresAttendus)
        {
            while(myAttente && (chiffreLu = myClavier.saisirChiffre()) == -1);
             statut("continuez la saisie : ");
            if(myAttente)
            {
                code = code * 10 + chiffreLu;
                nbChiffresLus++;
                if(nbChiffresLus == myNbChiffresAttendus)
                    mypChrono->arreter();
            }
            else {
                cout << endl<<"Temps ecoulé - Fin de saisie"<<endl;
            }
        }
    }
    while (nbChiffresLus < myNbChiffresAttendus);

    myVoyantRouge.eteindre();
    statut();

    return code;

}
}


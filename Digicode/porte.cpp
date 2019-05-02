#include "porte.h"

#include <iostream>

using namespace std;

namespace nsDigicode {
    Porte::Porte(Chrono* pchrono, int delai) : ObjetTempo (pchrono, delai)
    {

    }

    bool Porte::ouvrir()
    {
        myAttente = true;
        getChrono()->demarrer(this);
        cout<< "vous pouvez entrer"<<endl;
        while(myAttente  && !myCapteur.detecter());
        if(myAttente)
            return fermer();
        else {
            cout << "Temps écoulé, la porte se verrouille" << endl;
            return true;
        }
    }

    bool Porte::fermer()
    {
        cout<< "Porte ouverte : fermez la porte"<<endl;
        while(myAttente && !myCapteur.detecter());
        if(myAttente){
            mypChrono->arreter();
            myAttente = false;
            cout<<"Vous avez fermé la porte" << endl;
            return true;
        }
        else {
            return false;
        }
    }

}

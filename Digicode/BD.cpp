#include <fstream>           
#include <iostream>           
using namespace std;
#include "BD.h"

#define NOM_FIC "../DigicodeIUT/Base.txt"
#define MODE ios::in

bool nsDigicode::BD::verifier (int code)  
{
	int lu = -1;
	cout << "Vérification du code" << endl;
	fstream leFichier;
    leFichier.open (NOM_FIC, MODE);
if(!leFichier.is_open()) cout<<"erreur d'ouvertuyre du fichier"<<endl;
    while  (!leFichier.eof () && lu != code ) leFichier >> lu;
    cout << "lu = " << lu<< endl;
	leFichier.close ();
	if  (lu != code) cout << "Code erroné" << endl;
	return lu == code;
}  //verifier() 

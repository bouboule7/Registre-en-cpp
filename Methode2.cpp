#include "Methode2.hpp"
void programmeOne(bool one,ListePerson annulaire)
{
    while(one)
    {
        int valeurEntrer;
        string valeurEntrerString;
        cout<<"\nQue voulez vous faire?"<<endl;
        cout<<"1- Ajouter une persone"<<endl;
        cout<<"2- Supprimer une persone"<<endl;
        cout<<"3- Rechercher une persone"<<endl;
        cout<<"4- Modifier une persone"<<endl;
        cout<<"5- Afficher le registre"<<endl;
        cout<<"6- Sauvegarder les donnes sur exel"<<endl;
        cout<<"7- Quitter le programme"<<endl;
        cin>>valeurEntrerString;
        valeurEntrerString="0"+valeurEntrerString;
        valeurEntrer=stoi(valeurEntrerString);
        switch (valeurEntrer)
        {
            case 1:
                {
                    annulaire.ajouterPerson(recupPersonne());
                break;
                }
            case 2:
                {
                    annulaire.suprimerPerson(recupPersonne());
                break;
                }
            case 3:
                {
                    annulaire.recherchePerson(recupPersonne());
                break;
                }
            case 4:
                {
                    annulaire.modifierPerson(recupPersonne());
                break;
                }
            case 5:
                {
                    annulaire.afficherRegistre();
                break;
                }
            case 6:
            {
                 annulaire.sauvegarde();
                 break;
            }
            case 7:
            {
                 one=false;
                 cout<<"\nFIN du programme"<<endl;
                 break;
            }
                break;
            default:
                break;
            }
    }
}
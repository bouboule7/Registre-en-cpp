#include "Methode.hpp"
Person recupPersonne()
{
    Person p;
    string nom, prenom,sexe,adresse;
    int age; string ageString;
    cout<<"Entrer: "<<endl;
    cout<<"Le nom de la personne:";
    cin>>nom;
    cout<<"Le prenom de la personne:";
    cin>>prenom;
    cout<<"L'age de la personne:";
    cin>>ageString;
    ageString="0"+ageString;
    age=stoi(ageString);
    cout<<"Le sexe de la personne:";
    cin>>sexe;
    cout<<"L'adresse de la personne:";
    cin>>adresse;
    p.setPerson(nom,prenom,age,sexe,adresse);
    return p;
}
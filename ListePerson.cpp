#include "ListePerson.hpp"
#include <iterator>
#include <fstream>
    
ListePerson::ListePerson(/* args */)
{
    cout<<"Creation d'une nouvelle liste de personne"<<endl;
}
    
ListePerson::~ListePerson()
{
}
void ListePerson::ajouterPerson(Person p)
{
    registre.push_back(p);
}
void ListePerson::suprimerPerson(Person p)
{
    vector <Person> ::iterator iteration;
    bool trouver{false};
    if(registre.size()){
        cout<<"\non a trouver:"<<endl;
        cout<<"Nom\tPrenom\tAge\tSexe\tAdresse"<<endl;
        for(iteration=registre.begin();iteration!=registre.end();iteration=next(iteration))
        {
            if((*iteration).getNom()==p.getNom())
            {
                if((*iteration).getPrenom()==p.getPrenom())
                {
                    if((*iteration).getAge()==p.getAge())
                    {
                        if((*iteration).getSex()==p.getSex())
                        {
                            if((*iteration).getAdresse()==p.getAdresse())
                            {
                                cout<<"suppression de\n"<<(*iteration).getNom()<<"\t"<<(*iteration).getPrenom()<<"\t"<<(*iteration).getAge()<<"\t"<<(*iteration).getSex()<<"\t"<<(*iteration).getAdresse()<<endl;
                                registre.erase(iteration);
                                cout<<"succes"<<endl;
                                trouver=true;
                            }
                        }
                    }
                }
                if(!trouver)
                {
                    cout<<(*iteration).getNom()<<"\t"<<(*iteration).getPrenom()<<"\t"<<(*iteration).getAge()<<"\t"<<(*iteration).getSex()<<"\t"<<(*iteration).getAdresse()<<endl;
                }
            }
        }
    }
    else
    {
        cout<<"Repertoire vide"<<endl;
    }   
}
void ListePerson::recherchePerson(Person p)
{
    string choixString;
    int choix;
    vector <Person> ::iterator iteration;
    bool trouver{false}, rechercheOne{true};
    while(rechercheOne)
    {
        if(registre.size())
        {
            cout<<"rechercher par:"<<endl;
            cout<<"1-nom\t2-prenom\t3-age\t4-sexe\t5-adresse\t0-annuler la recherche"<<endl;
            cin>>choixString;
            choixString="0"+choixString;
            choix=stoi(choixString);
            switch (choix)
            {
                case 1:
                {
                    for(iteration=registre.begin();iteration!=registre.end();iteration=next(iteration))
                    {
                        if((*iteration).getNom()==p.getNom())
                        {
                            cout<<(*iteration).getNom()<<"\t"<<(*iteration).getPrenom()<<"\t"<<(*iteration).getAge()<<"\t"<<(*iteration).getSex()<<"\t"<<(*iteration).getAdresse()<<endl;
                            trouver=true;
                        }
                    }
                    if(!trouver)
                    {
                        cout<<"La personne se trouve pas dans le registrer"<<endl;
                    }
                    break;
                }
                case 2:                
                {
                    for(iteration=registre.begin();iteration!=registre.end();iteration=next(iteration))
                    {
                        if((*iteration).getPrenom()==p.getPrenom())
                        {
                            cout<<(*iteration).getNom()<<"\t"<<(*iteration).getPrenom()<<"\t"<<(*iteration).getAge()<<"\t"<<(*iteration).getSex()<<"\t"<<(*iteration).getAdresse()<<endl;
                            trouver=true;
                        }
                    }
                    if(!trouver)
                    {
                        cout<<"La personne se trouve pas dans le registrer"<<endl;
                    }
                    break;
                }
                case 3:
                {
                    for(iteration=registre.begin();iteration!=registre.end();iteration=next(iteration))
                    {
                        if((*iteration).getAge()==p.getAge())
                        {
                            cout<<(*iteration).getNom()<<"\t"<<(*iteration).getPrenom()<<"\t"<<(*iteration).getAge()<<"\t"<<(*iteration).getSex()<<"\t"<<(*iteration).getAdresse()<<endl;
                            trouver=true;
                        }
                    }
                    if(!trouver)
                    {
                        cout<<"La personne se trouve pas dans le registrer"<<endl;
                    }
                    break;
                }
                case 4:
                {
                    for(iteration=registre.begin();iteration!=registre.end();iteration=next(iteration))
                    {
                        if((*iteration).getSex()==p.getSex())
                        {
                            cout<<(*iteration).getNom()<<"\t"<<(*iteration).getPrenom()<<"\t"<<(*iteration).getAge()<<"\t"<<(*iteration).getSex()<<"\t"<<(*iteration).getAdresse()<<endl;
                            trouver=true;
                        }
                    }
                    if(!trouver)
                    {
                        cout<<"La personne se trouve pas dans le registrer"<<endl;
                    }
                    break;
                }
                case 5:
                {
                    for(iteration=registre.begin();iteration!=registre.end();iteration=next(iteration))
                    {
                        if((*iteration).getAdresse()==p.getAdresse())
                        {
                            cout<<(*iteration).getNom()<<"\t"<<(*iteration).getPrenom()<<"\t"<<(*iteration).getAge()<<"\t"<<(*iteration).getSex()<<"\t"<<(*iteration).getAdresse()<<endl;
                            trouver=true;
                        }
                    }
                    if(!trouver)
                    {
                        cout<<"La personne se trouve pas dans le registrer"<<endl;
                    }
                    break;
                }
                case 0:
                {
                    rechercheOne=false;
                    break;
                }
                default:
                    break;
            }
        }
         else
        {
            cout<<"\nRegistrer vide"<<endl;
        }
    }
}
void ListePerson::modifierPerson(Person p)
{
    vector <Person> ::iterator iteration;
    bool trouver{false}, modificationOne{true};
    string choixString;
    int choix;
    if(registre.size())
    {
       for(iteration=registre.begin();iteration!=registre.end();iteration=next(iteration))
        {
            if(((*iteration).getNom()==p.getNom())&&((*iteration).getPrenom()==p.getPrenom())&&((*iteration).getAge()==p.getAge())&&((*iteration).getSex()==p.getSex())&&((*iteration).getAge()==p.getAge()))
            {
                cout<<"personne trouver"<<endl;
                trouver=true;
                if(!trouver)
                    modificationOne=false;
                while(modificationOne)
                {
                    cout<<"modifier le:"<<endl;
                    cout<<"1-nom\t2-prenom\t3-age\t4-sexe\t5-adresse\t0-annuler la modification"<<endl;
                    cin>>choixString;
                    choixString="0"+choixString;
                    choix=stoi(choixString);
                    string nom,prenom,ageString,sexe,adresse;
                    int age;
                    switch (choix)
                    {
                        case 1:
                        {
                            cout<<"nouvelle nom: ";
                            cin>>nom;
                            (*iteration).setNom(nom);
                            break;
                        }
                        case 2:                
                        {
                            cout<<"nouvelle prenom: ";
                            cin>>prenom;
                            (*iteration).setPrenom(prenom);
                            break;
                        }
                        case 3:
                        {
                            cout<<"nouvelle age: ";
                            cin>>age;
                            (*iteration).setAge(age);
                            break;
                        }
                        case 4:
                        {
                            cout<<"nouvelle sexe: ";
                            cin>>sexe;
                            (*iteration).setSexe(sexe);
                            break;
                        }
                        case 5:
                        {
                            cout<<"nouvelle nom: ";
                            cin>>adresse;
                            (*iteration).setAdresse(adresse);
                            break;
                        }
                        case 0:
                        {
                            modificationOne=false;
                            break;
                        }
                        default:
                            break;
                    }
                    cout<<"Apres modification:\n"<<(*iteration).getNom()<<"\t"<<(*iteration).getPrenom()<<"\t"<<(*iteration).getAge()<<"\t"<<(*iteration).getSex()<<"\t"<<(*iteration).getAdresse()<<endl;
                }
            }
        }
        if(!trouver)
        {
            cout<<"La personne ne se trouve pas dans le registrer.\n Veuillez verifier les donner entrer."<<endl;
        }
    }
     else
    {
        cout<<"\nRegistrer vide"<<endl;
    }
}
void ListePerson::afficherRegistre()
{
    vector <Person> ::iterator iteration;
    if(registre.size()){
        cout<<"Nom\tPrenom\tAge\tSexe\tAdresse"<<endl;
        for(iteration=registre.begin();iteration!=registre.end();iteration=next(iteration))
        {
            cout<<(*iteration).getNom()<<"\t"<<(*iteration).getPrenom()<<"\t"<<(*iteration).getAge()<<"\t"<<(*iteration).getSex()<<"\t"<<(*iteration).getAdresse()<<endl;
        }
    }
    else
    {
        cout<<"Aucun personne dans le repertoire"<<endl;
    }   
}
void ListePerson::sauvegarde()
{
    fstream fichier;
    string nomFichier;
    vector <Person> ::iterator iteration;
    cout<<"Entrer le nom du fichier d'export: ";
    cin>>nomFichier;
    fichier.open(nomFichier+".xls", ios::out);                                
    if(!fichier){
        cout<<"Erreur lors des chargements des donnés. Veuiller verifier les fichier necessaires. \nMerci"<<endl;
        exit(-1);                                                                                       
    }         
    for(iteration=registre.begin();iteration!=registre.end();iteration=next(iteration))
    {
        fichier<<(*iteration).getNom()<<"\t"<<(*iteration).getPrenom()<<"\t"<<(*iteration).getAge()<<"\t"<<(*iteration).getSex()<<"\t"<<(*iteration).getAdresse()<<endl;
    }
    fichier.close();   
    cout<<"sauvegarde succes"<<endl;          
}
#include "Person.hpp"
    
    Person::Person(/* args */)
    {
    }
    Person::~Person()
    {
    }
    string Person::getNom()
    {
        return nom;
    }
    string Person::getPrenom()
    {
        return prenom;   
    }
    int Person::getAge()
    {
        return age;    
    }
    string Person::getSex()
    {
        return sexe;   
    }
    string Person::getAdresse()
    {
        return adresse;
    }
    void Person::setNom(string nomEntrer)
    {
        nom=nomEntrer;
    }
    void Person::setPrenom(string prenomEntrer)
    {
        prenom=prenomEntrer;   
    }
    void Person::setAge(int ageEntrer)
    {
        age=ageEntrer;   
    }
    void Person::setSexe(string sexeEntrer)
    {
        sexe=sexeEntrer;
    }
    void Person::setAdresse(string adresseEntrer)
    {
        adresse=adresseEntrer;
    }

    void Person::setPerson(string nomp, string prenomp, int agep, string sexep, string adressep)
    {
        nom=nomp;
        prenom=prenomp;
        age=agep;
        sexe=sexep;
        adresse=adressep;
    }
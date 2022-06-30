#ifndef PERSON
#define PERSON
    #include <iostream>
    using namespace std;
    class Person
    {
    private:
        string nom;
        string prenom;
        int age;
        string sexe;
        string adresse;
    public:
        Person();
        string getNom();
        string getPrenom();
        int getAge();
        string getSex();
        string getAdresse();
        void setNom(string nomEntrer);
        void setPrenom(string prenomEntrer);
        void setAge(int ageEntrer);
        void setSexe(string sexeEntrer);
        void setAdresse(string adresseEntrer);
        void setPerson(string nomp, string prenomp, int agep, string sexep, string adressep);
        ~Person();
    };
    
#endif
#ifndef LISTEPERSON
#define LISTEPERSON
    #include"Person.hpp"
    #include"Methode.hpp"
    #include <vector>

    using namespace std;

    class ListePerson
    {
    private:
        vector <Person> registre;
    public:
        ListePerson();
        ~ListePerson();
        void ajouterPerson(Person p);
        void suprimerPerson(Person p);
        void recherchePerson(Person p);
        void modifierPerson(Person p);
        void afficherRegistre();
        void sauvegarde();
    };
    
#endif
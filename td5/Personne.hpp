#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>

enum Genre{
    M,
    F
};

class Personne{
private: 
    std::string nom;
    std::string prenom;
    int age;
    Genre genre;

public:
    // Constructors and distructors
    Personne();
    Personne(std::string nom, std::string prenom, int age, Genre genre);
    virtual ~Personne();
    // getters
    std::string getNom();
    std::string getPrenom();
    int getAge();
    Genre getGenre();
    // setters
    void setNom(std::string nouveauNom);
    void setPrenom(std::string nouveauPrenom);
    void setAge(int nouvelleAge);
    void setGenre(Genre nouveauGenre);
    // methods
    virtual std::string identifier() = 0; // This turns the method in pure virtual
};


#endif
#include <iostream>
#include "Personne.hpp"

// Constructors
Personne::Personne() : nom("remplir"), prenom("remplir"), age(99),  genre(F) {}
Personne::Personne(std::string nom, std::string prenom, int age, Genre genre) : nom(nom), prenom(prenom), age(age), genre(genre) {}

// Destructor: It nows it's virtual, no need to declare. The '~' destroys the object automatically at the end (return) of main 
Personne::~Personne() {
    std::cout << "RIP " << prenom << " " << nom << std::endl;
}

// getters
std::string Personne::getNom() {return nom;}
std::string Personne::getPrenom() {return prenom;}

// setters
void Personne::setNom(std::string nouvelNom){nom = nouvelNom;}
void Personne::setPrenom(std::string nouvelPrenom){nom = nouvelPrenom;}

// Functions
std::string Personne::identifier(){
    return  prenom + " " + nom;
}

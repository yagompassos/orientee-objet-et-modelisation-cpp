#include <iostream>
#include "Etudiant.hpp"

Etudiant::Etudiant() : nom("Maxime"), prenom("charles"), age(50), genre(MASCULIN) { // Direct affection, we instantiate each attribute with the default values
    std::cout << "L etudiant "<< prenom << " " << nom << " est inscrit et il a deja " << age << " ans." << std::endl;
}

Etudiant::Etudiant(std::string nom, std::string prenom) : nom(nom), prenom(prenom), age(20), genre(MASCULIN) {
    std::cout << "L etudiant "<< prenom << " " << nom << " inscrit avec " << age << " ans." << std::endl;
}

Etudiant::Etudiant(std::string nom, std::string prenom, unsigned int age) : nom(nom), prenom(prenom), age(age), genre(MASCULIN) {
    std::cout << "L etudiant "<< prenom << " " << nom << " inscrit avec " << age << " ans." << std::endl;
}

Etudiant::Etudiant(std::string nom, std::string prenom, unsigned int age, Genre genre) : nom(nom), prenom(prenom), age(age), genre(genre) {
    if (genre==MASCULIN)
        std::cout << "L etudiant "<< prenom << " " << nom << " est ne et il a deja " << age << " ans." << std::endl;
    else 
        std::cout << "L etudiantE "<< prenom << " " << nom << " est nee et elle a deja " << age << " ans." << std::endl;

}

Etudiant::Etudiant(const Etudiant & etu) : nom(etu.nom), prenom(etu.prenom), age(etu.age) {
    std::cout << "Copie "<< prenom << " " << nom << " inscrit avec " << age << " ans." << std::endl;
} 

Etudiant::~Etudiant() { // No need to put "virtual" in here, hpp already knows it's virtual and here is just the implementation (compilor already knows its virtual bcs of hpp)
    // The "~" creates by itself the destructor, no need do use "delete" or "delete[]". 
    std::cout << "RIP " << prenom << " " << nom << std::endl;
}

// Getters
std::string Etudiant::getNom(){ return nom; }
std::string Etudiant::getPrenom(){ return prenom; }
unsigned int Etudiant::getAge() { return age; }
Genre Etudiant::getGenre() { return genre; }

// Setters
void Etudiant::setNom(std::string nouvelNom) {
    nom = nouvelNom;
}
void Etudiant::setPrenom(std::string nouvelPrenom) {
    prenom = nouvelPrenom;
}
void Etudiant::setAge(unsigned int nouvelAge){
    if (nouvelAge < 0 || nouvelAge > 120)
        std::cout << "Cet age a echoue les limits acceptes [0 ; 120]" << std::endl;
    else 
        age = nouvelAge;
}
void Etudiant::setGenre(Genre nouveauGenre){
    genre = nouveauGenre;
}

void Etudiant::afficherInfos(){
    std::cout << "Nom du etudiant: " << prenom << " " << nom << std::endl << "Son age: " << age << std::endl;
}
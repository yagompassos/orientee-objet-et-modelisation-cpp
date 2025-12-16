#include <iostream>
#include "Etudiant.hpp"

Etudiant::Etudiant (std::string nom, std::string prenom, int age, Genre genre, std::string matricule) : Personne(nom, prenom, age, genre), matricule(matricule) {};

// getters
std::vector<float> Etudiant::getNotes(){return notes;}

void Etudiant::ajouterNote(float note){
    notes.push_back(note);
};

float Etudiant::calculMoyenne(){
    double sum=0;
    for (int i=0; i<notes.size(); i++) {
        sum += double(notes[i]);
    }
    return float(sum/notes.size());
};

// It already knows it's virtual, no need to declare in here, just in hpp
std::string Etudiant::identifier(){
    return  Personne::identifier() + ". Matricule: " + matricule;
};
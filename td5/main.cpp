#include <iostream>
#include "EtudiantAvecBonus.hpp"
#include "Cours.hpp"
#include "Departement.hpp"

int main() {
    Cours mod(1, "modelisation");
    Cours oop(2, "Programation");
    Cours rtos(3, "RTOS");
    Etudiant et1("Passos", "Yago", 23, M, "M001234");
    Etudiant et2("Parente", "Vincenzo", 23, M, "M002222");
    Etudiant et3("Luza", "Lucas", 23, M, "M003333");
    Etudiant et4("Machado", "Andrew", 23, M, "M04444");

    Departement mea("MEA");
    Departement ig("IG");

    mod.inscrire(&et1);
    oop.inscrire(&et1);
    oop.inscrire(&et2);
    oop.inscrire(&et3);
    oop.inscrire(&et4);
    rtos.inscrire(&et1);
    rtos.inscrire(&et3);
    rtos.inscrire(&et4);
    mod.afficherEtudiants();
    oop.afficherEtudiants();

    mea.ajouterEtudiant(&et1);
    mea.ajouterEtudiant(&et3);
    mea.ajouterEtudiant(&et4);
    ig.ajouterEtudiant(&et2);

    mea.afficherInfos();
    ig.afficherInfos();




    return 0;
}
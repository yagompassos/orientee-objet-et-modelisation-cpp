#include <vector>
#include <string>
#include <iostream>

std::vector<int> v1;
std::vector<std::string> v2;
std::vector<std::vector<double>> v3 = {{1.5, 1.6}, {1.7, 1.8}};
std::vector<int> v4(10);    // vecteur de 10 entiers
std::vector<std::string> v5 = {"ab", "ef", "azy"};

void afficherVecteur(std::vector<std::string> v);
void vecteurPair(std::vector<int>& v, int n); // ADICIONAR O & FAZ A PASSAGEM POR REFERÊNCIA DO VETOR
void vecteurPairImpair(std::vector<int>& v);
void vecteurImpair(std::vector<int>& v);

int main (){
    int a, b, c;
    std::cout << "Give a, b and c integer values: " << std::endl;
    std::cin >> a >> b >> c;

    // Initialiser v1 avec les valeurs "a", "b", "c".
    v1 = {a, b, c};

    // Copier v1 dans v2.

    v2.reserve(v1.size());
    for(int num : v1) {
        v2.push_back(std::to_string(num));
    }

    // Modifier v2[0]
    v2[0] = "saiba";

    //Afficher les tailles
    std::cout << "--- sizes ---" << std::endl;
    std::cout << "size v1: " << v1.size() << std::endl;
    std::cout << "size v2: " << v2.size() << std::endl;
    std::cout << "size v3: " << v3.size() << std::endl;
    std::cout << "size v4: " << v4.size() << std::endl;
    std::cout << "size v5: " << v5.size() << std::endl;
    
    // Afficher le contenu de v5
    std::cout << std::endl << "--- contenu ---" << std::endl;
    std::cout << "v1: ";
    for (int n : v1)    std::cout << n << " - ";
    std::cout << std::endl << "v2: ";
    for (std::string n : v2)    std::cout << n << " - ";
    std::cout << std::endl << "v3: ";
    for (std::vector<double> column : v3) {  
        for (double n : column)
            std::cout << n << " - "; 
        std::cout << std::endl;
    }
    std::cout << "v4: ";
    for (int n : v4)    std::cout << n << " - " ;
    std::cout << std::endl << "v5: ";
    for (std::string n : v5)    std::cout << n << " - ";
    std::cout << std::endl;

    std::cout << std::endl << "--- Procedure afficherVecteur ---" << std::endl;
    afficherVecteur(v5);

    std::cout << std::endl << "--- Procedure vecteurPair (n=6) ---" << std::endl;
    vecteurPair(v1, 6);
    for (int n : v1) std::cout << n << " - ";
    std::cout << std::endl;
    
    std::cout << std::endl << "--- Procedure vecteurPairImpair ---" << std::endl;
    vecteurPairImpair(v1);
    for (int n : v1) std::cout << n << " - ";
    std::cout << std::endl;

    std::cout << std::endl << "--- Procedure vecteurImpair ---" << std::endl;
    vecteurImpair(v1);
    for (int n : v1) std::cout << n << " - ";
    std::cout << std::endl;

}

void afficherVecteur(std::vector<std::string> v){
    for (int i=0; i<v.size(); i++)
        std::cout << v[i] << " - ";
    std::cout << std::endl;
}

void vecteurPair(std::vector<int>& v, int n){
    for (int n : v) v.pop_back();
    for (int i=0; i<n; i=i+2){
        v.push_back(i);
    }
}

void vecteurPairImpair(std::vector<int>& v){
    int tamanho_original = v.size();

    for(int i = 0; i < tamanho_original; i++) {
        int numero_par = v[i + i];  // A posição muda a cada inserção!
        int numero_impar = numero_par - 1;
        
        // Inserir o ímpar antes do par
        v.insert(v.begin() + (i * 2), numero_impar);
    }
    v.erase(v.begin());
}

void vecteurImpair(std::vector<int>& v){
    for (int i=0; i<v.size(); i++) {
        if (v[i]%2 ==0)
            v.erase(v.begin() + i);
    }
}
#include <iostream>
#include <random>

using namespace std;

int main() {
    int reponse;
    std::random_device rd;
    std::mt19937 rng(rd());

    int min = 1; // Valeur minimale
    int max = 100; // Valeur maximale

    std::uniform_int_distribution<int> uni(min, max);

    int randomNum = uni(rng); // Génération d'un nombre aléatoire

    std::cout << "choisir un nombre entre 1  et 100: \n";
    std::cin >> reponse ;
    while (reponse != randomNum){

        if (reponse < randomNum){
            std::cout << "c'est plus grand: \n";
            std::cout << "choisir un nombre entre 1  et 100: \n";
            std::cin >> reponse ;
        }
        if(reponse > randomNum){
            std::cout << "c'est plus petit:\n";
            std::cout << "choisir un nombre entre 1  et 100: \n";
            std::cin >> reponse ;
        }


    }
    std::cout << "C'est gagné!!!!";

}
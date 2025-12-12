#include <fstream>
#include <iostream>
#include "Scheduler.h"

int main() {

    std::ofstream log("../log.csv", std::ios::trunc);  //Initialisation du log.csv

    if (!log.is_open()) {  //Initialisation du fichier log.csv
        std::cerr << "Erreur : impossible de trouver le fichier log.csv\n";
    }else {
        std::cout << "fichier des logs ouvert, demarrage simulation\n";
    }

    log << "Time, Id, Name, Function, IdLocation, Location, AuthorizedOrNot" << std::endl;
    log.close();

    simulation(); //lance simulation dans Scheduler

    return 0;
}

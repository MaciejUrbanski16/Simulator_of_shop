//
// Created by Admin on 04.01.2021.
//

#ifndef MACHINEOFSTATE_APPLICATION_H
#define MACHINEOFSTATE_APPLICATION_H

#include <vector>
#include <string>
#include <fstream>
#include <iostream>
//#include "ConcreteBagpack.h"

///KLASA DO PRZECHOWYWANIA KONFIGURACJI SYMULATORA
class Application {

protected:

    static Application *app;
public:
    Application() = default;

    Application(Application &other) = delete;
    void operator=(const Application &other) = delete;

    static Application *getInstance();

    int stage;
    int mode;

    //container to storage names of things removed from basket during shopping

    std::vector<std::string> removedThings;

    void saveRemovedToFile();

    void readRemovedFromFile();

    void presentationOfServices();

    int chooseOfService();              //wybor kategorii


};


#endif //MACHINEOFSTATE_APPLICATION_H

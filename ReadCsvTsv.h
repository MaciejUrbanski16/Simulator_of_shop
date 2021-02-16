//
// Created by Admin on 06.02.2021.
//

#ifndef MACHINEOFSTATE_READCSVTSV_H
#define MACHINEOFSTATE_READCSVTSV_H

#include "ServiceCsvTsv.h"
#include "ConcreteBook.h"

namespace shop{
    class ConcreteBook;
}

namespace base {

    class ReadCsvTsv : public ServiceCsvTsv {
    public:
        ReadCsvTsv(std::string path);

        void readFromFile(std::vector<std::string> &names, std::vector<int> &amounts, std::vector<double> &prices);

        void readFromFile(std::vector<shop::ConcreteBook> &books, std::vector<int> &amounts);

    private:
        std::string path;

    };
}


#endif //MACHINEOFSTATE_READCSVTSV_H

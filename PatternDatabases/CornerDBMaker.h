//
// Created by User on 08/02/24.
//

#ifndef MYRUBIKSCUBESOLVER_CORNERDBMAKER_H
#define MYRUBIKSCUBESOLVER_CORNERDBMAKER_H

#include "CornerPatternDatabase.h"


using namespace std;

class CornerDBMaker {
private:
    string fileName;
    CornerPatternDatabase cornerDB;

public:
    CornerDBMaker(string _fileName);
    CornerDBMaker(string _fileName, uint8_t init_val);

    bool bfsAndStore();
};

#endif //MYRUBIKSCUBESOLVER_CORNERDBMAKER_H

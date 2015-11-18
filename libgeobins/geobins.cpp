#include "geobins.h"

Geobins::Geobins(bool c){
    this->test_var = c;
}

bool Geobins::test(bool){
    return this->test_var;
}
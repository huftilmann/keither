#ifndef KEITHER_H_INCLUDED
#define KEITHER_H_INCLUDED

#include "neither/either.hpp"


int main(int argc, char const *argv[]);
neither::Either<int, std::exception> divide(int a, int b);
#endif //KEITHER_H_INCLUDED

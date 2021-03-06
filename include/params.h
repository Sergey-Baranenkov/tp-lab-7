//
// Created by araxal on 05.04.2020.
//

#ifndef UNTITLED_PARAMS_H
#define UNTITLED_PARAMS_H

#include <cstdlib>
#define STONE_N '#'
#define PREY_N 'f'
#define PREDATOR_N 'P'
#define EMPTY_N '.'

const auto delay = 1;
const size_t N = 50;
const size_t M = 50;

const unsigned int fishLifespan = 10;
const unsigned int predatorMaxHunger = 7;
const unsigned int predatorHungerSatCoefficient = 7;

const unsigned int preyLayEggProbabilityAfterMove = 40;
const unsigned int predatorLayEggProbabilityAfterMove = 80;

#endif //UNTITLED_PARAMS_H


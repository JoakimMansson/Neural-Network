#include "neuron.h"
#include <iostream>
#include <random>



Neuron::Neuron()
{
    std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_real_distribution<> distr(0, 1);
    
    bias = distr(eng);
    weight = distr(eng);
}



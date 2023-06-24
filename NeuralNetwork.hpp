#ifndef _NEURAL_NETWORK_HPP_
#define _NEURAL_NETWORK_HPP_
#include <iostream>
#include "Matrix.hpp"
#include "Layer.hpp"
#include <vector>
using namespace std;

class NeuralNetwork
{
    public:
        NeuralNetwork(vector<int> topology);
        void setCurrentInput(vector<double> input);
        void printToConsole();
    private:
        int               topologySize;
        vector<int>       topology;
        vector<Layer *>   layers;
        vector<Matrix *>  weightedMatrices;
        vector<double>    input;

};

#endif
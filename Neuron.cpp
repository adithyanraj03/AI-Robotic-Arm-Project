#include  "../include/Neuron.hpp"
//Constructor
Neuron::Neuron(double val){
    this->val = val;
    activate();
    derive();
}
                                                                        // Fast Sigmoid Function

void Neuron::activate(){
    this->activatedVal = this->val/(1+ abs(this->val));              // f(x) = x/(1+|x|)
}
void Neuron::derive(){
this->derivedVal = this->activatedVal * (1 - this->activatedVal); }     // f'(x) = f(x) * (1- f(x))
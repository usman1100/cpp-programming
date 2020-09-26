#include<iostream>
#include<cstdlib>
#include "utils.h"

template <int n_inputs>
class neuron
{
private:
    float weights[n_inputs];
    float bias;
public:
    neuron()
    {
        for (int i = 0; i < n_inputs; i++)
        {
            weights[i] = random_float();
        }
        bias = random_float();
    }


    float calculate(float inputs[n_inputs])
    {
        float result = 0;
        for (int i = 0; i < n_inputs; i++)
        {
           result += inputs[i] * weights[i];
        }
        result += bias;

        

        return result;
        
    }
};


int main()
{

}
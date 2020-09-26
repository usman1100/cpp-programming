#include<iostream>
#include<cstdlib>
#include<ctime>
#include "neuron_lib.h"
using namespace std;

template <int n_neurons, int n_inputs>
class layer
{
private:
    neuron<n_inputs> neurons[n_neurons];
public:

    float* calculate(float inputs[n_inputs])
    {
        float* output = new float[n_neurons];

        for (int i = 0; i < n_neurons; i++)
        {
            output[i] = neurons[i].calculate(inputs);
        }
        

        return output;
    }
    
};

int main()
{
    srand(time(NULL));
    layer<10, 5> in;

    float inputs[5] = {1.32, 5.12, 0.43, 2.545, -2.55};
    float* res = new float[10];

    res = in.calculate(inputs);

    print_array(res, 10);
    
}
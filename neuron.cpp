#include<iostream>
#include<cstdlib>
#include<ctime>
#include "utils.h"

using namespace std;
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


    void print_weights()
    {
        for (int i = 0; i < n_inputs; i++)
        {
            cout<<weights[i] <<endl;
        }
        
    }
};


int main()
{
    srand(time(NULL));
    neuron<5> n[10];
    for (int i = 0; i < 5; i++)
    {
        n[i].print_weights();
        cout<<"-------------------------------\n";
    }
    
}
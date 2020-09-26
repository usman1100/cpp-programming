#include <iostream>
#include <cstdlib>
using namespace std;

void print_array(float* arr, int size)
{
	cout<<"\n===================================\n";
	for (size_t i = 0; i < size; i++)
	{
		cout<<arr[i] <<endl;
	}

	cout<<"===================================\n";
	
}

float random_float()
{
	float r;
	r=static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
	return r;
}
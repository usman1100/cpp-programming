#include <iostream>
#include <cstdlib>


float random_float()
{
	float r;
	r=static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
	return r;
}
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

template <int neurons>
class Layer

private:
	float weights[neurons];
	float bias;

public:
	float * calculate(float input[neurons])
	{

		float *out = new float[neurons];

		for (int i = 0; i < neurons; ++i)
		{
			for (int j = 0; j < neurons; j++)
			{
				out[j] = 0;
				for (int k = 0; k < neurons; k++)
				{
					out[j] += weights[k]*input[k];
				}
				out[j] += bias;
				
			}
		}

		return out;
	}

	Layer()
	{
		srand((unsigned int)time(NULL));
		for (int i = 0; i < neurons; ++i)
		{

			weights[i] = (float(rand()) / float((RAND_MAX)) * 3.1231);
		}
		bias = (float(rand()) / float((RAND_MAX)) * 3.1231);
	}

	void print_weights()
	{
		for (int i = 0; i < neurons; ++i)
		{
			cout << weights[i] << "\n";
		}
	}
};

int main()
{
	const int size = 5;
	Layer<size> l1;
	float inp[size] = {0.0};


	for (int i = 0; i < size; i++)
	{
		inp[i] = (float)i*2.124 + 1.124;
	}
	

	l1.print_weights();

	float *res;
	res = l1.calculate(inp);


	cout<<"\n\n" <<res[0];
	
	
}
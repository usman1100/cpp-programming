#include <iostream>
#include "utils.h"
using namespace std;

class Matrix2D
{
private:
    float **data;
    int rows, cols;
    int size;

public:
    Matrix2D(int rows, int cols)
    {

        this->data = new float*[rows];

        for (int i = 0; i < rows; i++)
        {
            data[i] = new float[cols];
        }

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                data[i][j] = 0;
            }
        }

        this->rows = rows;
        this->cols = cols;
        this->size = (rows*cols)*4;
    }

    void print_values()
    {
        for (int i = 0; i < this->rows; i++)
        {
            for (int j = 0; j < this->cols; j++)
            {
                cout << data[i][j] << "\t";
            }
            cout << endl;
        }
    }

    int get_size(){return this->size;}

    int get_rows(){return this->rows;}
    int get_cols(){return this->cols;}

    Matrix2D operator*(Matrix2D &m2){
        return m2;
    }
};


int main()
{
    Matrix2D m(3, 4);
    cout<<sizeof(m) <<endl;
    cout<<sizeof(Matrix2D) <<endl;
    cout<<m.get_size() <<endl;
}

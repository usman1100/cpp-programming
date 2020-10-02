#include <iostream>
#include <cstdlib>
using namespace std;
#define SIZE 5
void print_array(int arr[], int size)
{
  for (int i = 0; i < size; i++) {
    cout<<arr[i] <<" ";
  }

  cout<<endl;
}
void sort(int arr[], int n)
{
	int i,j,key;
	for (int i = 1; i < n; ++i)
	{
		key = arr[i];

		j = i - 1;
		while(j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j --;
			print_array(arr, SIZE);
		}

		arr[j + 1] = key;

		cout<<"\n\n";
		print_array(arr, SIZE);
	}


}

int main()
{
  int *arr = new int[SIZE];
  for (int i = 0; i < SIZE; ++i)
  {
  	arr[i] = SIZE - i;
  }
  print_array(arr, SIZE);

  sort(arr, SIZE);

  cout<<"Sorting Done\n";
  

}

#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n);
void countingSort(int arr[], int n);




int main()
{
	int arr[] = { 3, 4, 5, 6, 3, 10, 5, 4, 7 };

	//bubbleSort(arr, 9);
	countingSort(arr, 9);
	//for (int i = 1; i < 9; i++)
	//	cout << arr[i] << " ";


	return 0;
}

void bubbleSort(int arr[], int n)
{
	int tmp;

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n-i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

}

void countingSort(int arr[], int n)
{
	int count[10] = { 0 };
	
	int tmp[9];
	for (int i = 0; i < n; i++)
	{
		count[arr[i] - 1]++;
	}
	
	for (int i = 1; i < 10; i++)
	{
		count[i] += count[i - 1];
	}
	
	for (int i = n - 1; i >= 0; i--)
	{
		tmp[count[arr[i]-1]-1] = arr[i];
		count[arr[i] - 1]--;
	}
	for (int i = 0; i < n; i++)
	{
		cout << tmp[i] << " ";
	}
}

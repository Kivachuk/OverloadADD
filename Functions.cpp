
#include "Functions.h"
#define tab "\t"


void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);

void Print(int arr[], const int n);


main()
{

}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 1000 / (double)100;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
}
void Print(double arr[], const int n)
{

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}


}



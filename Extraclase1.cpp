#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

class PagedArray{

    public:
    void prueba();

};

void PagedArray::prueba(){
    cout<<"Hola mundo"<<endl;
    
}


//----------------------------------------
// C++ program for quicksort
//----------------------------------------

int partition(int arr[], int low, int high)
{
	int i = low;
	int j = high;
	int pivot = arr[low];
	while (i < j)
	{
		while (pivot >= arr[i])
			i++;
		while (pivot < arr[j])
			j--;
		if (i < j)
			swap(arr[i], arr[j]);
	}
	swap(arr[low], arr[j]);
	return j;
}

void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pivot = partition(arr, low, high);
		quickSort(arr, low, pivot - 1);
		quickSort(arr, pivot + 1, high);
	}
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


//----------------------------------------
// C++ program for insertion sort
//----------------------------------------
  // Function to sort an array using insertion sort

void insertionSort(int arr2[], int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++)
    { 
        key = arr2[i]; 
        j = i - 1; 
  
        // Move elements of arr[0..i-1], that are greater than key, to one 
        // position ahead of their current position
        
		while (j >= 0 && arr2[j] > key)
        { 
            arr2[j + 1] = arr2[j]; 
            j = j - 1; 
        } 
        arr2[j + 1] = key; 
    } 
} 
  
// A utility function to print an array of size n 

void printArray2(int arr2[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        cout << arr2[i] << " "; 
    cout << endl;
} 
  
//----------------------
// Funtion main
//----------------------

int main()
{
    PagedArray objeto; 
    objeto.prueba();
    int arr[] = {4, 2, 8, 3, 1, 5, 7,11,6};
	int size = sizeof(arr) / sizeof(int);
	cout<<"Before quick sort"<<endl;
	printArray(arr, size);
	quickSort(arr, 0, size - 1);
	cout<<"After quick sort"<<endl;
	printArray(arr, size);
    
	// Run insertion sort
	int arr2[] = { 12, 11, 13, 5, 6 }; 
    int N = sizeof(arr2) / sizeof(arr2[0]); 
	cout<<"Before insertion sort"<<endl;
	printArray2(arr2, N); 
    insertionSort(arr2, N); 
	cout<<"After insertion sort"<<endl;
    printArray2(arr2, N);

	return 0;

}
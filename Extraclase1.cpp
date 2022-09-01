//Insert libraries
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;
int* p; 
int f; // filas
int c; // columnas
vector<int> arrayline; // declaring new vector

class PagedArray{

    public:
    int size;
    vector<int> array;
    PagedArray(int, vector<int>);
    int* Pagination();
    void prueba();

};

PagedArray::PagedArray(int size1, vector<int> array1){
    size = size1;
    array = array1;
    
}

void PagedArray::prueba(){
    cout<<"Hola mundo"<<endl;
    
}


//----------------------------------------
// C++ program for quick sort
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

void insertionSort(int arr[], int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++)
    { 
        key = arr[i]; 
        j = i - 1; 
  
        // Move elements of arr[0..i-1], that are greater than key, to one 
        // position ahead of their current position
        
		while (j >= 0 && arr[j] > key)
        { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
} 
  
// Function to print an array of size n 

void printArray2(int arr[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    cout << endl;
} 
  


//----------------------------------------
// C++ program for selection sort
//----------------------------------------

 
//Swap function
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
       
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
 
        // Swap the found minimum element with the first element
        if(min_idx!=i)
            swap(&arr[min_idx], &arr[i]);
    }
}
 
//Function to print an array
void printArray3(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 

//----------------------
// Funtion main
//----------------------

int main(int argc, char* argv[]){

    PagedArray objeto; 
    objeto.prueba();

	// Run quick sort
    int arr[] = {4, 2, 8, 3, 1, 5, 7,11,6};
	int size = sizeof(arr) / sizeof(int);
	cout<<"Before quick sort"<<endl;
	printArray(arr, size);
	quickSort(arr, 0, size - 1);
	cout<<"After quick sort"<<endl;
	printArray(arr, size);
    
	// Run insertion sort
	//int arr[] = { 12, 11, 13, 5, 6 }; 
    int N = sizeof(arr) / sizeof(arr[0]); 
	cout<<"Before insertion sort"<<endl;
	printArray2(arr, N); 
    //insertionSort( arr , N); 
	cout<<"After insertion sort"<<endl;
    printArray2(arr, N);


	//Run selection sort
	//int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Before selection sort"<<endl;
	printArray3(arr, n);
    selectionSort(arr, n);
    cout << "After selection sort"<<endl;
    printArray3(arr, n);

	return 0;

}
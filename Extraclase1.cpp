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


int* PagedArray::Pagination(){
    p=(int *) malloc(6*(256*sizeof(int)));
    for (size i=0; i<array.size(): i++){
        p[i]= array [i]:
    }
    
    return 0;
}


void PagedArray::prueba(){
    cout<<"Hola mundo"<<endl;
    
}

// get cvs and pass to array
//int get_cvs(){

//} // No pude hacer esta parte :(


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
  
// Function to print an array of size n 

void printArray2(int arr2[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        cout << arr2[i] << " "; 
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
 
void selectionSort(int arr3[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
       
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr3[j] < arr3[min_idx])
            min_idx = j;
 
        // Swap the found minimum element with the first element
        if(min_idx!=i)
            swap(&arr3[min_idx], &arr3[i]);
    }
}
 
//Function to print an array
void printArray3(int arr3[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr3[i] << " ";
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
	int arr2[] = { 12, 11, 13, 5, 6 }; 
    int N = sizeof(arr2) / sizeof(arr2[0]); 
	cout<<"Before insertion sort"<<endl;
	printArray2(arr2, N); 
    insertionSort( arr2 , N); 
	cout<<"After insertion sort"<<endl;
    printArray2(arr2, N);


	//Run selection sort
	int arr3[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr3)/sizeof(arr3[0]);
	cout<<"Before selection sort"<<endl;
	printArray3(arr3, n);
    selectionSort(arr3, n);
    cout << "After selection sort"<<endl;
    printArray3(arr3, n);

	return 0;

}
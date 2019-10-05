# include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int size){
	int i, j, key;

	for(i=1; i<size; i++){
		j = i-1;
		key = arr[i];

		while(j>=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j = j - 1;
		}

		arr[j + 1] = key;
	}
}

int main(){
	int n, i;

	cout << "Enter the size of the array to be sorted : - \n";
	cin >> n;

	int arr[n];
	cout << "\nEnter " << n << " elements of the array : - \n";
	for(i=0; i<n; i++)
		cin >> arr[i];

	insertion_sort(arr, n);

	cout << "\nThe sorted array is : \n";
	for(i=0; i<n; i++)
		cout << arr[i] << " ";
}
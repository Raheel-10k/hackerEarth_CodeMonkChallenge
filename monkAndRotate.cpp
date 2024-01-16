#include <iostream>
using namespace std;
void rotateArrayLeft(int arr[], int size, int positions) {
    int indexed=size-(positions%size); // To handle cases where positions are greater than array size

    int temp[size], tempIndexVal=0;
    for (int i = indexed; i < size; i++) {
        temp[tempIndexVal] = arr[i];
		tempIndexVal++;
    }//temp arr creation
	for (int i= 0; i<indexed;i++) {
		temp[tempIndexVal]=arr[i];
		tempIndexVal++;
	}
	for(int i=0; i<size;i++) {
		cout<<temp[i]<< " ";
	}
	cout<<endl;
}
int main() {
	int t=0;	//t number of test cases
	cin>>t;
	int n=0, k=0;	//n number of elements of array, k number of rotations.
	for(int i=0; i<t; i++) {
		cin>>n>>k;

		int arr[n];
		for(int j=0;j<n; j++) {
			cin>>arr[j];
		}
		rotateArrayLeft(arr, n, k);
	}//for test cases
	return 0;
}
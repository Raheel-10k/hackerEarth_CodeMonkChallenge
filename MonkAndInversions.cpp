#include "iostream"
using namespace std;

int main() {
    int t=0, n=0;
    cin>>t;
    for (int i=0; i<t;i++) {
        cin>>n;
        int arr[n][n];
        for (int j=0; j<n;j++) {
            for(int k=0; k<n;k++) {
                cin>>arr[j][k];
            }
        }//occupy array
        int count=0;
        //counting based on question condition:
        for(int j=0; j<n; j++) {
            for(int k=0; k<n; k++) {
                for(int l=j; l<n; l++) {
                    for(int m=k; m<n; m++) {
                        if(arr[j][k] > arr[l][m]) {
                            count++;
                        }//additional question 
                    }
                }
            }
        }//inversion logics

        cout<<count;
        cout<<endl;
    }
    return 0;
}
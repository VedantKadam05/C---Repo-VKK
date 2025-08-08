#include <iostream>
using namespace std;
int main(){
    int arr[] = {2,5,6,8,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<=size; i++){
        cout<< arr[i] <<" ";
        
    }
}
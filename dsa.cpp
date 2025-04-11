#include <iostream>
#include <string>
#include <climits>
using namespace std;

int Linear_Search(int (&arr)[7], int target ) {
  
    for(int i=0; i<7; i++){
        if ( arr[i] == target){
           return i;
        }
    }
    return -1;
}

int main()  {
    int arr[]={4, 2, 7, 8, 1, 2, 5};
    int target;
    cout << "Enter the target number to search: ";
    cin>> target;

    cout << Linear_Search(arr, target);

 return 0;   
}
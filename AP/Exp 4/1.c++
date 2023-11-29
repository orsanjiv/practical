#include <bits/stdc++.h>
using namespace std;

// void checkDistinct(int arr1[],int arr2[],int n1,int n2){
//     sort(arr1,arr1+n1);
//     sort(arr2,arr2+n2);
//     int newArr[10];
//     for(int i=0;i<n1;i++){
//         if(arr1[i] != arr2[i]){
//             newArr[i] = arr1[i];
//             newArr[i+1] = arr2[i];
//         }
//     }
    
// }
int main(){

    int arr1[] = {10,20,40,60};
    int arr2[] = {10,70,60,80};
    int resArr[5];
    int n1 = sizeof(arr1)/sizeof(arr1[0]);    
    for(int i =0 ;i<n1-1;i++){
        for(int j = 0 ;j<n1-1;j++){
            if(arr1[i] != arr2[j]){
                resArr[i] = arr1[i];
            }
        }
    }

    for(int i=0;i<n1;i++){
        cout<<resArr[i]<<" ";
    }
   
}
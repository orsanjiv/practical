#include <bits/stdc++.h> 
using namespace std;
void findFrequency(int arr[], int n)
{
unordered_map<int, int> mp; 
  for (int i = 0; i < n; i++) {
     mp[arr[i]]++;
  }
  for (auto i : mp) {
    cout <<i.first << " comes "<< i.second << " times" << endl;
    }
}
void findFrequencyOrdered(int arr[], int n)
{
  map<int, int> mp; 
  for (int i = 0; i < n; i++) {
     mp[arr[i]]++;
  }
  for (auto i : mp) {
    cout <<i.first << " comes "<< i.second << " times" << endl;
    }
}

int main(){
  int arr[] = { 1, 2, 5, 2, 3, 6, 5, 5, 8, 9, 11, 9, 9, 10 };
  int n = sizeof(arr) / sizeof(arr[0]);
  cout<<"Using Unordered Map:"<<endl; 
  findFrequency(arr, n);

  cout<<"Using Ordered Map:"<<endl; 
  findFrequencyOrdered(arr, n);
  return 0;
}

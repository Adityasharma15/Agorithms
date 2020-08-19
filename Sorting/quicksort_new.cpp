#include<bits/stdc++.h>
using namespace std;

int partition( vector<int> &arr, int left , int right)
{
  int pivot = arr[right];
  int ptr = left;

  for(int i = left; i<right; i++)
  {
    if(arr[i] < pivot)
    {
      swap(arr[ptr++], arr[i]);
    }
  }
    swap(arr[right] , arr[ptr]);
  return ptr;
}

void quicksort(vector<int> &arr, int left, int right)
{

  if(left<right)
  {
    int part = partition(arr, left, right);

    quicksort(arr, left , part-1);
    quicksort(arr, part + 1, right);
  }

  return;
}

int main()
{
  int n;
  cin >> n;

  vector<int> arr(n);

  for(int i = 0; i<n; i++)
    cin >> arr[i];

  quicksort(arr, 0, n-1);

  for(auto i:arr)
    cout << i << " ";

  cout << "\n";
  return 0;
}

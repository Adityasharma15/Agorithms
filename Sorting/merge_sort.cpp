#include<bits/stdc++.h>
#define ll long long
using namespace std;

void merge(vector<int> & arr, int left, int mid, int right)
{
  int i = 0;
 int ptr1 = left, end = right, ptr2 = mid;
 vector<int> temp_arr((right-left)+2);

 while(ptr1<=(mid-1) && ptr2<=right)
 {
     while(ptr1<=(mid-1) && arr[ptr1] <= arr[ptr2])
     {
       temp_arr[i++] = arr[ptr1++];
     }

     while(ptr2<=right && arr[ptr2] <= arr[ptr1])
     {
       temp_arr[i++] = arr[ptr2++];
     }
 }

 while(ptr1<=(mid-1))
 {
   temp_arr[i++] = arr[ptr1++];
 }

 while(ptr2<=right)
 {
   temp_arr[i++] = arr[ptr2++];
 }

 for(int j = left; j<=right; j++)
 {
   arr[j] = temp_arr[j - left];
 }

    return;
}

void merge_sort(vector<int> & arr, int left, int right)
{
    if(left < right)
    {
      int mid = (left+right)/2;
      merge_sort(arr, left, mid);
      merge_sort(arr, mid+1, right);

      merge(arr, left, mid+1, right);
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

  merge_sort(arr, 0, n-1);

  for(auto i:arr)
    cout << i << " ";

  cout << "\n";
  return 0;
}

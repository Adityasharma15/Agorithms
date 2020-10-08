// 992. Subarrays with K Different Integers

class Solution {

// We will approach this problem using sliding window protocol
public:
    int subarraysWithKDistinct(vector<int>& A, int K) {

       // these will contain the 'smallest' window that has
       // exactly k different elements .
       int left = 0, right = 0;

       // stores our answer
       int subarrays = 0;

       // stores count of elements that can be included and our
       // subarray will still have exactly k uniques
       int prefix_count = 0;

       unordered_map<int, int> mapp;
       int count = 0; // counts of different elements

       for(int right = 0; right<A.size(); right++){

           // if the element added is unique
           if(mapp[A[right]]++ == 0 )
                count++;

           // if we found a new unique element, just drop short
           // last element because we know it is unique
           // otherwise, the window would have shrinked more
           if(count >K){
              mapp[A[left++]]--;
              count--;
              prefix_count = 0;
           }

           // try to shrink the window from left and inc prefix elements that
           // can also be used to form the subarrays
           if(count == K){

               while(mapp[A[left]] > 1){
                   prefix_count++;
                   mapp[A[left++]]--;
               }

               // prefix array of size prefix_count just before left
               // of any length can be taken or not, so add prefix-count + 1
               subarrays += prefix_count+1;
           }
        }

        return subarrays;
    }
};

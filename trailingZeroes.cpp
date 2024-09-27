#include<bits/stdc++.h>
using namespace std;

class Solution{
    public: 
        long long trailingZeroes(int N){
            // find the number of trailing zeroes in the factorial of the number
            // time: O(logN) space: O(1) 
            long long count = 0, temp = 5;
            while(temp <= N){
                count += N/temp;
                temp *= 5;
            }
            return count;
        }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        Solution Sol;
        cout << Sol.trailingZeroes(N) << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public: 
        long long factorial(int N){
            // find the factorial of the number
            // time: O(N) space: O(N) 
            // space complexity can be reduced by using a for loop instead of recursion
            if(N <= 1)
                return 1;
            else 
                return N * factorial(N-1);
        }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        Solution Sol;
        cout << Sol.factorial(N) << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public: 
        int evenlyDivides(int N){
            // find the number of digits of N that evenly divide N itself
            int lastDigit, count = 0, copyN = N;
            while(N > 0){
                lastDigit = N % 10;
                N /= 10;
                // checking if the last digit is not zero to avoid floating point error 
                // caused by modulo operation with zero
                if(lastDigit != 0 && copyN % lastDigit == 0){
                    count++;
                }
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
        cout << Sol.evenlyDivides(N) << endl;
    }
    return 0;
}
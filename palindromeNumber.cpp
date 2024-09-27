#include<bits/stdc++.h>
using namespace std;

class Solution{
    public: 
        string isPalindrome(int N){
            // find if the number is a palindrome
            int copyN = N, reverse = 0;
            while(N > 0){
                int lastDigit = N % 10;
                N /= 10;
                reverse += reverse*10 + lastDigit;
            }
            if(reverse == copyN)
                return "Yes";
            else 
                return "No";
        }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        Solution Sol;
        cout << Sol.isPalindrome(N) << endl;
    }
    return 0;
}
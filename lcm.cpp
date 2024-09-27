#include<bits/stdc++.h>
using namespace std;

class Solution{
    public: 
        long long gcd(int a, int b){
            // find the lcm of a two numbers using the euclidean algorithm 
            // concept: if a number divides a and b, then it must divide a-b as well 
            // a is the larger number and b is the smaller number 
            int minNum = min(a, b);
            int maxNum = max(a, b);
            if(b == 0)
                return a;
            else 
                return gcd(minNum, maxNum % minNum);            
        }
        long long lcm(int a, int b){
            return a * b / gcd(a, b);
        }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        Solution Sol;
        cout << Sol.lcm(a, b) << endl;
    }
    return 0;
}
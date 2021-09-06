/* Problem Code -FLOW016  Platform-Codechef Author - Raman Mehta*/
#include <iostream>
#include <cstdio>
#define ll long long
using namespace std;

ll gcd(ll a,ll b) {
 
    if(b==0) {
        return a;
    }
 
    return gcd(b, a%b);
}

ll lcm(ll a, ll b) {
 
    return (a*b) / gcd(a,b);
}
int main() {
    // * Initializing the variables
    int numberOfTestCases;
    ll a, b;
 
    // * Accepting the number of test cases
    cin>>numberOfTestCases;
 
    // * Executing each test case one by one
    while(numberOfTestCases--) {
 
        // * Accepting two numbers for the current test case
        cin>>a>>b;
 
        // * Calculating and displaying the GCD and LCM of two numbers
        cout<<gcd(a, b)<<" "<<lcm(a,b);
 
        // * Adding a new line before executing the next test case
        cout<<endl;
    }}
            
/*Problem Name -Optimal Adjacent Removal , Problem Code- REMCHR , Platform - Codechef
                         Solution by :Raman Mehta
*/
#include <iostream>
#include<stack>
#include<cstring>
using namespace std;

int main() {
    
    int  t; cin>>t;
    
    while(t-->0){
        stack<char>st;
        string s; cin>>s; 
        for(int i=0;i<s.length();i++){
            char c =s[i];
            if(st.empty()||(st.top()!=s[i])){
                st.push(c); 
            }else{
                if(st.top()==s[i]) st.pop();
            }
        }
        int count=0;
        if(st.empty()){
        
        }
        else{
            while(!st.empty()){
                count++; st.pop();
                
            }
        }
        cout<<count<<endl;
        
    }
    
	
	return 0;
}

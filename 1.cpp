/*
        Author ::  phoenix91
*/
#include <bits/stdc++.h>
using namespace std;

#define ll            long long

void QT(){

    int n = 100 ; 

    int sum = 0 ; 

    for( int i = 3 ; i <= 100 ; i ++ ){
        sum += ((((i%3)==0) or ((i%5)==0)) ? i : 0 ) ; 
    }

    cout << sum << '\n'
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);      
    
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int kase = 1 ; //  cin>>kase  ;  
    while( kase -- ) {
        QT(); 
    }
    
return 0;
} 
     
   

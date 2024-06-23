/*
        Author ::  phoenix91
*/
#include <bits/stdc++.h>
using namespace std;







int main(){


     long long n ; cin >> n ; 

     long long ans = 1 ; 

     for( long long i = 2 ; i * i <= n ; i ++ ){
     	while( n % i == 0 ){
     		n/=i ; 
     		ans = max( ans , i ) ; 
     	}
     }

     ans = max( ans , n ) ; 

     cout << ans << '\n' ; 

  

    
return 0;
} 
     
   

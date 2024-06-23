/*
        Author ::  phoenix91
*/
#include <bits/stdc++.h>
using namespace std;




int main(){


     int ans = -1 ; 

     for( int i = 100 ; i < 1000 ; i ++ ){
     	for( int j = 100 ; j < 1000 ; j ++ ){
     		int k = i * j ; 
     		string s = to_string( k ) ; 
     		auto p = s ; 
     		reverse( p.begin() , p.end( ) ) ; 
     		if( p == s ){ ans = max( ans , k ) ; }
     	}
     }


     cout << ans << '\n' ; 

     //string s ; cin >> s ; 

    
return 0;
} 
     
   

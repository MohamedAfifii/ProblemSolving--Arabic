#include <bits/stdc++.h>

#define loop(n) for(int  i= 0 ; i< (n) ; i++)
#define ll long long
#define vi vector<int>
#define pii pair<int,int>


#define inf LONG_LONG_MAX

using namespace std;



int main() {



	int n ; cin >> n ;

	map<string , bool> printed ;     // recipient printed or not 

	vector<string> v(n) ;      

	loop(n){

		string f  ; cin  >> f ;

		v[i] = f ;

		printed[f] = 0  ;
	}

	for(int i= n-1 ; i>=0 ; i--){  // print recipient backward 

		if(!printed[ v[i] ]){           // have not printed yet  
			printed[ v[i]  ] =1 ;       // printed 
			cout << v[i] <<'\n' ;
		}

	}

	return 0;
}

#include <bits/stdc++.h>

#define loop(n) for(int  i= 0 ; i< (n) ; i++)
#define ll long long
#define vi vector<int>
#define pii pair<int,int>


#define inf INT_MAX

using namespace std;


int main() {

	map<string , string> m ;

	while(1){
		string in ;
		getline(cin , in) ;
		if(! in.length() )break ;

		stringstream ss;
		ss << in ;
		string enWord ,frWord ;
		ss >> enWord >> frWord ;

		m[frWord] = enWord  ;

	}

	string message ;
	while(cin >> message){         
		
		if(m[message].length() ) cout << m[message] << '\n' ;
		else cout << "eh\n" ;
	}


	return 0;
}

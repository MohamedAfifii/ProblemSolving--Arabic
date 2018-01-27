
#include <bits/stdc++.h>


int solution(int X, vector<int> &A) {

    set<int> pos   ;       //store the position only once 
    
    for(int i = 0 ; i<A.size() ; i++){
        pos.insert(A[i]) ; 
        if(pos.size()==X){     // all position are covered 
            return i ; 
        }
    }
    
    return -1 ; 
}
#include <iostream>

using namespace std;

int main()
{
    int counter= 0  ;

    int n ; cin >> n ;
    int arr[n];
    cin >> arr[0] ;
    int mx = 0 , mn = arr[0] ;


    int i =0 ;
    for(i=1 ; i <n ;i++)
    {
            cin>>arr[i];
            if(arr[i]>mx)mx=arr[i];
            if(arr[i]<mn)mn=arr[i];
    }
    
    for(i=0; i < n ; i++)
    {
        if(arr[i]>mn && arr[i]<mx)counter++;
    }
    cout << counter ;
    
    return 0;
}

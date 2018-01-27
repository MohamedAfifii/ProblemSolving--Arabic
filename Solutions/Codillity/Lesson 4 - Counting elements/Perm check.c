/*
This function makes sure that all the elements from 1 to N exist in the array A of size N.
Time complexity : O(N)
Size complexity  : O(N)
*/

int Exists[100009];

int solution(int A[], int N) 
{    
    
    for(int i = 0; i < N; i++)
    {
        if(A[i] > N || A[i] < 1 || Exists[A[i]])  return 0;
        
        else Exists[A[i]] = 1;
    }
    
    return 1;
}

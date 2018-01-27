/**
 * @file <SPOJ-QUEUEEZ-Easy Queue.cpp>
 * @author <Muhammad Al-Halaby>
 * @date <24-1-2018>
 *
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    //Declare a Queue
    queue<int> q;
    //Read the number of queries
    scanf("%i", &t);
    //iterate t times to read all the queries
    while(t--){
        //Read the query type
        int queryType;
        scanf("%i", &queryType);

        //Check the type of the query and do the query
        if(queryType == 1){
            int n;
            scanf("%i", &n);
            //Push an element to the queue
            q.push(n);
        }
        else if(queryType == 2){
            //Check if it's not empty
            if(!q.empty())
                //Pop an element of the queue if it's not empty.
                q.pop();
        }
        else{
            //Check if the queue is empty
            if(q.empty())
                //Print "Empty!" if the queue is empty.
                printf("Empty!\n");
            else
                //Print the Front element of the queue if it's not empty.
                printf("%i\n", q.front());
        }
    }
}
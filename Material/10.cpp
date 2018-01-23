
///10- Data structures (Queues)

///Queue
- FIFO

- push
- pop
- front
- size
- empty


#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(5);
    q.push(3);
    q.push(7);

    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    return 0;
}

/** Problem: UVA 12100
Each paper in the queue has a priority (1 to 9).
Your paper is initially the m'th paper in the queue.
A paper is poped from the queue, if there is no paper in the queue
with a higher priority, print it (Takes 1 min.)
Else, push the paper at the end back of the queue.

What is the time needed for your paper to get printed?
*/

int f[10];

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    int T;  cin >> T;
    while(T--)
    {
        clr(f, 0);

        int n, pos;   cin >> n >> pos;
        queue<int> q;

        loop(n)
        {
            int p;  cin >> p;
            q.push(p);
            f[p] ++;
        }

        int highest = 9;
        int time = 0;
        while(1)
        {
            while(f[highest] == 0) highest --;

            int p = q.front();    q.pop();

            if(p == highest)
            {
                time ++;
                f[p] --;
                if(pos == 0)  break;
                else pos--;
            }

            else
            {
                q.push(p);
                if(pos == 0)  pos = q.size()-1;
                else pos --;
            }
        }

        cout << time << endl;
    }

    return 0;
}






///Double-ended queue
#include <queue>

deque<int> q;

q.push_back(x)
q.push_front(x)
q.pop_back()
q.pop_front()
int x = q.back()
int x = q.front()


///18 - Disjoint set union (DSU) (Union–find)

>>> Used to answer queries about graph components
1- How many connected components?
2- Do u and v belong to the same component?
3- What is the size of the component to which u belongs?

>>> Online !!

#define MAXNODES 100009

struct DSU
{
    int parent[MAXNODES];
    int GroupSize[MAXNODES];

    DSU()
    {
        for(int i = 0; i < MAXNODES; i++)
        {
            parent[i] = i;
            GroupSize[i] = 1;
        }
    }

    int FindLeader(int i)
    {
        if(parent[i] == i)  return i;

        return parent[i] = FindLeader(parent[i]);
    }

    bool SameGroup(int x, int y)
    {
        int leader1 = FindLeader(x);
        int leader2 = FindLeader(y);

        return leader1 == leader2;
    }


    void MergeGroups(int x, int y)
    {
        int leader1 = FindLeader(x);
        int leader2 = FindLeader(y);

        if(leader1 == leader2)  return;

        if(GroupSize[leader1] > GroupSize[leader2])
        {
            parent[leader2] =  leader1;
            GroupSize[leader1] += GroupSize[leader2];
        }

        else
        {
            parent[leader1] =  leader2;
            GroupSize[leader2] += GroupSize[leader1];
        }
    }

    int GetSize(int x)
    {
        int leader = FindLeader(x);
        return GroupSize[leader];
    }
};


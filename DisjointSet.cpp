#include <bits/stdc++.h>
using namespace std ;

class DisjointSet
{
    vector<int>par,rank ;
public :
    DisjointSet(int n)
    {
        par.resize(n+1) ;
        rank.resize(n+1) ;
        for(int i = 0 ; i< n ; i++)
        {
            par[i] = i ;
            rank[i] = 0 ;
        }
    }

    int findUPar(int u)
    {
        if(u == par[u])
        {
            return u ;
        }
        return par[u] = findUPar(par[u]) ;
    }

    void unionByRank(int u , int v)
    {
        int ulp_u = findUPar(u) ;
        int ulp_v = findUPar(v) ;
        if(ulp_u == ulp_v)
        {
            return ;
        }
        else if(rank[ulp_u] < rank[ulp_v])
        {
            par[ulp_u] = ulp_v ;
        }
        else if(rank[ulp_v] < rank[ulp_u])
        {
            par[ulp_v] = ulp_u ;
        }
        else
        {
            par[ulp_v] = ulp_u ;
            rank[ulp_u]++ ;
        }
    }
};



int main()
{
    DisjointSet ds(7);
    ds.unionByRank(1, 2);
    ds.unionByRank(2, 3);
    ds.unionByRank(4, 5);
    ds.unionByRank(6, 7);
    ds.unionByRank(5, 6);
     if (ds.findUPar(3) == ds.findUPar(7))
    {
        cout << "Same\n";
    }
    else cout << "Not same\n";

    ds.unionByRank(3, 7);

    if (ds.findUPar(3) == ds.findUPar(7)) {
        cout << "Same\n";
    }
    else cout << "Not same\n";
    return 0;
}

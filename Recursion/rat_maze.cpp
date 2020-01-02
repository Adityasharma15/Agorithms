#include<bits/stdc++.h>
#define ll long long
using namespace std;


long long int N;

bool solve_maze_util(ll maze[N][N],ll x,ll  y, ll sol[N][N]);


void print(ll sol[N][N])
{
    for(ll i = 0; i<N; i++)
    {
        for(ll j = 0; j< N; j++)
            cout << sol[i][j] << " ";

        cout << "\n";    
    }
}

bool is_safe(ll maze[N][N],ll x,ll y)
{
    if( x >= 0  && y >= 0 && x < N && y < N && maze[x][y] == 1)
        return true;

    return false;
}

bool solve_maze(ll maze[N][N])
{
    ll sol[N][N] = { { 0, 0, 0, 0 }, 
                      { 0, 0, 0, 0 }, 
                      { 0, 0, 0, 0 }, 
                      { 0, 0, 0, 0 } }; 

    if(solve_maze_util(maze, 0 , 0, sol) == false )
        {
            cout << "solution doesn't exist";
            return false;
        }

    print(sol);
    return true;

}

bool solve_maze_util(ll maze[N][N],ll x,ll  y, ll sol[N][N])
{
    if( x==(N-1) && y == (N-1))
    {
            sol[x][y] = 1;
            return true;
    }

    if(is_safe(maze, x, y) == true)
    { 
        sol[x][y] = 1;
    

        if(solve_maze_util(maze, x+1,y, sol))
            return true;

        if(solve_maze_util(maze, x, y+1, sol))
            return true;

        sol[x][y] = 0;
        return false;
    }

    
    
    return false;

}



int main()
{
    ll t;
    cin >> t;

    while(t--)
    {

    cin >> N:    

    ll maze[N][N];    

    for(ll i = 0; i < N; i++)
    {
        for(ll j = 0; j< N; j++)
            cin >> maze[i][j];
    }    

    solve_maze(maze);

    return 0;
    }


}
#include<bits/stdc++.h>
int c[10] = {0,0,0,0,0,0,0,0,0,0};
int a[10][10];
int b[10] = {1,2,3,4,5,6,7,8,9,10};
int n;
using namespace std;
int findcost()
{
    int cost = 0;
    for(int i = 0 ; i < (n - 1); i++)
    {
        cost += a[b[i] - 1][b[i + 1] - 1];
     }
            return cost;
}
void getq()
{
    for(int i = 0; i < n; i++)
    {
        c[i] = b[i];
    }
}
void print()
{
    for(int i = 0 ;i < n; i++)
    {
       cout << c[i] <<" ";
    }
    cout << '\n';
}
void cost()
{
    int mn = 1e7;
    int cost = 0;
    do
    {
        cost = findcost();
        if(cost < mn)
        {
            mn= cost;
            getq();
        }
    }while(next_permutation(b,b + n));
}
int main()
{
    cin >> n;
    for(int  i = 0; i < n; i++)
    {
        for(int j = 0 ; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cost();
    print();
}


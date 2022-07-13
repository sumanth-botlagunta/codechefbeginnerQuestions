#include <iostream>
#include <vector>
using namespace std;

int findlargestside(vector<vector<int>> const &mat, int n)
{
    int tempdy[n][n];
    long long int max = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tempdy[i][j] = mat[i][j];

            if (i && j && mat[i][j])
            { 
                tempdy[i][j] = min (min (tempdy[i][j - 1], tempdy[i - 1][j]),
                                        tempdy[i - 1][j - 1]) + 1;
            }
            if (max < tempdy[i][j]) {
                max = tempdy[i][j];
            }
        }
    }

    return max;
}
 
int main()
{
   int n; cin>>n;
    vector<vector<int>> mat;
    for(int i=0;i<n;i++)
    {
        vector<int> v;
        int L,h; cin>>L>>h;
        for(int j=0;j<n;j++)
        {
            if(j>=L && j<=h){
                v.push_back(1);
            } 
            else{
                v.push_back(0);
                }
        }
        mat.push_back(v);
    }
 
    cout <<findlargestside(mat, n);
 
    return 0;
}
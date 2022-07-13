#include <iostream>
#include <vector>
using namespace std;
 
int findlardestsubgarden(vector<vector<int>> const &mat, int m, int n, int &maxsize)
{
    if (m < 0 || n < 0) {
        return 0;
    }
 
    int left = findlardestsubgarden(mat, m, n - 1, maxsize);
    int top = findlardestsubgarden(mat, m - 1, n, maxsize);
    int top_left = findlardestsubgarden(mat, m - 1, n - 1, maxsize);
    int size = 0;
    if (mat[m][n] != 0) {
        size = 1 + min (min(top, left), top_left);
    }
 
    maxsize = max(maxsize, size);
    return size;
}
 
int findallsubgardens(vector<vector<int>> const &mat)
{
    // base case
    if (mat.size() == 0) {
        return 0;
    }
 
    // `M × N` matrix
    int M = mat.size();
    int N = mat[0].size();
 
    // `size` stores the size of the largest square submatrix of 1's
    // and is passed by reference
    int size = 0;
 
    findlardestsubgarden(mat, M - 1, N - 1, size);
 
    return size;
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
    // print the matrix
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         cout << mat[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
 
    cout <<findallsubgardens(mat);
 
    return 0;
}
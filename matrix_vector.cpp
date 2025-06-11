#include<iostream>
using namespace std;
vector<vector<int>> populate_matrix(int row, int column){
    vector<vector<int>> matrix(row, vector<int>(column));
    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            cin>>matrix[i][j];
        }
    }
    return matrix;
}
int main(){
    int row, column;
    cin>>row>>column;
    vector<vector<int>> ans = populate_matrix(row, column);
    for(int i = 0; i<row; i++){
        for(int j = 0; j<column; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
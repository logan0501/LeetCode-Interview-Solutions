#include<bits/stdc++.h>
// Valid sudoku
using namespace std;
bool checkvalidsudoku(vector<vector<char>> sudoku){
   unordered_set<char> rowset[9],colset[9],grid[9];

    //checking row
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(sudoku[i][j]!='.'){
                char c=sudoku[i][j];
                if(rowset[i].count(c)){
                       return false; 
                }else{
                    rowset[i].insert(c);
                }
                if(colset[j].count(c)){
                       return false; 
                }else{
                  colset[j].insert(c);
                }
                if(grid[(i/3)*3+(j/3)].count(c)){
                    return false;
                }else{
                    grid[(i/3)*3+(j/3)].insert(c);
                }
            }
        }
    }
    return true;
   

}
int main(){
    vector<vector<char>> sudoku={{'5','3','.','.','7','.','.','.','.'}
,{'6','.','.','1','9','5','.','.','.'}
,{'.','9','8','.','.','.','.','6','.'}
,{'8','.','.','.','6','.','.','.','3'}
,{'4','.','.','8','.','3','.','.','1'}
,{'7','.','.','.','2','.','.','.','6'}
,{'.','6','.','.','.','.','2','8','.'}
,{'.','.','.','4','1','9','.','.','5'}
,{'.','.','.','.','8','.','.','7','9'}};

bool result = checkvalidsudoku(sudoku);
    return 0;
}
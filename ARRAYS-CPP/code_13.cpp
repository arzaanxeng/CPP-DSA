#include<iostream>
#include <vector>
using namespace std;
// Find the row in the matrix which contains maximum number of 1's

int main(void){
int step = 1 , list[step];
int matrix[4][4] = {
    {1, 0, 1, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 1},
    {1, 1, 1, 0}
};
int maxRowIndex = -1;
int maxCount = -1;
  for(int i = 0 ; i < 4 ; i++){
    int count = 0;
    for(int k = 0 ; k < 4 ; k++){
        if(matrix[i][k] == 1) count++;
    }
    if( maxCount < count ) {
        maxCount = count;
        maxRowIndex = (i + 1);
    }
  }

  cout<<"The row with maximum number of one's are :"<<maxRowIndex<<" and it contains "<<maxCount<<" ones.";

}
//better approach
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        int m = matrix[0].size();
				std::vector<int> row(n, 0);   
    		std::vector<int> col(m, 0);   
				for (int i=0; i<n; i++)
					for (int j=0; j<m;j++)
						if (matrix[i][j]==0)
						{
							row[i] = 1;
							col[j] = 1;
						}
				//note all rows and cols where ele is 0
				//for each cell, check if row/col is 1, if yes mark 0
				for (int i=0; i<n; i++)
					for (int j=0; j<m;j++)
						{
							if (row[i]||col[j])
								matrix[i][j] = 0;
						}
				}
};





// //brute force approach
// //find all 0's in original matrix and make those rows and cols as -1
// // change every -1 to 0 

// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) 
//     {
//         int n = matrix.size();
//         int m = matrix[0].size();
// 	    for (int i=0; i<n; i++)
// 	        for (int j=0; j<m;j++)
// 		        if (matrix[i][j]==0)
// 		        {
// 			        callRow(i,m, matrix);
// 			        callCol(j,n, matrix);
// 		        }

//         for (int i=0; i<n; i++)
// 	        for (int j=0; j<m;j++)
// 		        if (matrix[i][j]==-1)
// 			        matrix[i][j]=0;
        
//     }

//     void callRow(int i, int m, vector<vector<int>>& matrix)
// {
// 	for (int j=0;j<m;j++)
// 			if (matrix[i][j]!=0)
// 					matrix[i][j]=-1;
// }

// void callCol(int j, int n, vector<vector<int>>& matrix)
// {
// 		for (int i=0;i<n;i++)
// 			if (matrix[i][j]!=0)
// 					matrix[i][j]=-1;
// }
// };



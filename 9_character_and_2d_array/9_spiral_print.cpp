// Spiral Print
// Send Feedback
// For a given two-dimensional integer array/list of size (N x M), print it in a spiral form. That is, you need to print in the order followed for every iteration:
// a. First row(left to right)
// b. Last column(top to bottom)
// c. Last row(right to left)
// d. First column(bottom to top)
//  Mind that every element will be printed only once.
// Refer to the Image:

// Spiral path of a matrix

// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// First line of each test case or query contains two integer values, 'N' and 'M', separated by a single space.
// They represent the 'rows' and 'columns' respectively, for the two-dimensional array/list.

// Second line onwards, the next 'N' lines or rows represent the ith row values.

// Each of the ith row constitutes 'M' column values separated by a single space.

// Output format :
// For each test case, print the elements of the two-dimensional array/list in the spiral form in a single line, separated by a single space.

// Output for every test case will be printed in a seperate line.

// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^3
// 0 <= M <= 10^3
// Time Limit: 1sec

// Sample Input 1:
// 1
// 4 4
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16

// Sample Output 1:
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
// ------->
// ^ ---->|
// | | > ||
// | <---||
// <------|

void spiralPrint(int **input, int nRows, int nCols)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int total = nRows * nCols;
    // if(total%2!=0) total = total-1;
    while (total > 0)
    {
        while (j < nCols - k)
        {
            cout << input[i][j] << " ";
            total--;
            j++;
        }
        j--;
        i++;
        while (i < nRows - k)
        {
            cout << input[i][j] << " ";
            total--;
            i++;
        }
        i--;
        j--;
        while (j >= k)
        {
            cout << input[i][j] << " ";
            total--;
            j--;
        }
        // cout<<"k"<<endl;
        j++;
        i--;
        while (i >= k + 1)
        {
            cout << input[i][j] << " ";
            total--;
            i--;
        }
        // i++;
        // j--;
        // cout<<"l"<<endl;
        k++;
        i = k;
        j = k;
        // cout<<endl<< i<<" "<< j<<endl;
    }

    // if((nRows*nCols)%2!=0){
    // 	cout<<input[i][j]<<endl;
    // }
    // else{
    //     cout<<endl;
    // }
}

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}

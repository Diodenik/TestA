#include <QCoreApplication>
#include <iostream>

using namespace std;

void fillArr(int* const* const arr, const int col, const int row)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            arr[i][j] = rand()%10;
        }
    }
}

void showArr(const int* const* const arr, const int col, const int row)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<'\t';
        }
        cout<<endl;
    }
}

int main()
{
 int row = 10;
 int col = 10;

 int **arr = new int* [row];

 for(int i = 0; i < row; i++)
 {
     arr[i] = new int[col];
 }

 fillArr(arr, col, row);
 showArr(arr, row, col);

}

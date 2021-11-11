#include <QCoreApplication>
#include <iostream>

using namespace std;

int main()
{
    int row;
    int col;

    cout<<"Enter q-ty of row"<<endl;
    cin>>row;
    cout<<"Enter q-ty of col"<<endl;
    cin>>col;

    int **arr = new int* [row];

    for(int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    ////////////////////////////
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            arr[i][j] = rand() % 50;
        }
    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<'\t';
        }
        cout<<endl;
    }


    ////////////////////////////
    for(int i = 0; i < row; i++)
    {
        delete [] arr[i];
    }
    delete [] arr;
}

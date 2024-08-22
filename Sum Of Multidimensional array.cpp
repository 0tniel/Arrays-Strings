//Otniel Jhirad
//23070123069
//ENTC A3
#include <iostream>
using namespace std;

int main() 
{
    int sizer, sizec;
    cout << "Please Enter Number Of Rows: ";
    cin >> sizer;
    cout << "Please Enter Number Of Columns: ";
    cin >> sizec;

    int arr[sizer][sizec];
    cout << "Enter elements of the first matrix:\n";
    for(int i = 0; i < sizer; i++)
    {
        for(int j = 0; j < sizec; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sizer1, sizec2;
    cout << "Please Enter Number Of Rows for the second matrix: ";
    cin >> sizer1;
    cout << "Please Enter Number Of Columns for the second matrix: ";
    cin >> sizec2;

    int arr2[sizer1][sizec2];
    cout << "Enter elements of the second matrix:\n";
    for(int i = 0; i < sizer1; i++)
    {
        for(int j = 0; j < sizec2; j++)
        {
            cin >> arr2[i][j];
        }
    }
    if(sizer == sizer1 && sizec == sizec2)
    {
        int sum[sizer][sizec];
        for(int i = 0; i < sizer; i++)
        {
            for(int j = 0; j < sizec; j++)
            {
                sum[i][j] = arr[i][j] + arr2[i][j];
            }
        }
        cout << "The sum of the matrices is:\n";
        for(int i = 0; i < sizer; i++)
        {
            for(int j = 0; j < sizec; j++)
            {
                cout << sum[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "The size of the matrices should be the same for addition.\n";
    }

    return 0;
}
/*
Output
Please Enter Number Of Rows: 2
Please Enter Number Of Columns: 2
Enter elements of the first matrix:
1
2
3
4
Please Enter Number Of Rows for the second matrix: 2
Please Enter Number Of Columns for the second matrix: 2
Enter elements of the second matrix:
1
2
3
4
The sum of the matrices is:
2 4
6 8

*/

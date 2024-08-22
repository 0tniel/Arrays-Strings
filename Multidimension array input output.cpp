//Otniel Jhirad
//23070123069
#include <iostream>
using namespace std;

int main() 
{
	int sizer;
	int sizec;
	cout<<"Please Enter Number Of Rows ";
	cin>>sizer;
	cout<<"Please Enter Number Of Coloumns ";
	cin>>sizec;
	int arr[sizer][sizec];
	for(int i=0;i<sizer;i++)
	{
		for(int j=0;j<sizec;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<sizer;i++)
	{
		for(int j=0;j<sizec;j++)
		{
			cout<<"\t"<<arr[i][j] ;
		}
		cout<<endl;
	}
}
/*
Output
Please Enter Number Of Rows 2
Please Enter Number Of Coloumns 2
1
2
3
4
        1       2
        3       4
*/

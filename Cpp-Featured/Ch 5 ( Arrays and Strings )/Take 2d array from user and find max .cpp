

// CPP Program 
// Inputs a matrix and Prints the Maximum Integer


//#include<iostream>
//#include<conio.h>
//#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int arr[3][4], r, c, max;
	
	cout<<"Enter a 2d array of 3 rows and 4 columns wiht total 12 numbers"<<endl;
	for(r=0;r<3;r++)
		{
			for(c=0;c<4;c++)
				{
					cin>>arr[r][c];
				}
			
		}
		
	cout<<"The 2d array with total 12 numbers is "<<endl;
	for(r=0;r<3;r++)
		{
			for(c=0;c<4;c++)
				{
					cout<<setw(20)<<arr[r][c];
				}
			cout<<endl<<endl;
		}
		
	max=arr[0][0];
		
	for(r=0;r<3;r++)
		{
			for(c=0;c<4;c++)
				{
					if(max<arr[r][c])
					{
						max=arr[r][c];
					}
				}
			cout<<endl;
		}
		
	cout<<"Maximum = "<<max;		
		
		
}                          
                                                                                                                                                                                                                        

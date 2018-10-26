//include library
#include<iostream>
using namespace std;
// function to add elements of array
int SUM(int arr[],int n){

	int sum=0;
	for(int i=0;i<n;i++)
	{
	sum+=arr[i];
	}
	return sum;
}

//declaring main function and variables
int main(){
	int n,sum;
        //asking the user for the size
	cout<<"the number of elements:";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the "<<i+1<<" term : ";
		cin>>arr[i];

	sum=SUM(arr,n);
        cout<<"The sum of all the elements of the array is "<<sum<<endl;
        }
	//end the program
	return 0;
} 

   



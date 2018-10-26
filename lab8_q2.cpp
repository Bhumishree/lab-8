//include library
#include<iostream>
using namespace std;
//largest element of array

int maxf(int arr[]){
	int max=arr[0];
	for (int i=0;i<7;i++){
		if (arr[i]>=max)
			max=arr[i];
	}
	return max;
}
//smallest element of array

int minf(int arr[]){
	int min=arr[0];
	for (int i=0;i<7;i++){
		if (arr[i]<=min)
			min=arr[i];
	}
	return min;
}

//mean of array
float meanf(int arr[]){
	float sum=0;
	for (int i=0;i<7;i++){
		sum+=arr[i];
	}
	return sum/7;
}
//median of array

int meadf(int arr[]){
	cout <<"Sorted array: [";
	int sortarr[7];
	int big=maxf(arr), min=minf(arr);
	for (int j=0; j<7; j++){
		if (j==0){                                
			sortarr[j]=min;
			cout<<min;
			}
		else{
			for (int i=0;i<7;i++){
				if (arr[i]<big && arr[i]>sortarr[j-1])        
					big=arr[i];
			}
			min=big;
			big=maxf(arr);
			sortarr[j]=min;
			cout <<","<<min;
		}
	}
	cout <<"]"<<endl;;
	return sortarr[3];
}

//frequency of array

void modf(int arr[]){
	int count, n;
	for (n=0;n<7;n++){
		count=0;
		for (int i=0;i<7;i++){
			if (arr[i]==arr[n])
				count++;
		}
		cout<<"The frequency of "<<arr[n]<<" in the array is: "<<count<<endl;
	}
}

//declaring main function
int main(){
	int arr[7]={7, 10, 13, 9, 2, 11, 25};
	cout <<"Array: [7, 10, 13, 9, 2, 11, 25]"<<endl;
	cout <<"Max: "<<maxf(arr)<<endl;
	cout <<"Min: "<<minf(arr)<<endl;
	cout <<"Mean: "<<meanf(arr)<<endl;
	cout <<"Median: "<<meadf(arr)<<endl;
	cout <<"Frequency table: "<<endl;
	modf(arr);
	return 0;
}

    



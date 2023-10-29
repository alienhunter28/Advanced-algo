#include<iostream>
#include<array>
using namespace std;

void enterarray(int sizeofarray, int inputarray[]){
	int i=0;
	while(i<sizeofarray){
		cin>>inputarray[i];
		i++;
	}
	
}


void matchtarget(int numbers_array[],int array_length,int target){
		int j=0;
		while(j<(array_length-1)){
		int k=j+1;
		while(k<(array_length)){
			if((numbers_array[j]+numbers_array[k])==target){
				cout<<j;
				cout<<k;
			}
			k++;
		}
		j++;
	}
	
}




int main(){
	int array_length;
	int numbers_array[120];
	int target;
	cout<<"Enter the size of array";
	cin>>array_length;
	cout<<"Enter the elements of array";
	enterarray(array_length,numbers_array);
	cout<<"Enter the target number";
	cin>>target;
	matchtarget(numbers_array,array_length,target);

	
	
}
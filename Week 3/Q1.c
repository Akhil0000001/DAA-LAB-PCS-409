#include<iostream>

#include<fstream>

using namespace std;





void insertionSort(int arr[],int n){

  ofstream out("output.txt",ios::app);

  for(int i=0;i<n;i++){

    int j=i-1,temp=arr[i];

    while(j>=0 && arr[j]>temp){

      if(arr[j]>arr[j+1]){

        arr[j+1]=arr[j];

        j--;

      }

      arr[j+1]=temp;

    }

  }

  for(int i=0;i<n;i++){

    out<<arr[i]<<" ";

  }

  out<<endl;

  out.close();

}

int main(){

  int T,n;

  ifstream inp("input.txt");

  inp>>T;                   //total number of test cases

    while(T--){

        inp>>n;

        int key,arr[n];

        for(int i=0;i<n;i++){

            inp>>arr[i];

        }

        insertionSort(arr,n);

    }

    inp.close();

    return 0;

}



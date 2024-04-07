#include<iostream>

#include<fstream>

using namespace std;



void countPair(int arr[],int n,int key){

  ofstream out("output.txt",ios::app);

  int cnt=0;

  for(int i=0;i<n;i++){

    for(int j=i+1;j<n;j++){

      if(abs(arr[i]-arr[j])==key)

        cnt++;

    }

  }

  out<<cnt<<endl;

}



int main()

{

    int n,T;

    ifstream inp("input.txt");

    

    inp>>T;                   //total number of test cases

    while(T--){

        inp>>n;

        int key,arr[n];

        for(int i=0;i<n;i++){

            inp>>arr[i];

        }

        inp>>key;

        countPair(arr,n,key);

    }

    inp.close();

    return 0;

}


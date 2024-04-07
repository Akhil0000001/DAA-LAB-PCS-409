#include<bits/stdc++.h>

#include<fstream>

using namespace std;



void searchSquence(int arr[],int n){

    ofstream out("output.txt",ios::app);

    unordered_map<int,int> mpp;

    for(int i=2;i<n;i++){

        mpp[arr[i]]=i;

    }

    for(int i=0;i<n-2;i++){

        for(int j=i+1;j<n-1;j++){

            if(mpp.count(arr[i]+arr[j])){

                out<<i<<" , "<<j<<" , "<<mpp[arr[i]+arr[j]]<<endl;

                return;

            }

        }

    }

    out<<"No Sequence found"<<endl;

    out.close();

}



int main(){

    ifstream inp("input.txt");

    int n,T;// T== number of testcases

    inp>>T;

    while(T--){

        inp>>n;

        int arr[n];

        for(int i=0;i<n;i++){

            inp>>arr[i];

        }

        searchSquence(arr,n);

    }

    inp.close();

}


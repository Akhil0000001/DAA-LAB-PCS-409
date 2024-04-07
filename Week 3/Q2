#include <iostream>

#include <fstream>

using namespace std;



void selectionSort(int arr[],int n){

    int cmp=0,shift=0;

    for(int i=0;i<n-1;i++){

        int min=i;

        for(int j=i+1;j<n;j++){

            if(arr[min]>arr[j]){

                min=j;

            }

            cmp++;

        }

        

        shift++;

        swap(arr[i],arr[min]);

        

    }



    ofstream out("output.txt",ios::app);

    for(int i=0;i<n;i++){

        out<<arr[i]<<" ";

    }

    out<<"\ncomparisons = "<<cmp<<endl;

    out<<"shifts = "<<shift<<endl;

    out.close();

}



int main(){

    ifstream inp("input.txt");

    int T;

    inp>>T;

    while(T--){

        int n;

        inp>>n;

        int arr[n];

        for(int i=0;i<n;i++){

            inp>>arr[i];

        }

        selectionSort(arr,n);

    }

    inp.close();

    return 0;

}


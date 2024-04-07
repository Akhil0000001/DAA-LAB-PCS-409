

#include <iostream>

#include <fstream>

using namespace std;



void conquer(int arr[],int si,int mid,int ei){

    int n1=mid-si+1;

    int n2=ei-mid;

    int i,j,left[n1],right[n2];

    for(i=0,j=si;i<n1;i++,j++){

        left[i]=arr[j];

    }

    for(i=0,j=mid+1;i<n2;i++,j++){

        right[i]=arr[j];

    }

    i=0;

    j=0;

    while(i<n1 && j<n2){

        if(left[i]<=right[j]){

            arr[si++]=left[i++];

        }else arr[si++]=right[j++];

    }

    while(i<n1){

        arr[si++]=left[i++];

    }while(j<n2){

        arr[si++]=right[j++];

    }

}



void mergeSort(int arr[],int si,int ei){

    if(si>=ei) return;

    int mid=si+(ei-si)/2;

    mergeSort(arr,si,mid);

    mergeSort(arr,mid+1,ei);

    conquer(arr,si,mid,ei);

}



void duplicateElement(int arr[],int n){

    mergeSort(arr,0,n-1);

    ofstream out("output.txt",ios::app);

    bool flag=false;

    for(int i=1;i<n;i++){

        if(arr[i] == arr[i-1]){

            flag=true;

            break;

        }

    }

    if(flag){

        out<<"YES"<<endl;

    }else out<<"NO"<<endl;

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

        duplicateElement(arr,n);

    }

    inp.close();

    return 0;

}




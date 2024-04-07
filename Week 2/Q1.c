

#include<iostream>

#include<fstream>

using namespace std;



int binarySearch(int arr[],int s,int e,int key,bool first){

    //first if true find first occurance else last occurance

    int pos=-1;

    while(s<=e){

        int mid=s+(e-s)/2;

        if(arr[mid]<key){

            s=mid+1;

        }

        else if(arr[mid]>key){

            e=mid-1;

        }else{

            pos=mid;

            if(first){

                e=mid-1;

            }else{

                s=mid+1;

            }

        }

    }

    return pos;

}

void search(int arr[],int n,int key){

    ofstream out("output.txt",ios::app);

    int first=binarySearch(arr,0,n-1,key,true);

    if(first == -1){

        out<<"Key not Present"<<endl;

        return;

    }

    int last=binarySearch(arr,0,n-1,key,false);

    int occ=last-first+1;

    out<<key<<" - "<<occ<<endl;

    out.close();

}



int main(){

    ifstream inp("input.txt");

    int n,T;// T== number of testcases

    inp>>T;

    while(T--){

        inp>>n;

        int key,arr[n];

        for(int i=0;i<n;i++){

            inp>>arr[i];

        }

        inp>>key;

        search(arr,n,key);

    }

    inp.close();

}



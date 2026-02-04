#include<iostream>
using namespace std;

void mergesort(char a[],int s,int e){
    if (s>e){
        return;
    }
    int mid = s+(e-s)/2;
    int b[1000],c[1000];
    for (int i = 0; i < mid+1; i++)
    {
        b[i]=a[i];
    }
    for (int i = mid+1; i < e; i++)
    {
        c[i]=a[i];
    }
    mergesort(b[],s,mid);
    mergesort(c[],mid+1,e);

    
    
    
}

int main()
{
    
    return 0;
}
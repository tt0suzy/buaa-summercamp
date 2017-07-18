#include<iostream>
using namespace std;
int main(){

    int a[6]={43,23,12,125,7,1};
    //for(int i=0;i<6;i++)
    int t;
    for(int i=0;i<5;i++)
    for(int j=0;j<5-i;j++)
        if(a[j]>a[j+1])
        {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
    for(int p=0;p<6;p++)
        cout<<a[p]<<endl;
    return 0;



}
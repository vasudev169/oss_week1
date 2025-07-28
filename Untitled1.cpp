#include<iostream>
using namespace std;

int main(){

int x;
cout<<"enter the size";
cin>>x;
char str[x],rev[x];
int i;
cout<<"enter the string : ";
for(i=0;i<x;i++){

    cin>>str[i];
    rev[x-i-1]=str[i];

}
for(i=0;i<x;i++){

    cout<<rev[i];

}

return 0;
}

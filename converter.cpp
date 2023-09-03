#include<iostream>
using namespace std;

class binarycon{
    public:
    int num;

    public:

    void conv(){
int bnum[4];

int i =0; 
while (num>0)
{
    bnum[i]=num%2;
    num=num/2;
    i++;
}


for (int k = i-1; k >=0; k--)
{
    cout<<bnum[k];
}


    }
};

int main()
{
binarycon bin;

cout<<"Enter a binary number : ";
cin>>bin.num;

bin.conv();

return 0;
}//@rajendra_chimala
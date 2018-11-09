#include <iostream>
using namespace std;
//use of function
int countEven(int* p,int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(*(p+i)%2==0)// check conditions to get even number
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int size;
    cout<<"Enter size of the array"<<endl;
    cin>>size;
    int ar[size];
    cout<<"Enter input to array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>ar[i];
    }
    int* p=&ar[0];// output
    cout<<"No. of even numbers:"<<countEven(p,size);
}

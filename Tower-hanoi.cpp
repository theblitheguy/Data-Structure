#include<iostream>
//#include<conio.h>
using namespace std;

void TOH(int, char, char, char);
int main()
{
    int n;
    cout<<"Enter the no.of disk:"<<endl;
    cin>>n;
    TOH(n,'A','B','C');
    //getch();
    return 0;
}

void TOH(int n,char src,char temp, char dest)
{
    if(n==1)
    cout<<"MOVE DISK"<<" "<<n<<" "<<"from"<<" "<<src<<" "<<"to"<<" "<<dest<<endl;
    else
    {
        TOH(n-1,src,dest,temp);
        cout<<"MOVE DISK"<<" "<<n<<" "<<"from"<<" "<<src<<" "<<"to"<<" "<<dest<<endl;
        TOH(n-1,temp,src,dest);
    }
}

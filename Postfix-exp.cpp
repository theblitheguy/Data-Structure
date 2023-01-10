#include<iostream>
#define max 20
using namespace std;
class postfix
{
    public:
    float stack[max];
    char postf[max];
    int top;
    postfix(){top=-1;}
    float pop();
    void push(float);
};

void postfix::push(float a)
{
    ++top;
    stack[top]=a;
}

float postfix::pop()
{
    float a;
    a=stack[top];
    top--;
    return a;
}

int main()
{
    float a,b,c;
    postfix p;
    int i=0;
    cout<<"Enter the postfix exp:"<<endl;
    cin>>p.postf;
    while(p.postf[i]!='\0')
    {
        switch(p.postf[i])
        {
            case '+':
            a=p.pop();
            b=p.pop();
            c=b+a;
            p.push(c);
            break;

            case '-':
            a=p.pop();
            b=p.pop();
            c=b-a;
            p.push(c);
            break;

            case '*':
            a=p.pop();
            b=p.pop();
            c=b*a;
            p.push(c);
            break;

            case '/':
            a=p.pop();
            b=p.pop();
            c=b/a;
            p.push(c);
            break;
            default:
            p.push(p.postf[i]-48);
            break;
        }
        i++;
    }
    cout<<endl<<"The result:"<<p.stack[p.top]<<endl;
    return 0;
}

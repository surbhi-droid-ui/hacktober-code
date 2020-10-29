#include<iostream>
#include<algorithm>
using namespace std;
void binaryequivalent(int[], int);
int func(int, int, int, int, int[]);

int main()
{
    int i, N, arr[20];

    cin>>N;
    for(i=0; i<N; i++)
    {
        cin>>arr[i];
    }
    binaryequivalent(arr, N);

    return 0;
}

void binaryequivalent(int a[], int n)
{
    int i, j=0, maxa=0, c=0, a2[n]={0}, sum=0;

    for(i=0; i<n; i++)
    {
        if(a[i]>maxa) maxa=a[i];
    }
    for(;maxa>0;)
    {
        c++; maxa=maxa>>1;
    }
    for(i=0; i<n; i++)
    {
        for(;a[i]>0;)
        {
            if(a[i]&1)
                a2[i]++;
            a[i]=a[i]>>1;
        }
    }
    for(i=0; i<n; i++)
    {
        a2[j]=c-(2*a2[i]);
        if(a2[j]==0) continue;
        else j++;
    }
    sum=func(0, 0, j, sum, a2);
    sum-=1;
    sum=sum*(1+n-j)+(1<<(n-j))-1;

    int finala[c]={0};
    for(i=0; sum>0; i++)
    {
        finala[i]=sum&1;
        sum=sum>>1;
    }

    for(i=c-1;i>=0; i--)
    {
        cout<<finala[i];
    }
}

int func(int ix, int temp , int it, int s, int x[])
{
    if(ix==it)
    {
        if(temp==0)
        {
            s++;
        }
        return s;
    }
    return func(ix+1, temp+x[ix], it, s, x);
    return func(ix+1, temp, it, s, x);

}

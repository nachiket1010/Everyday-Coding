#include <iostream>
using namespace std;

int fib(int n){
        //base case
        if(n<=1)
        return n;
{
        //recursive relation
        int ans = fib(n-1)+fib(n-2);
        return ans;
        }


}

    


int main(){

    int n,i;
    cin>>n;
    cout<<n<<endl;
    for(i=0;i<n;i++)
    cout<<fib(i)<<" ";


    return 0;
} 
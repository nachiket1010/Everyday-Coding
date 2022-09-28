#include <iostream>
using namespace std;
int main(){
    int i,j,prime=0;
    cout<<"Prime numbers between 1 to 50 are: ";
    for (i=1;i<=50;i++){
        for(j=2;j<1;j++){
            if(i%j==0){
                prime++;
                break;
            }
        }
        if(prime==0 && i != 1)
        cout<<i<<endl;
        prime=0;
    }
return 0;
}
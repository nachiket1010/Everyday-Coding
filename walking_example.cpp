#include <iostream>
using namespace std;

void reachHome(int src, int dest){

    cout<<"source"<<src<<"Destination"<<dest<<endl;
    //base case
    if (src == dest){
        cout<<"pohoch gaya " <<endl;
        return ;
    }
    //processing -> 1 step forward
    src++;

    //recursive call
    reachHome(src,dest);

}

int main(){

    int dest = 10;
    int src = 1;

    cout<<endl;
    reachHome(src,dest);


    return 0;
}
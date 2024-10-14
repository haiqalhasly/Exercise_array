#include <iostream>

using namespace std;
int main(){
    int i;
    const int arraySize = 10;
    double yarra[arraySize]={0};

    cout<<yarra[4]<<endl;

    yarra[9]=1.2;

    cout<<yarra[6]<<" "<<yarra[9]<<endl;

    for (i = 0; i<10; i++)
        cout<<yarra[i]<<" ";   
    
    return 0;

}
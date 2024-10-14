#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){

    int Total = 0;
    {
    const int rows = 100;
    const int cols = 100;
    int Arr[rows][cols];

    srand(time(0)); 

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            Arr[i][j] = rand() % 100 + 1; 
        }
    }

  
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            std::cout << Arr[i][j] << " ";
        }
        cout << endl;
    }
    

    
//no 1
    for(int row=0; row<100; row++) 
    {
        
        for (int col=0; col<100; col++)
        Total = Total + Arr[row][col];

    }
//no2
    int avg = Total/10000;
    cout<<"Total is "<<Total<<endl;
    cout<<"Average is "<< avg<<endl;

//no3
int odd,num=0;
        for(int row=0; row<100; row++) 
    {
            for (int col=0; col<100; col++)
                num = Arr[row][col]/2;

                if (num!=0){
                    odd++;
        }
    }
    
    cout<<"Total of odd numbers is : "<<odd<<endl;

    return 0;
}}
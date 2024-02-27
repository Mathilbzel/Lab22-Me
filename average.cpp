#include<iostream>
using namespace std;

int main(int argc,char *argv[]){
    if(argc == 1) {cout << "Please input numbers to find average."; return 0;}
    double sum;
    for(int i=0; i<argc-1; i++){
        double x = atof(argv[i+1]);
        sum += x;
    }
    cout << "---------------------------------\n";
    cout << "Average of " << argc-1;
    cout << " numbers = " << sum/(argc-1);
    cout << "\n---------------------------------";
    return 0;
}

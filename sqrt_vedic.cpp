#include<iostream>
#include<vector>
using namespace std;
double sqrt_vedic(int n){
    if(n==0|n==1) return n;
    int perfect_root = sqrt(n);
    int diff = n - perfect_root * perfect_root;
    double ans = perfect_root + (diff/(2.0*perfect_root));
    return ans;
}
int main(){
    for(int i = 1;i<1e8;i++){

        double vedic_answer = sqrt_vedic(i);
        double square_root = sqrt(i);

        double deviation = abs(vedic_answer - square_root)/vedic_answer;
        deviation*=100;


        if(deviation>5){
            cout<<i<<"\t"<<deviation<<"%"<<endl;
        }
    }
}


// vedic function
// int perfect_root = sqrt(n);
// int diff = n - perfect_root * perfect_root;
// double ans = perfect_root + (diff/(2.0*perfect_root));
// return ans;


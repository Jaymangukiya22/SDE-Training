#include<iostream>
using namespace std;

double get_deviation(int n, double root){
    double estimate = root*root;
    double diff = abs(n-estimate);
    double per_diff = diff / n*100;
    return per_diff;
}

double helper(int n, double guess){
    while(get_deviation(n, guess)>=2){ //below 2% error
        double div = n/guess;
        double avg = (guess + div)/2;
        guess = avg;
    }
    return guess;

}

double mysqrt(int n){
    int guess=1;
    return helper(n, guess);
}

int main(){
    int n, root;
    cin>>n>>root;
    cout<<mysqrt(n);
}
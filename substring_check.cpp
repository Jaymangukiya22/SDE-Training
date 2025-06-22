#include<iostream>
using namespace std;
// Create a function isSubstring(str1,str2) that returns true when str2 is a substring of str1 and returns false otherwise.
//                Ex.  isSubstring("madam","mam") => false
//                       isSubstring("madam","dam") => true
//                       isSubstring("madam","mad") => true
//                      isSubstring("madam","madam") => true
bool isSubstring(string str1, string str2){
    return str1.find(str2) != string::npos;
}

int main(){
    string str1, str2;
    cin>>str1>>str2;
    cout<<isSubstring(str1, str2);
}
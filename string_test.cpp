// #include <iostream>
// #include <vector>
// #include <set>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<set<char>> rocks(n);

//     // Reading input and storing unique characters for each rock
//     for (int i = 0; i < n; i++) {
//         string s;
//         cin >> s;
//         for (char c : s) {
//             rocks[i].insert(c);
//         }
//     }

//     // Finding common characters (gemstones)
//     set<char> gemstones = rocks[0];
//     for (int i = 1; i < n; i++) {
//         set<char> temp;
//         for (char c : gemstones) {
//             if (rocks[i].count(c)) {
//                 temp.insert(c);
//             }
//         }
//         gemstones = temp;
//     }

//     // Output the number of gemstones
//     cout << gemstones.size() << endl;

//     return 0;
// }







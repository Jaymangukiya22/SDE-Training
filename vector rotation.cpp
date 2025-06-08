#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v(5);
	for (int i = 0; i < 5; i++)
	{
		cin >> v[i];
	}
	int temp = v[5 - 2]; // size-rotation
	for (int i = 4; i >= 2; i--)
	{					 // i upto rotation
		v[i] = v[i - 2]; // i-rotation
		//		cout<<v[i];
	}
	v[0] = temp;
	for (int i = 0; i < 5; i++)
	{
		cout << v[i];
	}
}

// #include <bits/stdc++.h>
// using namespace std;
//
// int main() {
//     vector<int> v = {1, 3, 6, 2, 9};
//     int n = v.size();
//     int d = 2;
//
//     // Create temporary vector
//     vector<int> t;
//
//     // Insert elements from index [d, size)
//     t.insert(t.end(), v.begin() + d, v.end());
//
//   	// Insert elements from index [0, d)
//   	t.insert(t.end(), v.begin(), v.begin() + d);
//
//     v = t;
//     for (auto i : v)
//         cout << i << " ";
//     return 0;
// }

void rotateVectorClockwise(vector<int> &v, int n, int k)
{
	vector<int> temp;
	for (int i = n - k; i < n; i++)
	{
		temp.push_back(v[i]);
	}
	for (int i = n - 1; i >= k; i--)
	{
		v[i] = v[i - k];
	}
	for (int i = 0; i < k; i++)
	{
		v[i] = temp[i];
	}
}
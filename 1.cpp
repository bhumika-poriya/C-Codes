#include<bits/stdc++.h>
#include <cstring>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n]; // declaration

    // Taking input
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    // Segmentation Error: Error we got while accesing that memory which never allocated

    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    }
    cout << sum << endl;


}


#include <iostream>
#include <vector>
using namespace std;

void check(int n) {   
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    int totalSum = 0;
    for(int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;
    int rightSum = totalSum;
    int s = 0;
    for(int i = 0; i < n; i++) {
        
        rightSum -= arr[i];
        if(leftSum == rightSum) {
            s = 1;
            break;
        }
        leftSum += arr[i];
    }

    if(s == 1) {
        cout <<"YES"<<endl;
    } else {
        cout <<"NO"<<endl;
    }
}

int main() {
    int a;
    cin >> a;
    for(int i = 0; i < a; i++) {
        int x;
        cin >> x;
        check(x);
    }
    return 0;
}

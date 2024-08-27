#include<iostream>
#include<algorithm>
using namespace std;
bool isPossible(int stalls[], int n, int cows, int minDist) {
    int countCows = 1;  // Place the first cow in the first stall
    int lastPosition = stalls[0];  // Position of the last placed cow

    for (int i = 1; i < n; i++) {
        if (stalls[i] - lastPosition >= minDist) {
            countCows++;  // Place the next cow
            lastPosition = stalls[i];  // Update the position of the last placed cow
            if (countCows == cows) {
                return true;  // All cows are placed successfully
            }
        }
    }
    return false;
}

int aggressiveCows(int stalls[], int n, int cows) {
    // Sort the stall positions to apply Binary Search
    sort(stalls, stalls + n);

    int start = 0;
    int end = stalls[n - 1] - stalls[0];
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (isPossible(stalls, n, cows, mid)) {
            ans = mid;  // Update the answer
            start = mid + 1;  // Try for a bigger minimum distance
        } else {
            end = mid - 1;  // Try for a smaller minimum distance
        }
    }

    return ans;  // Largest minimum distance
}

int main() {
    int stalls[] = {1, 2, 8, 4, 9};  // Example stall positions
    int n = sizeof(stalls) / sizeof(stalls[0]);
    int cows = 3;  // Number of cows to place

    int result = aggressiveCows(stalls, n, cows);
    cout << "The largest minimum distance is " << result << endl;

    return 0;
}
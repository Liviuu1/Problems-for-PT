#include <iostream>
#include <algorithm>
#include <vector>
#include <chrono>

using namespace std;

// i chose the 4th problem

int CountPossibleArrays(vector<int> A) 
{
    int count = 0;
    int n = A.size();
    //we begin by sorting the array in a non-decreasing order to make it easier to check if 
    //a triplet forms a triangle 
    sort(A.begin(), A.end());
    for (int i = 0; i < n - 2; i++)
     {
        int k = i + 2;
        for (int j = i + 1; j < n - 1; j++) {
            while (k < n && A[i] + A[j] > A[k])// we check if it is a triangle
            {
                k++;
            }
            count += k - j - 1;//to avoid checking twice we use the fact that A is sorted 
            //only increment the count by the number of elements between j and k that satisfy the triangle inequality 
        }
    }
    return count;
}

int main() 
{
    vector<int> A = {10, 29 ,21 ,15 ,6 ,9 ,-3 ,13 ,4 ,10 , 19 };

    // measuring the time taken by CountPossibleArrays
    auto start_time = chrono::high_resolution_clock::now();
    int count = CountPossibleArrays(A);
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();

    cout << "Number of possible arrays: " << count << endl;
    cout << "Time taken: " << duration << " microseconds" << endl;

    return 0;
}

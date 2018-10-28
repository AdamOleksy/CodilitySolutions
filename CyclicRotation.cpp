#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> solution(vector<int> &A, int K);

int main()
{
    vector<int> A{3, 8, 9, 7, 6};
    solution(A, 3);

    for(const auto &a : A)
        cout << a << ", ";

}

vector<int> solution(vector<int> &A, int K) {

    if(K == 0 || A.size() == (unsigned int)K || A.size() == 0)
        return A;

    if(A.size() < (unsigned int)K)
            K = K%A.size();

    std::rotate(A.rbegin(), A.rbegin() + K, A.rend());

    return A;
}

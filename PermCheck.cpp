#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int solution(vector<int> &A);

int main()
{
    vector<int> A{4, 5, 3, 2};
    cout << solution(A);
}

int solution(vector<int> &A)
{
    if(A.size() == 1 && *A.begin() == 1)
        return 1;

    if(A.size() == 1)
        return 0;

    sort(A.begin(), A.end());

    if(*A.begin() != 1)
        return 0;

    for(unsigned int i = 0; i < A.size() - 1; i++)
        if(A[i] + 1 != A[i+1])
            return 0;

    return 1;
}

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int solution(vector<int> &A);

int main()
{
    vector<int> A{1, 3, 4, 2, 1, 4, 3};
    cout << solution(A);
}

int solution(vector<int> &A)
{

    if(!A.size())
        return 0;

    if(A.size() == 1)
        return A[0];

    sort(A.begin(), A.end());

    for(int i = 0; i< (int)A.size() - 2; i+=2)
       if(A[i] != A[i+1])
           return A[i];

    return A.back();
}

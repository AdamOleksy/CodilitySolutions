#include<iostream>
#include<vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(vector<int> &A);

int main()
{
    vector<int> A{-10, -20, -30, -40, 100};
    cout << solution(A);
}

int solution(vector<int> &A)
{
    if(A.size() == 2)
        return abs(A[0] - A[1]);

    int sum = 0;
    for(const auto &a : A)
        sum+=a;

    int minimal = 2000;
    int sumOfFirstPart = 0;

    for_each(A.begin(), A.end()-1, [&](int &a)
        {
            sumOfFirstPart+=a;
            sum-=a;
            if(minimal>abs(sum - sumOfFirstPart))
                minimal=abs(sum - sumOfFirstPart);
        });

    return minimal;
}

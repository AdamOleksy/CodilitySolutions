//Searched = quantity - (sum of all - sum of sequence (1-N))
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int solution(vector<int> &A);

int main()
{
    vector<int> A{2, 3, 1, 5};
    cout << solution(A);
}

int solution(vector<int> &A)
{
    double sum = 0;
    double quantity = A.size();
    int max = quantity + 1;

    for (const auto& a : A)
        sum += a;

    double searched = max - (sum - ((1 + quantity)/2)*quantity);

    return searched;
}

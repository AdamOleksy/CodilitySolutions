#include <algorithm>
#include <vector>
#include <iostream>
#include <memory>

std::vector<int> solution(int N, std::vector<int> &A);

int main()
{
    std::vector<int> A{1, 1, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 10, 1, 10};
    std::vector<int> B = solution(9, A);
    std::cout << "[";
    for(const auto &b : B)
        std::cout << b << " ";

    std::cout << "]";

    return 0;
}

std::vector<int> solution(int N, std::vector<int> &A)
{
    std::vector<int> B(N, 0);
    int newCounterMinValue = 0;
    int lastMinimal = 0;

    for(const auto &a : A)
    {
        if(a > N)
        {
            lastMinimal = newCounterMinValue;
        }

        if(a >= 1 && a <= N)
        {
            B[a-1]++;

            if(B[a-1] <= lastMinimal)
            {
                B[a-1] = lastMinimal;
                B[a-1]++;
            }

            if(B[a-1] >= newCounterMinValue)
                newCounterMinValue = B[a-1];
        }

    }

    std::transform(B.begin(), B.end(), B.begin(), [&](int &i){
        if(i < lastMinimal)
            i = lastMinimal;
        return i;
    });

    return B;

}

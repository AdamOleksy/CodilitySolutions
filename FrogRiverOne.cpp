#include <algorithm>
#include <vector>
#include <iostream>

int solution(int X, std::vector<int> &A);

int main()
{
    std::vector<int> A{1, 3, 1, 4, 2, 3, 5, 4};
    std::cout << solution(5, A);
    return 0;
}

int solution(int X, std::vector<int> &A)
{
    std::vector<bool> B(X, false);
    int time = 0;
    int minTime = 0;
    int coveredPositionCounter = 0;

    for(const auto &a : A)
    {
        if(B[a-1] == false)
        {
            B[a-1] = true;
            minTime = time;
            coveredPositionCounter++;
            if(X <= coveredPositionCounter)
                return minTime;
        }
        time++;
    }

    return -1;
}

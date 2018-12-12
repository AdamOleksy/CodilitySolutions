#include<algorithm>
#include<vector>
#include<iostream>

int solution(std::vector<int> &A);

int main()
{
    std::vector<int> A{0,1,0,1,1};
    std::cout << solution(A);
}

int solution(std::vector<int> &A)
{
    unsigned long int carsOnRoad{0};
    unsigned long int pairsNumber{0};

    std::for_each(A.begin(), A.end(), [&carsOnRoad, &pairsNumber](int &a)
        { if(a == 0)
            carsOnRoad++;

          if(a == 1)
              pairsNumber+=carsOnRoad;});

    if(pairsNumber > 1000000000)
        return -1;

    return pairsNumber;
}

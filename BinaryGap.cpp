#include<iostream>

int solution(int N);

int main()
{
    std::cout << solution(1041);
}

int solution(int N) {

    int binaryGap = 0;
    int biggestGap = 0;
    bool startCalculate = false;

    for(int i = N; i > 0; i=i/2)
    {
        if(i%2 == 1 && !startCalculate)
        {
            startCalculate = true;
        }

        if(i%2 == 1 && startCalculate && binaryGap > 0)
        {
            if(binaryGap > biggestGap)
            {
                biggestGap = binaryGap;
            }
            binaryGap = 0;
        }

        if(i%2 == 0 && startCalculate)
        {
            binaryGap++;
        }
    }

    return biggestGap;

}

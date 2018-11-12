//Searched = distance between X-Y divaided by D + one more jump
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int solution(int X, int Y, int D);

int main()
{
    cout << solution(10, 85, 30);
}

int solution(int X, int Y, int D)
{
    if(X == Y)
        return 0;

    if((Y-X)%D == 0)
        return (Y-X)/D;

    return (Y-X)/D + 1;
}

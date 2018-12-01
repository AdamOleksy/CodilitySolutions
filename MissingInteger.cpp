#include <algorithm>
#include <vector>

int solution(std::vector<int> &A);

int main()
{
    std::vector<int> A{2,1,5,7,4};
    solution(A);
}

int solution(std::vector<int> &A) {
    std::sort(A.begin(), A.end());
    int searched = 1;
    for(const auto &a : A)
        if(a == searched)
            searched++;
            
    return searched;
}

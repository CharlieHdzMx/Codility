#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> &A, int K)
{
    if(K == 0 || K == (int)A.size() || A.empty())
    {
       /*Do nothing*/
    }
    else
    {
        unsigned temp = (K > (int)A.size())? (K%A.size()): K;
        rotate(A.rbegin(), A.rbegin() + temp, A.rend());
    }
    return A;
}

void printVector(vector<int> v)
{
    for(auto x : v)
        cout<<x<<", ";
    cout<<endl;
}

int main()
{
    vector<int> v = {3, 8, 9, 7 , 6};
    printVector(solution(v,4));
    return 0;
}

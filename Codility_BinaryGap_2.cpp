#include <iostream>

using namespace std;

int solution(int N)
{
    unsigned int maxAcum = 0u;
    unsigned int acum = 0u;
    bool first1 = false;

    for(int i = 31; i > -1; i--)
    {
        if((first1 == true) && ((N&(1u<<i)) != 0u))
        {
            maxAcum = (maxAcum > acum)? maxAcum : acum;
            acum = 0u;
        }
        else if(first1 == false && ((N&(1u<<i)) != 0u))
        {
            first1 = true;
        }
        else if( first1 == true && ((N&(1u<<i)) == 0u))
        {
            acum++;
        }
        else
        {

        }
    }
    return maxAcum;
}

int main()
{
    cout << solution(1<<4u) << endl;
    cout << solution(15) << endl;
    cout << solution(32) << endl;
    cout << solution(529) << endl;
    cout << solution(1041) << endl;

    return 0;
}

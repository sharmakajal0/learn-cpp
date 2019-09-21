#include<iostream>
#include<string.h>

int main()
{
    int N;
    char s[100001];
    std::cin >> N;
    for(int i = 0; i < N; i++)
    {
        std::cin >> s;
        int f = 0;
        
        for (int i = 0; i < strlen(s); i++)
        {
            if ((s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0') || (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1'))
            {
                f = 1;
                break;
            }
        }
        if (f == 1)
        {
            std::cout << "Good" << std::endl;
        }
        else
        {
            std::cout << "Bad" << std::endl;
        }
    }
}

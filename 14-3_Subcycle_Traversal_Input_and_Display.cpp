#include <iostream>
#include <vector>

int main() 
{
    bool precence[10][5] = {{false, false, true, true, false},
                            {true, false, true, false, false},
                            {true, false, true, false, false},
                            {false, false, true, false, false},
                            {false, true, false, false, false},
                            {false, true, false, false, false},
                            {false, false, true, false, false},
                            {false, true, true, false, false},
                            {false, false, false, false, false},
                            {false, true, false, true, false}};

    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (precence[i][j] == true)
            {
                count += 1;
            }
        }
        
    }
    int precent = (count * 100) / 50;
    std::cout << "Precent = " << precent << '\n';

    return 0;

}
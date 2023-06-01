#include <iostream>
#include <vector>

int main() 
{
    int precence[5][3];
    
    std::cout << "Fill the entire array with numbers:" << '\n';
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << "Enter the number: ";
            std::cin >> precence[i][j];
        }
    }
    
    std::cout << "All nubmers to array:" << '\n';
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << precence[i][j] << " ";
        }
        std::cout << '\n';
    }
    return 0;

}
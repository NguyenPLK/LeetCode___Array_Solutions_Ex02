#include <iostream>
#include <vector>

class Solution
{
public:
    int findNumbers(std::vector<int> &nums)
    {
        int count = 0;
        for (auto it = nums.begin(); it != nums.end(); it++)
        {
            if (isEvenNumber(*it))
            {
                count++;
            }
        }
        return count;
    }

    bool isEvenNumber(const unsigned int &number)
    {
        if (numberOfDigits(number) % 2 == 0)
        {
            return 1;
        }
        else
            return 0;
    }

    int numberOfDigits(unsigned int number)
    {
        int numberDigits = 0;
        while (number != 0)
        {
            numberDigits++;
            number /= 10;
        }
        return numberDigits;
    }
};

int main()
{
    std::vector<int> myVector{12, 345, 2, 6, 7896};
    Solution mySolution;
    std::cout << mySolution.findNumbers(myVector);
    return 0;
}
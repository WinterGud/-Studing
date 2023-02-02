#include <string>
#include <vector>
#include <iostream>

class RomanHelper {
public:
    std::string to_roman(unsigned int num) {
        std::string result;

        if (num >= 1000 && num <= 3999)
        {
            switch (num / 1000)
            {
            case 1:
                result = "M";
                break;
            case 2:
                result = "MM";
                break;
            case 3:
                result = "MMM";
                break;
            }
            num %= 1000;
        }



        if ((num >= 100) && (num < 1000))
        {
            if (num >= 900)
            {
                result += "CM";
                num -= 900;
            }
            if ((num >= 500) && (num < 900)) {
                result += "D";
                num -= 500;
            }
            if ((num >= 100) && (num < 500))
            {
                switch (num / 100)
                {
                case 1:
                    result += "C";
                    break;
                case 2:
                    result += "CC";
                    break;
                case 3:
                    result += "CCC";
                    break;
                case 4:
                    result += "CD";
                    break;
                }
                num %= 100;
            }
        }

        if (num >= 10 && num < 100)
        {
            if (num >= 90)
            {
                result += "XC";
                num -= 90;
            }
            if ((num >= 50) && (num < 90)) {
                result += "L";
                num -= 50;
            }
            if ((num >= 10) && (num < 50))
            {
                switch (num / 10)
                {
                case 1:
                    result += "X";
                    break;
                case 2:
                    result += "XX";
                    break;
                case 3:
                    result += "XXX";
                    break;
                case 4:
                    result += "XL";
                    break;
                }
                num %= 10;
            }
        }

        if (num >= 1 && num < 10)
        {
            if (num >= 9)
            {
                result += "IX";
                num -= 9;
            }
            if ((num >= 5) && (num < 9)) {
                result += "V";
                num -= 5;
            }
            if ((num >= 1) && (num < 5))
            {
                switch (num)
                {
                case 1:
                    result += "I";
                    break;
                case 2:
                    result += "II";
                    break;
                case 3:
                    result += "III";
                    break;
                case 4:
                    result += "IV";
                    break;
                }
            }
        }

        return result;
    }
    int from_roman(std::string rnum) {
        int result = 0;
        std::vector<int> vectorOfNum;
        std::vector<char> vectorOfChar;
        for (size_t i = 0; i < rnum.size(); i++)
        {
            vectorOfChar.push_back(rnum[i]);
        }

        for (size_t i = 0; i < vectorOfChar.size(); i++)
        {
            if (vectorOfChar[i] == 'I') vectorOfNum.push_back(1);
            if (vectorOfChar[i] == 'V') vectorOfNum.push_back(5);
            if (vectorOfChar[i] == 'X') vectorOfNum.push_back(10);
            if (vectorOfChar[i] == 'L') vectorOfNum.push_back(50);
            if (vectorOfChar[i] == 'C') vectorOfNum.push_back(100);
            if (vectorOfChar[i] == 'D') vectorOfNum.push_back(500);
            if (vectorOfChar[i] == 'M') vectorOfNum.push_back(1000);
        }

        vectorOfNum.resize(vectorOfNum.size() + 1, -1);
        result = 0;
        for (size_t i = 0; i < vectorOfNum.size(); i++)
        {
            if (vectorOfNum[i] == -1) break;
            else if (vectorOfNum[i] >= vectorOfNum[i + 1]) result += vectorOfNum[i];
            else if (vectorOfNum[i] < vectorOfNum[i + 1] && vectorOfNum[i+1] != -1)
            {
                result += vectorOfNum[i + 1] - vectorOfNum[i];
                if (i != vectorOfNum.size()) i += 1;
            }
            std::cout << result << std::endl;
        }

        return result;
    }
} RomanNumerals;

int main()
{

    std::cout << RomanNumerals.from_roman("MDCLXVI");

    return 0;
}

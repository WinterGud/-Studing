#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
std::map<std::string, int> map{
        {"zero", 0},
        {"one", 1},
        {"two", 2},
        {"three", 3},
        {"four", 4},
        {"five", 5},
        {"six", 6},
        {"seven", 7},
        {"eight", 8},
        {"nine", 9},
        {"ten", 10},
        {"eleven", 11},
        {"twelve", 12},
        {"thirteen", 13},
        {"fourteen", 14},
        {"fifteen", 15},
        {"sixteen", 16},
        {"seventeen", 17},
        {"eighteen", 18},
        {"nineteen", 19},
        {"twenty", 20},
        {"thirty", 30},
        {"forty", 40},
        {"fifty", 50},
        {"sixty", 60},
        {"seventy", 70},
        {"eighty", 80},
        {"ninety", 90},
        {"hundred", 100},
        {"thousand", 1000},
        {"million", 1000000}
};

std::map<std::string, int> mapOfMultiNumber{
    
};


int parseSmallInt(std::string number) { //функція для обчислення одного слова
    std::string num;
    int result;
    for (size_t i = 0; i < size(number); i++)
    {
        if (number[i] != ' ') num += number[i];
        if (number[i] == ' ') break;
    }
    result = map.at(num);
    return result;
}

std::vector<std::string> stringIntToVectorOfString(std::string number) {

    std::vector<std::string> vectorOfNumbers;
    std::string s_smallStringInt;
    for (size_t j = 0; j < number.size(); j++)
    {
        if (number[j] == '-') number[j] = ' ';
        if (number[j] != ' ') s_smallStringInt += number[j];
        if (number[j] == ' ') {
            vectorOfNumbers.push_back(s_smallStringInt);
            s_smallStringInt.clear();
        }
    }
    vectorOfNumbers.push_back(s_smallStringInt);
    return vectorOfNumbers;
}



long parseMainInt(std::string number) {
    
    std::vector<std::string> vectorOfNumbers = stringIntToVectorOfString(number);
    std::vector<int> vectorOfNumbers_To_VectorOfInt;

    for (size_t i = 0; i < vectorOfNumbers.size(); i++)//видаляю and бо поки незнаю шо з ним робити
    {
        if (vectorOfNumbers[i] == "and")vectorOfNumbers.erase(vectorOfNumbers.begin() + i);
    }

    for (size_t i = 0; i < vectorOfNumbers.size(); i++)
    {
        vectorOfNumbers_To_VectorOfInt.push_back(parseSmallInt(vectorOfNumbers[i]));
        std::cout << vectorOfNumbers_To_VectorOfInt[i] << std::endl;
    }
    std::cout << "-------------------------------------------------" << std::endl;
    
    
    //------------------------------------------------------------------------------
    int result = 0;
    int sum = 0;
    
    for (size_t i = 0; i < vectorOfNumbers_To_VectorOfInt.size(); i++)
    {
        
        if (vectorOfNumbers_To_VectorOfInt[i] == 100 || vectorOfNumbers_To_VectorOfInt[i] == 1000 || vectorOfNumbers_To_VectorOfInt[i] == 1000000)
        {
            result *= vectorOfNumbers_To_VectorOfInt[i];
            if (result >= 1000)
            {
                sum = result;
                result = 0;
            }
        }
        else if (vectorOfNumbers_To_VectorOfInt[i] != 100 && vectorOfNumbers_To_VectorOfInt[i] != 1000 && vectorOfNumbers_To_VectorOfInt[i] != 1000000)
        {
            result += vectorOfNumbers_To_VectorOfInt[i];
        }
        std::cout << result << '\n';
    }
    std::cout << "-------------------------------------------------" << std::endl;
    return result + sum;
}

// число з parseSmallInt записуєм в масив? потіи через if руалізувати число * одиницю

int main() {
    std::string number = "seven hundred eighty-three thousand nine hundred and nineteen";
    /*
    std::vector<std::string> vectorOfNumbers = stringIntToVectorOfString(number);

    
    for (size_t i = 0; i < vectorOfNumbers.size(); i++)
    {
        if(vectorOfNumbers[i] == "and")vectorOfNumbers.erase(vectorOfNumbers.begin() + i );
    }
    for (size_t i = 0; i < vectorOfNumbers.size(); i++)
    {
        std::cout << vectorOfNumbers[i] << std::endl;
    }*/
    std::cout << parseMainInt(number);
    //std::cout << stringsIntToString("one") << std::endl;
    //std::cout << stringsIntToString("twenty four") << std::endl;
    //std::cout << stringsIntToString("two hundred and forty-six") << std::endl;


    return 0;
}

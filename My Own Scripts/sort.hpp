int* Sort(int numerOfArray, int array[], char sign) {
    if (sign == '<') {
        for (int i = 0; i < numerOfArray - 1; ++i)
        {
            int minNum = i;
            for (int j = i + 1; j < numerOfArray; ++j)
            {
                if (array[j] < array[minNum]) minNum = j;
            }
            std::swap(array[i], array[minNum]);
        }
    }
    if (sign == '>') {
        for (int i = 0; i < numerOfArray - 1; ++i)
        {
            int minNum = i;
            for (int j = i + 1; j < numerOfArray; ++j)
            {
                if (array[j] > array[minNum]) minNum = j;
            }
            std::swap(array[i], array[minNum]);
        }
    }
    
    return array;
}

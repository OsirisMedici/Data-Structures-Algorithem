 for (int i = 1; i < size; i++)
    {
        int j = i - 1;
        int temp = arr[i];
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
                arr[j + 1] = arr[j];
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }

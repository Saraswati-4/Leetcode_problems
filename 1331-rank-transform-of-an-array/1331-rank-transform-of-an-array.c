int compare(const void* a, const void* b) {
    int x = *(const int*)a;
    int y = *(const int*)b;

    return (x > y) - (x < y);
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* arrayRankTransform(
    int* arr,
    int arrSize,
    int* returnSize
) {
    int* sortedArray = malloc(arrSize * sizeof(int));
    int* result = malloc(arrSize * sizeof(int));

    for (int i = 0; i < arrSize; i++) {
        sortedArray[i] = arr[i];
    }

    qsort(sortedArray, arrSize, sizeof(int), compare);

    int uniqueSize = 0;

    for (int i = 0; i < arrSize; i++) {
        if (i == 0 || sortedArray[i] != sortedArray[i - 1]) {
            sortedArray[uniqueSize++] = sortedArray[i];
        }
    }

    for (int i = 0; i < arrSize; i++) {
        int left = 0;
        int right = uniqueSize - 1;

        while (left <= right) {
            int mid = (left + right) / 2;

            if (sortedArray[mid] == arr[i]) {
                result[i] = mid + 1;
                break;
            }

            if (sortedArray[mid] < arr[i]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }

    free(sortedArray);

    *returnSize = arrSize;
    return result;
}
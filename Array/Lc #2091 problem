int minimumDeletions(int* nums, int numsSize) {
    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] < nums[minIndex]) minIndex = i;
        if (nums[i] > nums[maxIndex]) maxIndex = i;
    }
    
    if (minIndex > maxIndex) {
        int temp = minIndex;
        minIndex = maxIndex;
        maxIndex = temp;
    }
  
    int option1 = maxIndex + 1;                    
    int option2 = numsSize - minIndex;            
    int option3 = (minIndex + 1) + (numsSize - maxIndex); 

    int min = option1;
    if (option2 < min) min = option2;
    if (option3 < min) min = option3;

    return min;
}

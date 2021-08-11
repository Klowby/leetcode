/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i, j;
    int *result = NULL;
    *returnSize = 2;
    for(i = 0; i < numsSize - 1; i++) {
        for(j = i + 1; j < numsSize; j++) {
            if(nums[i] + nums[j] == target) {
                result = (int*)malloc(*returnSize * sizeof(int));
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return result;
}
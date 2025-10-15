// 377. Combination Sum IV

/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var combinationSum4 = function(nums, target) {
    let dp_array = new Uint32Array(target + 1);
    dp_array[0] = 1;
    for (let i = 1; i <= target; i++) {
        for (let number of nums) {
            if (number <= i)
                dp_array[i] += dp_array[i - number];
        }
    }
    return dp_array[target];
};
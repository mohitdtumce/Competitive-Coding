function getSecondLargest(nums) {
    let a = nums[0];
    let b = 0;
    for (let i = 1; i < nums.length; i++) {
        if (a < nums[i]) {
            b = a;
            a = nums[i];
        } else if (b < nums[i] && nums[i] != a) {
            b = nums[i];
        }
    }
    return b;
}
nums = [2, 3, 6, 6, 5];
console.log(getSecondLargest(nums));
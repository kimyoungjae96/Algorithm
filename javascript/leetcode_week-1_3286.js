/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function (nums) {
  var j = 0;
  var targetNum = 0;
  for (var i = 0; i < nums.length; i++) {
    if (nums[i] == 0) {
      j++;
    } else {
      nums[i - j] = nums[i];
    }
  }
  targetNum = j;
  while (j != 0) {
    nums.pop();
    j--;
  }
  while (targetNum != 0) {
    nums.push(0);
    targetNum--;
  }
  return nums;
};

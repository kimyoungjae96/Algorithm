// /**
//  * @param {number[]} nums
//  * @return {number}
//  */
// var maxSubArray = function(nums) {
//   var maxVal = Math.max.apply(null,nums);
//   var sum = 0;
//   for(var i=0;i<nums.length;i++){
//       sum = nums[i];
//       for(var j=i+1;j<nums.length;j++){
//           sum += nums[j];
//           if(sum > maxVal){
//               maxVal = sum;
//           }
//       }
//   }
//   return(maxVal);
// };

/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function (nums) {
  let currentMax = nums[0];
  let globalMax = nums[0];

  for (let i = 1; i < nums.length; i++) {
    currentMax = Math.max(nums[i], currentMax + nums[i]);

    if (currentMax > globalMax) {
      globalMax = currentMax;
    }
  }

  return globalMax;
};

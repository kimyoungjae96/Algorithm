/**
 * @param {number[]} nums
 * @return {number}
 */

// var singleNumber = function(nums) {
//     var chk;
//     const TempSet = Array.from(new Set(nums));
//     for (var i=0;i<TempSet.length;i++){
//         chk = 0;
//         for(var j=0;j<nums.length;j++){
//             if(nums[j] == TempSet[i]){
//                 chk++;
//             }

//             if(chk == 2){
//                 console.log(TempSet[i]);
//                 break;
//             }
//         }
//         if(chk == 1){
//             return TempSet[i];
//         }
//     }

// };

var singleNumber = function (nums) {
  if (nums.length === 0) return;
  let xor = nums[0];
  for (let i = 1; i < nums.length; i++) {
    xor ^= nums[i];
    console.log(xor);
  }
  return xor;
};

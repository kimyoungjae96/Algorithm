/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function(nums) {
    let max_num = 0
    let sum_num = 0
    nums.map((num)=>{
        if(num === 1){
            sum_num +=1
        }else{
            sum_num = 0
        }

        if(max_num < sum_num){
            max_num = sum_num
        }
    })
    return max_num
};
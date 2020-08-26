/**
 * @param {number[]} nums
 * @return {number}
 */
var findNumbers = function(nums) {
    let answer = 0
    nums.map((num)=>{
        if(String(num).length % 2 === 0){
            answer += 1
        }
    })
    return answer
};
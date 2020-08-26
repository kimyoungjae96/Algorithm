/**
 * @param {number[]} arr
 * @return {void} Do not return anything, modify arr in-place instead.
 */
var duplicateZeros = function(arr) {

    let duplicateZeroCheck = 0
    let emptyArr = Array.prototype.slice.call(arr)
    let arrayIndex = 1

    for(let i = 0 ; i < emptyArr.length ; i++){
        if(emptyArr[i] === 0){
            arr.splice(i+arrayIndex,0,0)
            arrayIndex += 1
            arr.pop()
        }
    }
};
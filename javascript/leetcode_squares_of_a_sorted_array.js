/**
 * @param {number[]} A
 * @return {number[]}
 */
var sortedSquares = function(A) {
    let sortedArray = []
    sortedArray = A.map((a)=>{return a*a})
    sortedArray.sort((a, b)=>{return a-b})
    return sortedArray
};
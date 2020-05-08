/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (prices) {
  var Sum = 0;
  var TempVal = 0;
  for (var i = 0; i < prices.length; i++) {
    if (prices[i - 1] != undefined) {
      if (prices[i] > prices[i - 1]) {
        Sum += prices[i] - prices[i - 1];
      }
    }
  }
  return Sum;
};

/**
 * @param {number} n
 * @return {boolean}
 */
var isHappy = function (n) {
  let s = String(n);
  let sSum = 0;
  let sSet = new Set();
  while (1) {
    for (var i = 0; i < s.length; i++) {
      sSum += Number(s[i]) ** 2;
    }
    if (sSet.has(sSum)) {
      return false;
    }
    sSet.add(sSum);
    if (sSum == 2 || sSum == 3) {
      return false;
    }
    if (sSum == 1) {
      return true;
    }
    s = String(sSum);
    sSum = 0;
  }
};

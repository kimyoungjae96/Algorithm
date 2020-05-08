/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function (strs) {
  var S = "";
  var C = {};
  for (var i = 0; i < strs.length; i++) {
    S = strs[i].split("").sort().join("");
    if (C[S]) {
      C[S].push(strs[i]);
    } else {
      C[S] = [strs[i]];
    }
  }

  const keys = Object.keys(C);
  const value = keys.map((v) => {
    return C[v];
  });
  return value;
};

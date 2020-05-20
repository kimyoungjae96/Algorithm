function solution(w, h) {
  var answer = 1;
  return w * h - (w + h - gcd(w, h));
}
// 최대공약수
function gcd(minNum, maxNum) {
  return minNum % maxNum === 0 ? maxNum : gcd(maxNum, minNum % maxNum);
}

// 최소공배수
function lcm(minNum, maxNum) {
  return (minNum * maxNum) / gcd(minNum, maxNum);
}

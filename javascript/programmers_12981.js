function solution(n, words) {
  var chk = new Set();
  var answer = [];
  for (var i = 0; i < words.length; i++) {
    if (i >= 1) {
      if (words[i - 1][words[i - 1].length - 1] != words[i][0]) {
        return [Math.floor((i % n) + 1), Math.floor(i / n) + 1];
      }
    }
    if (chk.has(words[i])) {
      return [Math.floor((i % n) + 1), Math.floor(i / n) + 1];
    } else {
      chk.add(words[i]);
    }
  }
  // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.

  return [0, 0];
}

const final = [];
const maxLen = [];
for (var i = 0; i < 5500000; i++) {
  maxLen[i] = 1;
}

function solution(nums) {
  var answer = 0;
  combination(nums, [], nums.length, 3, 0);

  primeSet();
  final.map((item) => {
    var sum = item.reduce((a, b) => a + b);

    if (primeChk(sum)) answer += 1;
  });
  // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.

  return answer;
}

function combination(source, target, n, r, count) {
  if (r === 0) final.push(target);
  else if (n === 0 || n < r) return;
  else {
    target.push(source[count]);
    combination(source, Object.assign([], target), n - 1, r - 1, count + 1);
    target.pop();
    combination(source, Object.assign([], target), n - 1, r, count + 1);
  }
}
function primeSet() {
  var j = 2;
  while (j < Math.sqrt(550000)) {
    for (var i = j; i * j < 550000; i++) {
      //console.log(i*j)
      maxLen[i * j] = -1; //2 ,4 ,6 ,8 , 10 초기화?????
    }
    j += 1;
  }
}
function primeChk(n) {
  if (maxLen[n] == 1) return true;
  else return false;
}

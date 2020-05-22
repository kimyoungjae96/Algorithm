function solution(s) {
  var answer = 0;
  answer = 0;
  var minChk = 1000;
  var chk = 0;
  var counter = 0;
  var temp = 0;

  var result = "";
  for (var i = 1; i <= Math.ceil(s.length / 2); i++) {
    result = "";
    counter = 0;
    for (var j = 0; j <= s.length; j += i) {
      if (s.substr(j, i) == temp) {
        //맨 처음에 자른애랑 같은 경우
        counter = Number(counter) + 1;
      } else {
        //자른애랑 틀린 경우 기준값을 변경

        if (counter == 1) {
          result += temp;
        } else {
          if (counter != 0) {
            result += counter + temp;
          }
        }
        temp = s.substr(j, i);
        counter = 1;
      }
    }
    if (s.length / i != 0) {
      result += s.substr(s.length / i, s.length % i);
    }
    if (result.length < minChk) {
      minChk = result.length;
    }
  }
  return minChk;
}

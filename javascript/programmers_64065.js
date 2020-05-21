function solution(s) {
  var answer = [];
  s = s.slice(0, s.length - 2);
  var TempArr = s.replace(/{/g, "");
  var sArr = TempArr.split("},");
  sArr.sort((x, y) => x.length - y.length);
  for (var i = 0; i < sArr.length; i++) {
    var chk = sArr[i].split(",");
    for (var j = 0; j < chk.length; j++) {
      if (answer.indexOf(Number(chk[j])) == -1) {
        answer.push(Number(chk[j]));
      }
    }
  }
  return answer;
}

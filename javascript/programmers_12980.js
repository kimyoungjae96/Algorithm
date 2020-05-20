function solution(n) {
  var ans = 0;
  while (n != 1) {
    if (n % 2 != 0) {
      //2로나누어떨어지지않으면 1을뺀다.
      n -= 1;
      ans += 1;
    } else {
      //2로 나누어 떨어지면 2로 나눈다.
      n = n / 2;
    }
  }

  return ans + 1;
}

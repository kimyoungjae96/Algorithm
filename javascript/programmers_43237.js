function solution(budgets, M) {
  var min = 0;
  var max = M;
  var answer = 0;
  var middle = 0;
  var price = 0;

  for (var i = 0; i < budgets.length; i++) {
    price += budgets[i];
  }
  if (price <= M) {
    return Math.max.apply(null, budgets);
  }

  while (min <= max) {
    price = 0;
    middle = Math.floor((max + min) / 2);
    for (var i = 0; i < budgets.length; i++) {
      if (budgets[i] > middle) {
        price += middle;
      } else {
        price += budgets[i];
      }
    }

    if (price > M) {
      max = middle - 1;
      answer = middle - 1;
    } else {
      min = middle + 1;
    }
  }

  return answer;
}

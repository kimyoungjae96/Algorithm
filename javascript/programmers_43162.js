function getParents(Parents, x) {
  if (Parents[x] == x) {
    return x;
  }
  return (Parents[x] = getParents(Parents, Parents[x]));
}

function unionParents(Parents, a, b) {
  a = getParents(Parents, a);
  b = getParents(Parents, b);

  if (a < b) {
    Parents[b] = a;
  } else {
    Parents[a] = b;
  }
}

function findParents(Parents, a, b) {
  a = getParents(Parents, a);
  b = getParents(Parents, b);

  if (a == b) {
    return 1;
  } else {
    return 0;
  }
}

function solution(n, computers) {
  var answer = 0;
  var Parents = [];

  for (var i = 0; i < n + 1; i++) {
    Parents.push(i);
  }

  for (var i = 0; i < computers.length; i++) {
    for (var j = 0; j < computers.length; j++) {
      if (i != j && computers[i][j] == 1) {
        unionParents(Parents, i + 1, j + 1);
      }
    }
  }
  var a = new Set();
  for (var i = 1; i <= computers.length; i++) {
    a.add(getParents(Parents, i));
  }

  return a.size;
}

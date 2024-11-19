function solution(t, p) {
    var answer = 0;
    var temp = "";

    for (var i=0;i<=t.length- p.length;i++) {
        temp = "";
        for (var j = i; j <p.length+i; j++) {
            temp += t[j];
        }
        if (Number(temp)<=Number(p)) {
            answer += 1;
        }
    }

    return answer;
}
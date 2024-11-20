function solution(ingredient) {
    var answer = 0;
    var temp = [0,2, 3, 1];

    for (var i=0;i<ingredient.length;i++) {
        if (ingredient[i]===1) {
            var t=true;
            if(i+3>=ingredient.length) continue;
            for (var j=1;j<4;j++) {
                if (ingredient[i+j]!==temp[j]) {
                    t=false;
                    break;
                }
            }
            if(t==true) {
                ingredient.splice(i, 4);
                answer++;
                i-=4;
            }
        }
    }

    return answer;
}

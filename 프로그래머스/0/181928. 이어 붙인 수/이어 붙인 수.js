function solution(num_list) {
    var ans1 = '', ans2 = '';
    for (var i = 0; i < num_list.length; i++) {
        if (num_list[i] % 2 === 0) {
            ans1 += num_list[i].toString()
        } else {
            ans2 += num_list[i].toString();
        }
    }
    return parseInt(ans1) + parseInt(ans2);
}
function solution(num_list) {
    var answer = [];
    
    num_list.sort(function(a, b)  {
  return a - b;
});
    for(var i=5;i<num_list.length;i++){
        answer.push(num_list[i]);
    }
    
    return answer;
}
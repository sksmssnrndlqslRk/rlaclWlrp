function solution(num_list, n) {
    var answer = [];
    var a=0;
    while(1){
        if(num_list.length-1<a){
            break;
        }
        answer.push(num_list[a]);
        a+=n;
    }
    
    
    return answer;
}
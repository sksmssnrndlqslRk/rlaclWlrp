function solution(my_string, is_prefix) {
    var answer = 1;
    if(is_prefix.length > my_string.length) return 0;


    for(var i = 0; i < is_prefix.length; i++){
        if(my_string[i] != is_prefix[i]) return 0;
    }
    

    return answer;
}
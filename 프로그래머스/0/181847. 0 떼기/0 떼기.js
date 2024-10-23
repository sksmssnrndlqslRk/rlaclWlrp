function solution(n_str) {
    var answer = '';
    
    var a=true;
    for(let i=0;i<n_str.length;i++){
        if(n_str[i]=='0'&&a==true){
            
        }
        else{
            a=false;
            answer+=(n_str[i]);
        }
    }
    
    return answer;
}
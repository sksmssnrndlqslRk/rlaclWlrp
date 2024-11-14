function solution(x) {
    var answer = true;
    var chuu=0;
    x=String(x);
    for(var i=0;i<x.length;i++){
        chuu+=x[i]-'0';
    }
    if(Number(x)%Number(chuu)==0){
        
    }
    else{
        answer=false;
    }
    return answer;
}
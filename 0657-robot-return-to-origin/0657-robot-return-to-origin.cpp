class Solution {
public:
    bool judgeCircle(string moves) {
       int x=0;
       int y=0;
       for(int i=0;i<moves.length();i++){
        if(moves[i]=='U'){
            x+=1;
        }
        if(moves[i]=='D'){
            x-=1;
        }
        if(moves[i]=='R'){
            y+=1;
        }
        if(moves[i]=='L'){
            y-=1;
        }
       } 
       if(x==0 && y==0){
        return true;
       }
       else{
        return false;
       }
    }
};
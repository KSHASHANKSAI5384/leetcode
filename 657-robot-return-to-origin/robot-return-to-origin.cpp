class Solution {
public:
    bool judgeCircle(string moves) {
        int move1=0,move2=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='R')
            {
                move1++;
            }
            else if(moves[i]=='L')
            {
                move1--;
            }
            else if(moves[i]=='U')
            {
                move2++;
            }
            else if(moves[i]=='D')
            {
                move2--;
            }
        }
            if(move1!=0 || move2!=0)
            {
                return false;
            }
            return true;
            

        
    }
};
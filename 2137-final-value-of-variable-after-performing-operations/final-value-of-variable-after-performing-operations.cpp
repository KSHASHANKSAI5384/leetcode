class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X=0;
        for(auto a:operations)
        if(a=="X++"){
            X+=1;
        }
        else if(a=="++X"){
            X+=1;
        }
        else if(a=="X--"){
            X-=1;
        }
        else if(a=="--X"){
            X-=1;
        }
        return X;

        }

    
    
};
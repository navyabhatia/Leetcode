class Solution {
public:
    int findComplement(int num) {
        vector<int>temp;
        //convert decimal to binary
        while( num != 0 ){
            temp.push_back( num % 2 );
            num /= 2;
        } 
        //flip 0 and 1
        for(int i=0; i<temp.size(); i++){
            if( temp[i] == 1 ) temp[i] = 0;
            else if( temp[i] == 0 ) temp[i] = 1;
        }
        //convert binary to decimal
        int res = 0;
        for(int i=temp.size()-1; i>-1; i--) res = res * 2 + temp[i];
        return res;
        
    }
};



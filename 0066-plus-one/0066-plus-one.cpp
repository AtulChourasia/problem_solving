class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        int c = 1;
        int i = d.size()-1;
        while(c ==1 && i>=0){
            d[i]+= c;
            if(d[i] > 9){
                c = 1;
                d[i] = d[i]%10;
            }else{
                c = 0;
            }
            i--;
            if(i < 0 && c == 1){
                d.insert(d.begin(),1);
            }
        }
        return d;
    }
};
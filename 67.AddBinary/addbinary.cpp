class Solution {
public:
    string addBinary(string a, string b) {
        int len1 = a.length();
        int len2 = b.length();
        int carry = 0;
        string ans = "";
        while(len1>0 || len2>0){
            int y = carry;
            if (len1>0){
                y+=a[--len1]-'0';
            }
            if (len2>0){
                y+=b[--len2]-'0';
            }
            if (y==0 || y==1){
                ans.insert(0,to_string(y));
                carry =0;
            }
            else if (y==2){
                carry = 1;
                y = 0;
                ans.insert(0,to_string(y));
            }
            else if (y==3){
                carry = 1;
                y = 1;
                ans.insert(0,to_string(y));
            }
        }
        if (carry == 1) ans.insert(0,to_string(carry));
        return ans;
    }
};

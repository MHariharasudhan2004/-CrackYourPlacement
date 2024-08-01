class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(auto h: details){
            //Extract the age from the string
            int age=(h[11]-'0')*10+(h[12]-'0');
            if(age>60)count++;
        }
        return count;
    }
};
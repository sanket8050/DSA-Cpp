#include<iostream>
#include<string>
using namespace std;



class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        for(int i=0;i<=n-m;i++){
            for(int j =0;j<=m;j++){
                if(needle[j] != haystack[j+i]){
                    break;
                }
                if(j == m-1){
                    return i;
                }
            }
        }
        return -1;
    }
};

int main(){
    string haystack = "console";
    string needle = "sol";

    Solution obj;
   cout<< obj.strStr(haystack,needle);
}
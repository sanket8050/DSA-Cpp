// Given a string s, reverse the string according to the following rules:

// All the characters that are not English letters remain in the same position.
// All the English letters (lowercase or uppercase) should be reversed.
// Return s after reversing it.

 

// Example 1:

// Input: s = "ab-cd"
// Output: "dc-ba"
// Example 2:

// Input: s = "a-bC-dEf-ghIj"
// Output: "j-Ih-gfE-dCba"
// Example 3:

// Input: s = "Test1ng-Leet=code-Q!"
// Output: "Qedo1ct-eeLg=ntse-T!"
 #include<iostream>
 #include<cctype>
using namespace std;

string reverse_only_alpha(string s){
    int left = 0;
    int right = s.length()-1;

    while(left < right){
        while(left < right && !isalpha(s[left])){
            left++;
        }

        while(left < right && !isalpha(s[right])){
            right--;
        }
        swap(s[left],s[right]);
        left++;
        right--;
    }
    return s;
}

int main(){
    string s = "Asas856__nkhb_";
    string a = reverse_only_alpha(s);
    cout<<s<<endl;
    cout<<a;
}
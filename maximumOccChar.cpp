#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution
{
    public:
    char getMaxOccuringChar(string str)
    {
        char arr[26] = {0};               //creating char array to store the count of all alphabets
        
        for(int i = 0; i< str.length(); i++) {
            char ch = str[i];
            int number = 0;
            number = ch-'a';
            arr[number]++;
        }
        
        int maxi = -1 , ans = 0;
        for(int i = 0; i<26; i++) {
            if(maxi < arr[i]) {
                ans = i;
                maxi = arr[i];
            }
        }
        
        return ans+'a';
    }

};

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       unordered_map<char , int>mp;
       int lenMag = magazine.length();
       int lenRan = ransomNote.length();

       if(lenRan > lenMag)return false;

        // Count the characters in the string
            for (char c : magazine) {
                     mp[c]++;
    }
    //     for (const auto& pair : mp) {
    //         cout << "Key: " << pair.first << ", Value: " << pair.second<<endl;
    // }

       for (char c : ransomNote) {
            auto it = mp.find(c);
            if (it != mp.end() && mp[c] > 0) {
                mp[c]--;
            }
            else
                return false;
        }
    return true;
    }
};
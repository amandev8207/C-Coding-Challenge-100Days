#1790. Check if One String Swap Can Make Strings Equal

You are given two strings s1 and s2 of equal length. A string swap is an operation where you choose two indices in a string (not necessarily different) and swap the characters at these indices.

Return true if it is possible to make both strings equal by performing at most one string swap on exactly one of the strings. Otherwise, return false.


bool areAlmostEqual(char* s1, char* s2) {
    int count = 0;
    int freq1[26] = {0}, freq2[26] = {0};
    int len = strlen(s1);

    for (int i = 0; i < len; i++) {
        freq1[s1[i] - 'a']++;
        freq2[s2[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i])
            return false;
    }
    for (int i = 0; i < len; i++) {
        if (s1[i] != s2[i])
            count++;
    }
    return count <= 2;
}
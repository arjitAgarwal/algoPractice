/*
Link -  https://leetcode.com/problems/longest-substring-without-repeating-characters/
*/

#define MAX(a,b) (((a)>(b))?(a):(b))

// Option 1 Brute Force
int lengthOfLongestSubstring(char * s) {
    int longest_count = 0;
    int string_size = strlen(s);
    for (int i = 0; i < string_size; i++) {
        int map[255] = {0};
        int count = 0;
        for (int j = i; j < strlen(s); j++) {
            if (map[s[j]] == 0) {
                count++;
                map[s[j]] = 1;
            } else {
                break;
            }
        }

        if (count > longest_count)  
            longest_count = count;

        if ((string_size - i) < longest_count) {
            return longest_count;
        }
    }

    return longest_count;
}

// Option 2 optimum solution

int lengthOfLongestSubstring(char * s) {
    int longest_count = 0;
    int string_size = strlen(s);
    int left = 0;
    int map[255];
    memset(map, -1, sizeof(int) * 255);
    for (int i = 0; i < string_size; i++) {
        if (map[s[i]] >= left) {
            left = map[s[i]] + 1;
        }

        map[s[i]] = i;
        longest_count = MAX(longest_count, (i - left) + 1);
        printf("Char %c left %d right %d count %d", s[i], left, i, longest_count);
    }

    return longest_count;
}
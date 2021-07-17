/*
Link -  https://leetcode.com/problems/backspace-string-compare/
*/

void
process_count(char *s, int *count) {
    printf("\n String is %s \n",s);
    int temp = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '#') {
            if(temp >= 0) {
                count[s[temp]] -= 1;
            }

            temp--;
            count[s[i]] = 0;
        } else {
            temp = i;
            count[s[i]] += 1;
        }
    }

    for (int i = 0; s[i] != '\0'; i++) {
        printf("Count - %c %d", s[i], count[s[i]]);
    }
}

bool backspaceCompare(char * s, char * t){
    int count1[255] = {0};
    int count2[255] = {0};
    process_count(s, count1);
    process_count(t, count2);

    for (int i = 0; i < 255; i++) {
        if (count1[i] != count2[i]) {
            return false;
        }
    }

    return true;
}
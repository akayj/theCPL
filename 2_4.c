/* always in beta. */
#include <stdio.h>

/* squeeze: delete all c from s */
void squeeze(char s[], int c)
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}

/* delete all chars in s1 which can be found in s2 */
void squeeze2(char s1[], char s2[])
{
    int k, i, j;

    for (k = i = 0; s1[i] != '\0'; ++i) {
        for (j = 0; s2[j] != '\0'; ++j)
            if (s1[i] == s2[j])
                break;
        if (s2[j] == '\0')
            s1[k++] = s1[i];
    }
    s1[k] = '\0';
}

int main()
{
    char s1[] = "hello";
    char s2[] = "world";

    printf("s1:%s\n", s1);
    printf("s2:%s\n", s2);

    squeeze2(s1, s2);

    printf("\ns1:%s\n", s1);
    printf("s2:%s\n", s2);

    return 0;
}

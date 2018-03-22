#include <stdio.h>
#include <string.h>

void isPalindrome(char str[]) 
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;
    
    printf("\n\n");
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is Not Palindrome\n\n", str);
            return;
        }
    }
    printf("%s is palindrome\n\n", str);
}

// Driver program to test above function
int main()
{
    isPalindrome("madam");
    isPalindrome("abba");
    isPalindrome("abbccbba");
    isPalindrome("geeks");
    return 0;
}

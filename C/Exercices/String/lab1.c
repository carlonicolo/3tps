#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. Return a statically allocated string
const char *getStaticString()
{
    return "Hello from static string!";
}

// 2. Return a dynamically allocated string
char *getDynamicString()
{
    char *str = (char *)malloc(50 * sizeof(char)); // Allocate memory
    if (str == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    strcpy(str, "Hello from dynamic string!");
    return str;
}

// 3. Use a caller-allocated buffer
void getStringInBuffer(char *buffer, size_t size)
{
    snprintf(buffer, size, "Hello from caller-allocated buffer!");
}

int main()
{
    // Example 1: Static string
    const char *staticStr = getStaticString();
    printf("%s\n", staticStr);

    // Example 2: Dynamic string
    char *dynamicStr = getDynamicString();
    printf("%s\n", dynamicStr);
    free(dynamicStr); // Free the allocated memory

    // Example 3: Caller-allocated buffer
    char buffer[50];
    getStringInBuffer(buffer, sizeof(buffer));
    printf("%s\n", buffer);

    return 0;
}

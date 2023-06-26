#include <stdio.h>

void print_rev(char *str) {
    if (str == NULL) {
        return;
    }
    
    char *end = str;
    while (*end != '\0') {
        end++;
    }
    
    end--;
    
    while (end >= str) {
        printf("%c", *end);
        end--;
    }
}

int main() {
    char str[] = "Holberton!";
    print_rev(str);
    
    return 0;
}

#include <stdio.h>
#include <string.h>

void bitStuffing(const char *input, char *output) {
    int count = 0, j = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        output[j++] = input[i];
        if (input[i] == '1') {
            count++;
            if (count == 5) {
                output[j++] = '0';  
                count = 0;         
            }
        } else {
            count = 0;  
        }
    }
    output[j] = '\0';  
}

int main() {
    char input[100], output[200];
    printf("Enter the bit stream: ");
    scanf("%s", input);
    bitStuffing(input, output);
    printf("Bit-stuffed output: %s\n", output);
    return 0;
}
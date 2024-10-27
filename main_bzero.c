#include "libft.h"

// Helper function to print the buffer in hex
void print_buffer(const char *label, unsigned char *buffer, size_t size) {
    printf("%s:", label);
    for (size_t i = 0; i < size; i++) {
        printf(" %02x", buffer[i]);
    }
    printf("\n");
}

int main() {
    unsigned char buffer[10];

    // Initialize buffer with non-zero values
    for (int i = 0; i < 10; i++) {
        buffer[i] = i + 1;  // Values: 0x01, 0x02, ..., 0x0A
    }

    // Print the buffer before calling ft_bzero
    print_buffer("Before ft_bzero", buffer, 10);

    // Zero out the first 5 bytes using ft_bzero
    bzero(buffer, 5);

    // Print the buffer after calling ft_bzero
    print_buffer("After ft_bzero", buffer, 10);

    // Optional: Test against standard bzero for verification
    unsigned char buffer_std[10];
    memcpy(buffer_std, buffer, 10); // Copy buffer to buffer_std
    bzero(buffer_std, 5);           // Zero the first 5 bytes with standard bzero

    // Compare results
    printf("Comparison with standard bzero: %s\n",
           memcmp(buffer, buffer_std, 10) == 0 ? "PASS" : "FAIL");

    return 0;
}

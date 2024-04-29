#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Hàm mã hóa mật mã Caesar
void caesarCipher(char *s, int k) {
    // Duyệt từng ký tự trong chuỗi
    for (int i = 0; s[i] != '\0'; ++i) {
        // Nếu là ký tự chữ cái
        if (isalpha(s[i])) {
            // Xác định vị trí mới của ký tự sau khi dịch chuyển
            char base = islower(s[i]) ? 'a' : 'A';
            s[i] = base + (s[i] - base + k) % 26;
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);
    getchar(); // Đọc và bỏ qua ký tự '\n' trong buffer

    for (int i = 0; i < N; ++i) {
        int M, k;
        scanf("%d %d", &M, &k);
        getchar(); // Đọc và bỏ qua ký tự '\n' trong buffer

        char message[1000];
        gets(message);// Đọc chuỗi bản tin

        // Loại bỏ ký tự '\n' ở cuối chuỗi
        message[strcspn(message, "\n")] = '\0';

        // Mã hóa chuỗi bản tin theo mật mã Caesar với khóa k
        caesarCipher(message, k);

        // In chuỗi mã hóa ra màn hình
        printf("%s\n", message);
    }

    return 0;
}

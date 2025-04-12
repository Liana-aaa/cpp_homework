#include <stdio.h>

int h() {
    int local = 5;
    char* l_ptr = (char*)&local;
    printf("&local = %p\n", &local);
    
    for (int i = 0; i < 65; i++) {
        printf("%p\t", (0xFF & *(l_ptr - i)));
        if ((i) % 8 == 0) {
            printf("\n");
        }
    }
    
    return 0;
}

int f() {
    char* f_ptr = (char*)&f;
    printf("&f_ptr = %p\n", f_ptr);
    h();      
    return 0;
}

// the output of this program is:

// &f_ptr = 0x55a7c00ed300
// &local = 0x7ffef0ede99c
// 0x5
// 0x80    0xa2    0x2     0xe0    (nil)   (nil)   0x7f    0xfe
// 0xf0    0xed    0xe9    0x9c    (nil)   (nil)   (nil)   0x10
// 0xf5    0xd0    0xf3    0xb0    (nil)   (nil)   (nil)   (nil)
// (nil)   (nil)   (nil)   (nil)   (nil)   (nil)   0x55    0xa7
// 0xc0    0xe     0xd2    0xbf    (nil)   (nil)   0x7f    0xfe
// 0xf0    0xed    0xe9    0xa0    (nil)   (nil)   (nil)   (nil)
// (nil)   (nil)   (nil)   (nil)   (nil)   (nil)   (nil)   (nil)
// (nil)   (nil)   (nil)   (nil)   (nil)   (nil)   (nil)   (nil)
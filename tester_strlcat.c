#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

void test_ft_strlcat()
{
    // اختبار تجاوز المخزن المؤقت
    char buffer[10];
    const char *src = "Hello";
    
    // قم بملء الـ buffer بقيم محددة لتجنب أي تأثير غير متوقع
    memset(buffer, 'A', sizeof(buffer) - 1);
    buffer[sizeof(buffer) - 1] = '\0';

    // اختبار إذا كان dst أصغر من src
    size_t result = ft_strlcat(buffer, src, sizeof(buffer));
    
    printf("Test 1 (Buffer overflow test):\n");
    printf("Buffer after ft_strlcat: \"%s\"\n", buffer);
    printf("Length returned: %zu\n", result);
    printf("Expected length: %zu\n\n", strlen("AAAAAAAAA") + strlen(src));

    // اختبار تجاوز الحجم الصحيح
    char *dst_large = (char *)malloc(20 * sizeof(char));
    memset(dst_large, 0, 20);
    strcpy(dst_large, "Test");

    printf("Test 2 (Normal concatenation test):\n");
    result = ft_strlcat(dst_large, src, 20);
    printf("Destination after ft_strlcat: \"%s\"\n", dst_large);
    printf("Length returned: %zu\n", result);
    printf("Expected length: %zu\n", strlen("Test") + strlen(src));

    free(dst_large);

    // اختبار segmentation fault عبر تمرير مؤشر NULL
    printf("Test 3 (Segmentation fault test):\n");
    printf("Trying with NULL as destination...\n");
    
    // هنا يمكن أن يحدث "segmentation fault" إذا كان الكود لا يتحقق من القيم null
    // لذا تعليق السطر لحمايته:
    // ft_strlcat(NULL, src, 5);  // قم بفك التعليق إذا كنت تريد الاختبار الحقيقي على بيئة حقيقية
}

int main()
{
    test_ft_strlcat();
    return 0;
}

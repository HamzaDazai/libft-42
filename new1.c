#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void test_trim(char *str, char *set)
{
    char *trimmed = ft_strtrim(str, set);
    if (trimmed)
    {
        printf("Original: '%s', Set: '%s', Trimmed: '%s'\n", str, set, trimmed);
        free(trimmed);
    }
    else
    {
        printf("Original: '%s', Set: '%s', Trimming failed.\n", str, set);
    }
}

int main(void)
{
    // اختبار سلسلة ذات حروف زائدة في البداية والنهاية
    test_trim("  hello world  ", " ");
    
    // اختبار إزالة حروف خاصة فقط في البداية
    test_trim("...welcome...", ".");
    
    // اختبار إزالة حروف خاصة فقط في النهاية
    test_trim("test##", "#");
    
    // اختبار عدم وجود أي حروف مطابقة في `set`
    test_trim("no match here", "xyz");
    
    // اختبار إزالة كل الحروف (سلسلة فارغة كنتيجة)
    test_trim("aaa", "a");
    
    // اختبار سلسلة فارغة
    test_trim("", "abc");
    
    // اختبار `set` فارغ
    test_trim("hello", "");
    
    // اختبار حروف مختلفة في البداية والنهاية
    test_trim("**example text***", "*");
    
    // سلسلة تحتوي على مسافات زائدة في البداية والنهاية
    test_trim("   hello   ", " ");

    return 0;
}

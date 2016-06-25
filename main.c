#include <stdio.h>
#include <string.h>

/************************
	主函数
************************/
int main (int argc, char *argv[])
{
	char format_string[13] = "#,###,###.##";
	char digit_string[10] = "123456779";

	specified_format_output(format_string, digit_string);

    char *str = "helloworld";
    char array[12] = "helloworld";
    printf("%lu\n", sizeof(*str));  //字符1字节宽
    printf("%lu\n", sizeof(str));   //地址8字节宽
    printf("%lu\n", sizeof(array));

    printf("%lu\n", strlen(str));
    printf("%lu\n", strlen(array));

    str[9] = 'a';

    for (unsigned long i = 0; i < strlen(str)+2; i++)
        printf("str[%lu] = '%c' %d\n", i, str[i], str[i]);

    for (unsigned long i =0; i < sizeof(array); i++)
        printf("array[%lu] = '%c' %d\n", i, array[i], array[i]);

    return 0;
}

# printf

## Resources
- [Secrets of printf](./Secrets_of_printf.pdf)
- [printf - cplusplus.com](http://www.cplusplus.com/reference/cstdio/printf/)

## Table of Content
- [Description](#description)
- [Parameters](#parameters)
    - [format](#format)
      - [flags](#flags)
      - [width](#width)
      - [.precision](#precision)
      - [length](#length)
      - [specifier](#specifier)
    - ...
- [Return value](#return-value)
- [Example](#example)

---

### Description

This function writes a string to the standard output (stdout). If the string contains special sequences starting with the % character, then additional arguments provided after the string are formatted and inserted into the resulting string, replacing the respective sequences.

---

### Parameters

#### format
It can optionally contain embedded **format specifiers[^1]** that are replaced by the values specified in subsequent additional arguments and formatted as requested.

[^1]: Format specifiers are placeholders for values that are to be formatted and inserted into the resulting string. The format specifier consists of a percent sign (%) followed by one or more of these elements, in order:
```
%[flags][width][.precision][length]specifier
```


> ##### flags

| flag | description |
|:---:|:---|
| - | Left-justify within the given field width; Right justification is the default (see width sub-specifier). |
| + | Forces to preceed the result with a plus or minus sign (+ or -) even for positive numbers. By default, only negative numbers are preceded with a - sign. |
| (space) | If no sign is going to be written, a blank space is inserted before the value. |
| # | Used with o, x or X specifiers the value is preceeded with 0, 0x or 0X respectively for values different than zero. Used with a, A, e, E, f, F, g or G it forces the written output to contain a decimal point even if no more digits follow. By default, if no digits follow, no decimal point is written. |
| 0 | Left-pads the number with zeroes (0) instead of spaces when padding is specified (see width sub-specifier). |

> ##### width

|width|description|
|:---:|:---|
|*|The width is not specified in the format string, but as an additional integer value argument preceding the argument that has to be formatted.|
|number|The minimum number of characters to be printed. If the value to be printed is shorter than this number, the result is padded with blank spaces. The value is not truncated even if the result is larger.|


> ##### .precision

|precision|description|
|:---:|:---|
|*|The precision is not specified in the format string, but as an additional integer value argument preceding the argument that has to be formatted.|
|number|For integer specifiers (d, i, o, u, x, X): this is the minimum number of digits to be written. If the value to be written is shorter than this number, the result is padded with leading zeros. The value is not truncated even if the result is longer.|

> ##### length

|length|description|
|:---:|:---|
|h|The argument is interpreted as a short int or unsigned short int, respectively.|
|l|The argument is interpreted as a long int or unsigned long int, respectively.|

> ##### specifier

|specifier|description|
|:---:|:---|
|d or i|Signed decimal integer.|
|u|Unsigned decimal integer.|
|o|Unsigned octal.|
|x|Unsigned hexadecimal integer (letters in lower case).|
|X|Unsigned hexadecimal integer (letters in upper case).|
|s|String of characters.|
|c|Single character.|
|p|Pointer address.|
|b| The unsigned int argument is converted to binary.|
|r| Reversed string.|
|R| ROT13 encryption.|
|S| The string is printed but non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: `\x`, followed by the ASCII code value in hexadecimal (upper case - always 2 characters).|

 #### ... (variable arguments)
Depending on the format string, the function may expect a sequence of additional arguments, each containing a value to be used to replace a format specifier in the format string (or a pointer to a storage location, for n).
There should be at least as many of these arguments as the number of values specified in the format specifiers. Additional arguments are ignored by the function.

---

### Return value

On success, the total number of characters written is returned. On failure, a negative number is returned.

---

### Example

```c
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{

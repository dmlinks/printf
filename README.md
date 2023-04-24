# printf
# `_printf()`
As part of the requirement for the ALX software engineering course, we were to emulate the `C` Standard Library Function `printf()`, making our own function `_printf()` to work like it. It was the first **team project** that we did while in the ALX SE program.

## **Synopsis**
`int _printf(const char *format, ...);` is the protype of the function, and this implies that the function takes one madatory argument that can not be altered, since it's a const, and some optional varying number of arguments. The content of the string `format` determines what happens to the other argument(s), if any.

`_printf()` was written to use a local buffer of 1024 bytes when printing although it can print larger sets of data. Its return value ( after a successful execution) is the total number of characters printed to stdout, or -1 if an output error is encountered.

`_printf()` is supposed to print every character that is within the double quotes (in the string) to stdout, except special characters, such as format specifiers that is preceded by '%', which initiates some conversion that will involve some optional argument(s).

A **conversion specifier** usually follows the '%', which determines the exact conversion to be made. Between the percentage symbol (%) and the *conversion specifier*, there may be (in the following order):

> Zero or more **flags**
>
> An optional field **width**
>
> An optional **precision** modifier
>
> An optional **length** modifier

**The flag characters**

|**Flag**| Description  |
|--|--|
|**#**| For **o** conversions the first character of the output string is made zero (by prefixing a 0 if it was not zero already).  For **x** and **X** conversions, a non zero result has the string "**0x**" or "**0X**" respectively added. |
|**0**| (Not implemented yet) The  value should be zero padded. For **d**, **i**, **o**, **u**, **x**, and **X** the converted value is padded on the left with zeros. If the 0 and **-** flags both appear,the **0** flag is ignored. If a precision is given with a numeric conversion, the **0** flag is ignored.|
|**-**|(Minus sign, not implemented yet) The converted value is to be left adjusted on the field boundary, (Default is right justification) and  padded  with  blanks  in  the right rather than on the left with blanks or zeros. This flag overrides **0** if both are given.|
|' '| (Blank Space) The argument is padded with a single blank space before a positive number or empty string produced by a signed conversion.|
|**+**| A sign (+ or -) should always be placed before a number produced with a signed conversion.  By default, only negative numbers have this sign.|

**The field width**

An  optional decimal digit string (with nonzero first digit) specifying a minimum field width.  If  the  converted  value  has  fewer characters  than  the field width, it will be padded with spaces on the left if the flag - is not present, and on the right  if  it  is present.  A character * can be used instead of a decimal string. In this case, an argument passed to the function will be taken as  the width value.

    printf("%5d", number);

or

	printf("%*d", width, number);

**The precision**

 An  optional  precision,  in  the  form  of a period ('.')  followed by an optional decimal digit string.  A negative precision is taken  as  if  the precision were omitted.  This gives the minimum number of digits to appear for d, i, o, u, x, and X conversions,  or the  maximum  number of characters to be printed from a string for s and S conversions. A character * can be used instead of a  decimal string. In this case, an argument passed to the function will be taken as the precision value.

    printf("%.3d", number);

  or

    printf("%.*d", precision, number);

**The length modifiers**

|Modifier| Description |
|--|--|
|**l**| An integer conversion to a **long int** or **unsigned long int** argument.  |
|**h**| An integer conversion to a **short int** or **unsigned short int** argument. |

**The conversion specifier**

|Specifier| Description |
|--|--|
|**d, i**|The argument **int** is converted to a signed decimal notation. If precision is present, it gives the minimum number of digits that must appear; if the converted value requires fewer digits, then it is padded with zeros on the left. Default precision is 1.|
|**o, u, x, X**|The argument is converted to unsigned octal (**o**), unsigned decimal (**u**), or unsigned hexamedical (**x** and **X**) notation. The letters abcdef are used for x conversion and the letters ABCDEF are used for X conversion. If precision is present, it will give  the  minimum  number  of  digits  that  must appear; if the converted value requires fewer digits, then it will be padded with zeros. By default the precision is 1.  |
|**c**|The  int argument is converted to an unsigned char and the resulting character is written. The representation of characters is based off the ASCII coding.|
|**s**|The argument received is expected to be a pointer type char * to an array of characters.  Characters from this array are printed up  to  (but  not including) a null byte  (**'\0'**).  If precision is specified, then this will determine how many characters are taken into account for printing.|
|**p**|A void * pointer argument is printed as hexadecimal in lower caps representing an adress in memory.|
|**%**|A  ' **%** ' character is written and no conversion is made. The specification is as follows: **%%**. |
|**b**|The argument is converted to an unsigned int value and then operated to get its binary representation (base 2).|
|**S**| The  argument  received  is expected to be a pointer type char * to an array of characters.  Characters from this array are printed up to (but not including) a null byte  ('\0').  Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by  the  ASCII  code value in hexadecimal (upper case - always 2 characters). |
|**r**|The  argument received is expected to be a pointer type char * to an array of characters.  Characters from this array are printed in reverse order up to (but not including) a null byte  ('\0').  |
|**R**|The argument received is expected to be a pointer type char * to an array of characters.  Characters from this array  are  encoded  to  ROT13  and printed in order up to (but not including a null byte  ('\0').  |

## Installation and Testing

Simply clone the repository by copying the code below to clone the repository on your local machine (Linux distro)
```
git clone https://github.com/dmlinks/printf.git
```

After cloning, navigate into the directory **printf** and write a `main.c` file to test `_printf()`, and then compile, probably with the command `gcc *.c -o _printf` and run the file (`./_printf`)

Alternatively,the sub directory [test_files](./test_files) contains a main file and an executable named *main* that will be available on your local machine after cloning the repository, you may take a look at the source code and run the executable to see the output. You may as well modify the content of the `main.c`, copy it to the root directory and recompile

```Submitted by:```
[**Tam Bob-manuel**](https://github.com/Tam-BobManuel) and [**Dosunmu Moyosoreoluwa**](https://github.com/dmlinks)

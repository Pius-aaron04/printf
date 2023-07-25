# ------------ 0x11. C - printf  --------------
This project is an implementation of the printf function in the C standard library.


Flag	Description
#	The value should be converted to an alternate form.
0	The value should be padded with zeros rather than spaces.
-	The output should be left-aligned on the field boundary since the default is right-alignment on the field boundary.
' '	(a space) A blank space should be left before a positive number that is produced by a sign conversion.
+	A sign (+ or -) should always be placed before a number produced by a signed conversion. By default only the signs of negative numbers are shown.


Width And Precision
The width and precision fields can be provided as integers beginning with a non-zero digit. They can also be specified with the * sign. If they're specified with the * sign, the value is read from the argument list provided to _printf. The maximum value of the width and precision fields is 2147483647.

Supported Length Modifiers

Length	Description
h	Modifies the integer to be a short signed or unsigned integer
l	Modifies the integer to be a long signed or unsigned integer

Supported Conversion Specifiers

Specifier	Description
c	Prints the ASCII character representation of an integer.
s	Prints the characters of a char * that is terminated by a null character (\0).
d, i	Prints the signed decimal notation of an integer argument.
f	Prints the signed decimal notation of an IEEE 754 floating-point argument.
o, u, x, X	Prints the unsigned int argumen in unsigned octal notation (o), decimal notation (u) or hexadecimal notation (x and X). x uses lower-case hexadecimal characters and X uses the upper-case hexadecimal characters.
%	Prints the "%" sign only.
p	Prints a void * argument in hexadecimal form.
b	Prints the binary representation of an unsigned integer.
R	Prints the rot13 translation of a string.
r	Prints the reverse of a string.
S	Prints a string and the hexadecimal representation of unprintable characters (prefixed with \x) in a string that is null terminated.

HJKL,

By: Pius Aaron and Wanjiru Wanjiku

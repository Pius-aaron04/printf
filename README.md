# ------------ 0x11. C - printf  --------------
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


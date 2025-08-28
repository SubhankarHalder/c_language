# Chapter Notes

## Section 1.1

- A C program consists of functions and variables
- A **function** contains *statements* that specify the computing operations to be done
- A **function** contains *variables*  that store values used during the computation
- The **main** function is special - programs begins executing at the beginning of **main**
- Every program must have a **main** somewhere
- One must use **\n** to include a newline character in the *printf* argument
- Some Escape Sequences:

| Escape Sequence | Description |
| --- | --- |
| \n  | New Line |
| \t  | Tab |
| \b  | Backspace |
| \"  | Double Quote |
| \\  | Backslash |

## Section 1.2

- All variables must be declared before they are used
- The variables are usually declared at the beginning of the function before any executable statements
- A *declaration* announces the properties of variable. It consists of:
    - A **type** name
    - The variable's **name**
- Some Data Types that C provides are:
    - **int**: integers
    - **float**: decimals
    - **char**: single byte character
    - **short**: short integer
    - **long**: long integer
    - **double**: double-precision floating point
- In C, integer division **truncates** and any fractional part is discarded
- Some printf Format Specifier and its Explanation

| printf Format Specifier | Explanation |
| --- | --- |
| %d | Print as decimal integer |
| %6d | Print as decimal integer |
| %f | Print as floatin point |
| %6f | Print as floating point, at least 6 characters wide |
| %.2f | Print as floating point, 2 characters after decimal point |
| %6.2f | Print as floating point, at least 6 wide and 2 after decimal point|
| %o | Octal |
| %x | Hexadecimal |
| %c | Character |
| %s | String |
| %% | For % itself |

## Section 1.3

- For Loop:
`for (fahr = 0; fahr <= 300; fahr = fahr + 20)`



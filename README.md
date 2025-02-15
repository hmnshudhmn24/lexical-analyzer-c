# Lexical Analyzer in C

## Description
A simple **Lexical Analyzer** implemented in C that tokenizes a given C program. It recognizes:
- **Keywords** (e.g., int, float, if, else)
- **Identifiers** (variable names, function names)
- **Numbers**
- **Operators** (+, -, *, /, <, >, =)
- **Special Symbols** (;, (), {})

## Files
- `lexical_analyzer.c` - Main C program for tokenization
- `lexical_analyzer.h` - Header file
- `test.c` - Sample test program
- `Makefile` - Compilation script

## Usage
1. Compile the program using `make`:
   ```sh
   make
   ```
2. Run the analyzer:
   ```sh
   ./lexical_analyzer
   ```

## Example Output
For `test.c`, the output will be:
```
Keyword: int
Identifier: main
Symbol: (
Symbol: )
Symbol: {
Keyword: int
Identifier: x
Operator: =
Number: 10
Symbol: ;
Keyword: float
Identifier: y
Operator: =
Number: 5.5
Symbol: ;
Keyword: if
Symbol: (
Identifier: x
Operator: >
Identifier: y
Symbol: )
Symbol: {
Identifier: x
Operator: =
Identifier: x
Operator: -
Number: 1
Symbol: ;
Symbol: }
Keyword: return
Number: 0
Symbol: ;
Symbol: }
```
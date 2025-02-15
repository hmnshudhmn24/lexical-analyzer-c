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

# Helal.hpp Library V1.4
Open Source Static Library in c++  [ Helal.lib  ]
## Installation

Use the package manager [Helal](https://github.com/maq77/Helal_hpp_Library) to install Helal.lib.

## Library Includes
The "Helal" library provides several utility functions and namespaces to aid in algorithm analysis and handling errors. 
Here's a summary of its main functionalities:

#### 1-Template Typedefs and Aliases:

Defines aliases for common data types and containers such as vector, pair, array, etc., using templates for flexibility.
#### 2-Utility Macros and Functions:

Provides utility macros for common operations like iteration (FOR, F0R, ROF, R0F, rep, each), 
vector operations (sz, bg, all, rall, sor, rsz, ins, pb, eb, ft, bk, lb, ub, lwb, upb), and 
comparison (ckmin, ckmax, get_min, get_max, remDup).
#### 3-Logging Namespace:

Offers functionality to log messages with timestamps into a file.
#### 4-Debug Namespace:

Provides tools for measuring and logging execution time.
#### 5-Error Handling Namespace:

Defines exception classes and functions for handling various runtime errors 
such as invalid input, file I/O errors, and other runtime errors.
#### 6-File I/O Namespace:

Implements functions for efficient input/output operations including reading from and writing to files.
#### 7-Random Number Generation:

Implements random number generation functions 
using both traditional (rand and srand) and 
modern (mt19937 and <random>) approaches.
#### 8-Miscellaneous Functions:

Includes miscellaneous functions like getRandomElement to retrieve a random element from an array.
Additionally, the library includes some commented-out code 
for file I/O operations that can be enabled if needed.

This summary provides an overview of the library's functionality, 
helping users understand its capabilities and how to use it effectively.

## Visual Studio
```bash
1)Go to properties of Your Project
2)VC++ Directories
3)Include Directoies
4)Then Add Library Directory such as (..\Helal).
```
## CodeBlocks
```bash
1)Go to Project then Build Options
2)Search Directories
3)then ADD
4)Then Add Library Directory such as (..\Helal).
```

## Contributing

Pull requests are welcome. For major changes, please open an issue first
to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
MIT License
Copyright (c) [2024] [Mohamed A. Helal] [Helal Library C++]
[MIT](https://choosealicense.com/licenses/mit/)

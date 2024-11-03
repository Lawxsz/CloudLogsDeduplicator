## Release: CloudLogs Deduplicator

### Description
**CloudLogs Deduplicator** is a command-line tool designed for merging CloudLOGS and ULP OSINT logs into a single text file while ensuring that duplicate lines are eliminated. This utility is especially useful for users dealing with large datasets of log files, allowing for efficient data consolidation and analysis.

### Features
- Combines multiple `.txt` log files from the `cloud` directory.
- Eliminates duplicate lines to ensure a unique output.
- Outputs the consolidated log data into `Binded_Texts.txt`.
- Displays the total number of unique lines written to the output file.

### Usage
1. Ensure you have a directory named `cloud` containing the `.txt` log files you want to merge.
2. Compile the source code using a C++ compiler.
3. Run the executable generated from the compiled code.
4. The output will be saved in a file named `Binded_Texts.txt` in the same directory.
5. The tool will print the total number of unique lines added to the output file.

## Usage without install C++ Developer
- Use the RELEASE .EXE version and done!

### Requirements
- C++11 or later
- Standard libraries: `<iostream>`, `<fstream>`, `<sstream>`, `<unordered_set>`, `<filesystem>`, `<string>`
### Installation
Clone the repository and navigate to the project directory:

```bash
git clone https://github.com/lawxsz/CloudLogsDeduplicator.git
cd CloudLogsDeduplicator
g++ -o CloudLogsDeduplicator main.cpp
```
### Acknowledgments
This project was created by t.me/lawxszdev.

For support or inquiries, please contact via Telegram: t.me/lawxsz

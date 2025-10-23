class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int read = 0;   // pointer to read characters
        int write = 0;  // pointer to write compressed result

        while (read < n) {
            char currentChar = chars[read];  // current group’s character
            int count = 0;

            // count how many times currentChar repeats
            while (read < n && chars[read] == currentChar) {
                read++;
                count++;
            }

            // write the character once
            chars[write] = currentChar;
            write++;

            // if count > 1, convert it to digits and write them one by one
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[write] = c;
                    write++;
                }
            }
        }

        // write now represents the new compressed length
        return write;
    }
};

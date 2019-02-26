# Author: Michael Snider
# Date: 2-25-19
# Purpose: Print the number of lines, words, and characters in the current
#          directory.

import sys

for singleline in sys.stdin:
    pass

stats = singleline.split()

print("# of lines: " + stats[0])
print("# of words: " + stats[1])
print("# of characters: " + stats[2])

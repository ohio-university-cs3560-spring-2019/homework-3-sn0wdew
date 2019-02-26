#!/usr/bin/ruby

# Author: Michael Snider
# Date: 2-25-19
# Purpose: Replace all 'f' characters with 'gh', replace all 'sh' characters
#          with 'ti', and replace all 'i' characters with o. This works with all
#          cases.

str = $stdin.read

#f replacement
str = str.gsub(/\bf/, 'gh')
str = str.gsub(/\bF/, 'GH')
#ti replacement
str = str.gsub(/(sh)\b/, 'ti')
str = str.gsub(/(Sh)\b/, 'Ti')
str = str.gsub(/(SH)\b/, 'TI')
str = str.gsub(/(sH)\b/, 'tI')
#i relacement
str = str.gsub(/\Bi\B/, 'o')
str = str.gsub(/\BI\B/, 'O')

puts str

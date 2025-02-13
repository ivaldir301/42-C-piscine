find . -type f -name "*.sh" -exec basename -s ".sh" {} \;

# s stands for search
# /\.[^.]*$/ it's the pattern
# \. matches the literal period
# [^.]* matches n character that are not period
# $ matches the end of the file
# // it's the replacement

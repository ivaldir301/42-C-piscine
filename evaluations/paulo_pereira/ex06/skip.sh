ls -l | sed -n 'p;n'

# -n allow us to print especific lines
# p prints the current line
# n skips the next line


# ls -l | awk 'NR%2==1'
#
# awk allow us to procces the input line by line
# and passing %2==1 we're saying that we just want to display the line number
# that are even, that the mod of n/2 = 1...

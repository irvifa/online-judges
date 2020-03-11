# Read from the file words.txt and output the word frequency list to stdout.
#!/bin/bash
cat words.txt | tr [:space:] "\n" | sed '/^$/d' | tr '[:upper:]' '[:lower:]'|sort|uniq -c|sort -nr | awk '{ print $2,$1}'


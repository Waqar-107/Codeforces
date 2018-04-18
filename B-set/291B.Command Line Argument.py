# from dust i have come dust i will be

import shlex

s=input();
a=shlex.split(s)

for x in a:
    print('<'+x+'>')
